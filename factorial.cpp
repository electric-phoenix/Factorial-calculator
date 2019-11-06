#include <iostream>
#include "factorialmaths.hpp"
using namespace std;

int num1, num2, cont;
int main()
{
    cout << "Factorial calculator\n";
    cout << "Enter number:";
    cin >> num1;
    Maths factorial;
    factorial.factorialmaths(num1);
    cout << num1 << "!= "<<  factorial.factorialmaths(num1) << "\n"; 

}



