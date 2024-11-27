// Lesson 3 - TimeComplexity / Task 1 / FrogJmp
#include <cmath>
#include "Exo4.h"
#include <iostream>

int FrogJmp(int X, int Y, int D) 
{
    double jumpsNumbers = (((double)Y) - ((double)X)) / ((double)D);

    std::cout << "FrogJmp : " << (ceil(jumpsNumbers)) << '\n';
    return (ceil(jumpsNumbers));
}