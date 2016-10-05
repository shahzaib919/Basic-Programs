	#include <iostream>
	using namespace std;
	int main()
	{
		const int SIZE=5;
		int arr[SIZE]={};
		
		int arr2[SIZE]={};
		int flag=1;
		int temp=0;
		for(int i=0;i<5;i++)
		{
			cout<<"Enter numbers in array 1\t";
			cin>>arr[i];
			arr2[i]=arr[i];
		}
		for (int i=0;i<SIZE&&flag;i++)
		{
			flag=0;
			for (int j=0;j<(SIZE-1);j++)
			{
				if (arr2[j]<arr2[j+1])
				{
					temp=arr2[j];
					arr2[j]=arr2[j+1];
					arr2[j+1]=temp;
					flag=1;
				}
			}
		}
		
			for (int i=0;i<SIZE;i++)
			{
				cout<<arr2[i]<<" ";
			}
		
		
	}