#include <iostream>

int main() {
    int num = 6; // Example input
    
    if (num == 0) {
        std::cout << 1 << std::endl;
        return 0;
    }
    
    unsigned int mask = ~0; // Initialize mask with all bits set to 1
    
    // Shift the mask left until it no longer overlaps with the most significant bit of num
    while (num & mask) {
        mask <<= 1;
    }
    
    // Calculate the complement using the adjusted mask
    int complement = ~mask & ~num;
    
    std::cout << complement << std::endl; // Output the result
    
    return 0;
}
