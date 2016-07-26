#include <iostream>
using namespace std;
int main()
{
	int max,min,max2;
	const int size=0;
	int arr[10]={};
	int flag=1;
	int temp=0;
	for (int i=0;i<10;i++)
	{
		cout<<"Enter number:   ";
		cin>>arr[i];
	}
	for (int i=1;i<=size&&flag;i++)
	{
		flag=0;
		for (int j=0;j<(size-1);j++)
		{
			if (arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		for (int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
		max=arr[9];
		min=arr[0];
		cout<<max<<endl;
		cout<<min<<endl;
		for(int i = 9; arr[i]<max ; i++)
		{
			cout<<max2;
		}
	
}