#include <iostream>
using namespace std;
int main ()
{
	int arr[6]={};
	int len=6;
	int variable=0;
	bool flag=0;
	for(int i=0;i<6;i++)
	{
		cout<<"Enter numbers";
		cin>>arr[i];
	}
	cout<<"Enter additional number";
	cin>>variable;
	for (int i=0;i<len;i++)
	{
		
		if(arr[i]==variable)
		{
			flag=1;
			for (int j=i;j<len;j++)
			{
				arr[j]= arr[j+1];
			}
			len--;
		
		}
	}
	if (flag==1)
	{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
	}
	if (flag==0)
	{
		cout<<"Additional number not found";
	}
}