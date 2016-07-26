	#include <iostream>
	using namespace std;
	int main()
	{
		char arr[5]={};
		char arr2[5]={};
		cout<<"enter characters"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>arr[i];
		}
		cout<<"the array with uppercase characters is\t";
		for(int i=0;i<5;i++)
		{
			arr2[i]=arr[i]-32;
			cout<<arr2[i];
		}
		
	}