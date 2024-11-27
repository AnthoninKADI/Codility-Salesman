// Lesson 3 - TimeComplexity / Task 2 / PermMissingElem
// Wrong : large_range / large2

#include <vector>
#include <iostream>

 int PermMissingElem(std::vector<int> &A) 
 {
     int N = A.size();
     int total  = 0;
     
     for (int i=0; i<N; i++) 
     {
         total  += A[i];
     }
     
     double missingElement = (N+1)*(N+2)/2 - total ;
     std::cout << "PermMissingElem : " << missingElement << '\n';
     return missingElement;
 }