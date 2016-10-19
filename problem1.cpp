#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()
{
    srand (time(NULL));     // Setting seed for using rand function ie initializing rand function with time
    int arr[15];            // Decelairing int array to store random generated numbers
    int max = 0;            // max will store the maximum number
    for(int i = 0; i < 15; i++)
    {
        arr[i] = rand();    // Storing the random numbers
    }
    max = arr[0];           // Initializing max with the value at first index 
    for (int i = 0; i < 15; i++)
    {
		if (arr[i] > max)   // Check if the number at the ith index is greater than replace it with the older value in max variable
        {
		    max = arr[i];
		}
    }
	cout << "The max number from the random numbers\n";
    for (int i = 0; i < 15; i++)
        cout << arr[i]  << "   ";       // Printing on screen all the generated random numbers
    cout << "\n\nis "<< max << endl;    // Printing on screen the maximum number from the generated ones
    return 0;                           // Returning null
}
