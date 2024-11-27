// Lesson 3 - TimeComplexity / Task 3 / TapeEquilibrium

#include <limits>
#include <cmath>
#include "Exo6.h"
#include <iostream>
#include <vector>

int TapeEquilibrium(std::vector<int> &A) 
{
    std::vector<long long> totals;
    int N = A.size();
    
    long long total = 0;

    for (int i=0; i<N; i++)
    {
        total += A[i];
        totals.push_back(total);
    }
    

    long long diffMin = std::numeric_limits<long long>::max();
    

    for (int i=0; i<(N-1); i++) 
    {
        long long diff = abs( 2*totals[i] - total );
        if ( diff < diffMin ) 
        {
            diffMin = diff;
        }
    }
    
    std::cout << "TapeEquilibrium : " << diffMin << '\n';
    return diffMin;
}