import math

def is_product_of_binary(num):
    # Check if the number is a perfect square
    sqrt_num = int(math.sqrt(num))
    if sqrt_num * sqrt_num != num:
        return False
    
    # Check if the square root can be represented as a binary number
    binary_sqrt = bin(sqrt_num)[2:]
    if '1' in binary_sqrt[1:]:
        return False

    return True

# Example usage
number = 14641
result = is_product_of_binary(number)
if result:
    print(f"Yes, {number} can be made by multiplying two binary numbers.")
else:
    print(f"No, {number} cannot be made by multiplying two binary numbers.")
