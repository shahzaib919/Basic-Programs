#include <iostream>
using namespace std;
int main ()
{
	const int SIZE=5;
	int arr[SIZE]={};
	int flag=1;
	int temp=0;
	int max=0;
	for (int i=0;i<SIZE;i++)
	{
		cout<<"Enter numbers";
		cin>>arr[i];
	}
	for (int i=0;i<SIZE&&flag;i++)
	{
		flag=0;
		for(int j=0;j<(SIZE-1);j++)
		{
			if (arr[j+1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
	
	}
	cout<<"The number of kuttay are given below sorted in descending order"<<endl; 
	for (int kutta=0;kutta<SIZE;kutta++)
	{
		cout<<arr[kutta]<<" ";
	}
	
}
