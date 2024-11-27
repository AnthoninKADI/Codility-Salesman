// Lesson 2 - Arrays / Task 1 / CyclicRotation
#include <vector>
#include "Exo2.h"
#include <iostream>

std::vector<int> CyclicRotation(std::vector<int> &A, int K) 
{
    int N = A.size();
    if (N == 0)
    {
        return A;
    }

    K = K % N;   
    if (K == 0)
    {
        return A;
    }

    std::vector<int> arrayRotation(N);
    
    //std::cout << "CyclicRotation : [";
    for(int i = 0; i < N; i++)
    {
        arrayRotation[(i + K) % N] = A[i];
    }
    //std::cout << "] " << '\n';

    std::cout << "CyclicRotation : [";
    for (int i = 0; i < N; i++)
    {
        std::cout << arrayRotation[i];
        if (i < N - 1) 
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return arrayRotation;
}

