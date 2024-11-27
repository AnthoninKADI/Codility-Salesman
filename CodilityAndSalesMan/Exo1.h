// Lesson 1 - Iterations / Task 1 / BinaryGap
#include <algorithm>
#include <bitset>
#include <string>
#include <iostream>

int BinaryGap(int N)
{
    int max_binGap = 0;
    int current_binGap = 0;

    std::string binary = std::bitset<32>(N).to_string();
    binary = binary.substr(binary.find("1"));

    for (char bit : binary)
    {
        if ( bit == '0')
        {
            current_binGap++;
        }
        else
        {
            max_binGap = std::max(max_binGap, current_binGap);
            current_binGap = 0;
        }
    }

    std::cout << "BinaryGap : " << max_binGap << '\n';
    return max_binGap;
}