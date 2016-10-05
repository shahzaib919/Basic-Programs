#include <iostream>
using namespace std;
 
int main()
{
	int arr[10]={};
	int max,min,max2;
	for (int i=0;i<10;i++)
	{
		cout<<"Enter number:  ";
		cin>>arr[i];
	}
	min=max=max2=arr[0];
	
	for(int i=0;i<10;i++)
	{
		if (max<arr[i])
		{
			max2=max;
			max=arr[i];
		}
		else if (max2<arr[i]&& max!=arr[i])
		{
			max2=arr[i];
		}
		if (min>arr[i])
		{
			min=arr[i];			
		}
		
	}
	
	cout<<"Max num is:  "<<max<<"Min num is:  "<<min<<"Second max is;  "<<max2<<endl;
}