#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

 
const int size = 15;

int main()
{
    srand (time(NULL));     // Setting seed for using rand function ie initializing rand function with time
    int arr[size];            // Decelairing int array to store random generated numbers


    bool notSorted = true;
    int j = 0, tmp = 0;

    for(int i = 0; i < 15; i++)
    {
        arr[i] = rand()%10;    // Storing the random numbers
    }

/*Sorting using bubble sort*/
     while (notSorted)  {
        notSorted = false;
        j++;
        for (int i = 0; i < size - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                notSorted = true;
            }
        }
     }

	cout << "The sorted array is\n";
    
    for (int i = 0; i < 15; i++)
        cout << arr[i]  << "   ";  
    
    return 0;                        
}
