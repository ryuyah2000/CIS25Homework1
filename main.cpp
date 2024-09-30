// prints out an unsigned int as its binary representation
// code by Ryuya


#include <iostream>

int main() {
    unsigned int num;
    std::cout << "Enter Number: ";
    std::cin >> num;
    
    unsigned int mask = 1 << (sizeof(int) * 8) - 1; // mask is 1 on the most significant bit, 0 on every other bit
    
    while (mask != 0) {
        std::cout << (num & mask ? 1 : 0); // prints out 1 if most significant bit is 1, otherwise 0
        mask = mask >> 1;
    }

    return 0;
}
