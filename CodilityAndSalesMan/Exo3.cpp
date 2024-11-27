// Lesson 2 - Arrays / Task 2 / OddOccurencesInArray
#include <vector>
#include "Exo3.h"
#include <iostream>

int OddOccurencesInArray(std::vector<int> &A) 
{
    int size = A.size();
    int odd = 0;
    
    for (int i=0; i<size; i++) 
    {
        odd ^= A[i];
    }

    std::cout << "OddOccurencesInArray : "<< odd << '\n';
    return odd;
}
