// Lesson 2 - Arrays / Task 1 / CyclicRotation
#include <vector>
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
    
    //arrayRotation.insert(arrayRotation.end(), A.end() - K, A.end());
    //arrayRotation.insert(arrayRotation.end(), A.begin(), A.end() - K);

    std::cout << "CyclicRotation : [";
    for(int i = 0; i < N; i++)
    {
        arrayRotation[(i + K) % N] = A[i];
    }
    std::cout << "] " << '\n';
    
    return arrayRotation;
}

