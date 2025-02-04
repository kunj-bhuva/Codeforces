#include <iostream>
#include <map>

int main() {
    std::multimap<int, int> myMultimap;

    // Inserting values
    myMultimap.insert(std::make_pair(1, 10));
    myMultimap.insert(std::make_pair(3, 25));
    myMultimap.insert(std::make_pair(3, 35));
    myMultimap.insert(std::make_pair(1, 20));
    myMultimap.insert(std::make_pair(2, 15));
    

    // Iterating over the multimap
    for (auto it = myMultimap.begin(); it != myMultimap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}
