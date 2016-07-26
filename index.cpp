#include <iostream>
using namespace std;
int main()
{
	int key=0;
	int index=-1;
	int arr[10]={};
	for (int i=0;i<10;i++)
	{
		cout<<"Enter numbers\t";
		cin>>arr[i];
	}
	cout<<"Enter key\t";
	cin>>key;
	for (int i=0;i<10;i++)
	{
		if (arr[i]==key)
		index=i;
	}
	cout<<"the index is\t"<<index;
return 0;
}