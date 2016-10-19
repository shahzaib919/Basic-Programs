#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <fstream>
using namespace std;

int main()
{
    srand (time(NULL));
    int arr[15];

    bool notSorted = true;
    int j = 0, tmp = 0;

    for (int i = 0; i < 15; i++)
        arr[i] = rand()%20;
    /*Sorting using bubble sort*/
     while (notSorted)  {
        notSorted = false;
        j++;
        for (int i = 0; i < 15 - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                notSorted = true;
            }
        }
     }



    ofstream out("p5.txt");

    for (int i = 0; i < 15; i++)
    {
        out << arr[i];
        out << "\t";
    }
 

    return 0;                        
}
