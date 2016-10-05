#include <iostream>
using namespace std;

int main()
{
	char arr[15] = {};
	int uppercase = 0, lowercase = 0, numbers = 0, others = 0, len =0, largest = 0;
	
	cout<<"Enter 15 random characters:\t";
	cin.getline(arr,15);
	
	for(int i=0;  arr[i] != 0; i++)
	{
		if(arr[i] >= 65 && arr[i] <= 90)
		{
			uppercase++;
		}
		else if(arr[i] >= 97 && arr[i] <= 122)
		{
			lowercase++;
		}
		else if(arr[i] >= 49 && arr[i] <= 57)
		{
			numbers++;
		}
		else
		{
			others++;
		}
		
		if(arr[i]>largest)
		{
			int temp = arr[i];
			arr[i] = largest;
			largest = temp;
		}
		
		len++;
	}
	
	
	
	cout<<"There are \n"<<
	uppercase<<"\tUppercase Alphabets\n"<<
	lowercase<<"\tLowercase Alphabets\n"<<
	numbers << "\tNumbers\n"<<
	others << "\tOthers\n"<<
	"Other Info:\n"<<
	"The length of input is \t"<<len<<
	"\nThe character with largest ASCII is \'"<<(char)largest<<"\' with ASCII code "<<largest;
	
	
	
}