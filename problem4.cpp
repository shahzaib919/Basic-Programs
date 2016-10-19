#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <fstream>
using namespace std;

int main()
{
    srand (time(NULL));
    int arr[15];

    for (int i = 0; i < 15; i++)
        arr[i] = rand();

    ofstream out("p4.txt");

    for (int i = 0; i < 15; i++)
    {
        out << arr[i];
        out << ";";
    }
 

    return 0;                        
}
