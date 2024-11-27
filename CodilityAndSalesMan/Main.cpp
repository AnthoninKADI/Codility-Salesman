#include "Exo1.h"
#include "Exo2.h"
#include "Exo3.h"
#include "Exo4.h"
#include "Exo5.h"
#include "Exo6.h"
#include "Salesman.h"

int main(int argc, char* argv[])
{
    // exemples utilisés dans codility pour les vérifications
    
    BinaryGap(1041); // Lesson 1 - Iterations / Task 1 / BinaryGap

    std::vector<int> A = {3, 8, 9, 7, 6}; 
    CyclicRotation(A, 3); // Lesson 2 - Arrays / Task 1 / CyclicRotation

    std::vector<int> B = {9, 3, 9, 3, 9, 7, 9}; 
    OddOccurencesInArray(B); // Lesson 2 - Arrays / Task 2 / OddOccurencesInArray

    FrogJmp(10, 85, 30); // Lesson 3 - TimeComplexity / Task 1 / FrogJmp

    std::vector<int> C = {2, 3, 1, 5};
    PermMissingElem(C); // Lesson 3 - TimeComplexity / Task 2 / PermMissingElem

    std::vector<int> D = {3, 1, 2, 4, 3};
    TapeEquilibrium(D); // Lesson 3 - TimeComplexity / Task 3 / TapeEquilibrium

    salesman();
}
