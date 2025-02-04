module lift_( input wire clk,        // Clock signal
    input wire reset,      // Reset input
    input wire PB1, PB2, PB3,  // Push buttons for floors 1, 2, and 3
    input wire SBT, SMM, SMP, STP,  // Sensors for bottom, middle-, middle+, top
    output reg [2:0] state,  // Output state of the lift
    output reg [1:0] motor   // Motor state output
    );

    // State encoding
   
    localparam F1 = 3'b000,  // Floor 1
        F2 = 3'b001,  // Floor 2
        F3 = 3'b010,  // Floor 3
        MU2 = 3'b011, // Moving up to Floor 2
        MU3 = 3'b100, // Moving up to Floor 3
        MD2 = 3'b101, // Moving down to Floor 2
        MD1 = 3'b110;  // Moving down to Floor 1
   

    reg [2:0] current_state, next_state;

    // State register
    always @(posedge clk or posedge reset) begin
        if (reset)
            current_state <= F1;
        else
            current_state <= next_state;
    end

    // Next state logic
    always @(*) begin
        case (current_state)
            F1: begin
                if (PB2) next_state = MU2;
                else if (PB3) next_state = MU3;
                else next_state = F1;
            end
            F2: begin
                if (PB1) next_state = MD1;
                else if (PB3) next_state = MU3;
                else next_state = F2;
            end
            F3: begin
                if (PB1) next_state = MD1;
                else if (PB2) next_state = MD2;
                else next_state = F3;
            end
            MU2: begin
                if (SMM && SMP) next_state = F2;
                else next_state = MU2;
            end
            MU3: begin
                if (STP) next_state = F3;
                else next_state = MU3;
            end
            MD2: begin
                if (SMM && SMP) next_state = F2;
                else next_state = MD2;
            end
            MD1: begin
                if (SBT) next_state = F1;
                else next_state = MD1;
            end
            default: next_state = F1;
        endcase
    end

    // Output logic
    always @(current_state) begin
        case (current_state)
            F1, F2, F3: motor = 2'b00;  // Motor off
            MU2, MU3: motor = 2'b01;    // Motor upwards
            MD1, MD2: motor = 2'b10;    // Motor downwards
            default: motor = 2'b00;     // Motor off
        endcase
    end

    // Assign the state output for testing or debugging
    always @(current_state) begin
        state = current_state;
    end

endmodule
