
#include "factorialmaths.hpp"

int Maths::factorialmaths(int num1)
{
    int i=1;
    int num2= 1;
    while(i<=num1)
    {
        num2 *= i;
        i++;
    }
    return num2;
    
}