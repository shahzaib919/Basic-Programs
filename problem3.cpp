#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {};
    int primes = 0;
    bool isPrime = false;
    for (int i = 70; i <= 200 && primes < 10; i++)
    {   
        isPrime = true;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
                isPrime = false;
        }
        if(isPrime)
        {
            arr[primes] = i;
            primes++;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << "   ";

    return 0;                        
}
