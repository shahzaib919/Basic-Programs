#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <fstream>
using namespace std;

int main()
{
    srand (time(NULL));

    char arr1[10];
    int arr2[10];
    float arr3[10];
    double arr4[10];

    for (int i = 0; i < 10; i++)
    {
        arr1[i] = rand();
        arr2[i] = rand();
        arr3[i] = rand();
        arr4[i] = rand();
    }


    ofstream out("p6.txt");

    for (int i = 0; i < 10; i++)
    {
        out << arr1[i];
        out << "\t";
        out << arr2[i];
        out << "\t";
        out << arr3[i];
        out << "\t";
        out << arr4[i];
        out << "\t";
    }
 

    return 0;                        
}
