#include <iostream>
using namespace std;
int main()
{
	int choice=0;
	int noOfRec=0;
	int length=0;
	int arr[10]={};
	
	while(choice!=5)
	{
		cout<<"\n\t\t\t\t\t\t**************************************************************"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<"\t\t\t\t\t\tStudent\t\tRecord\t\tManagement\t\tSystem"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<"\t\t\t\t\t\t**************************************************************"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<"\t\t\t\t\t\tPress\t 1\t to\t insert\t records"<<endl;
		cout<<""<<endl;
		cout<<"\t\t\t\t\t\tPress\t 2\t to\t Update\t any\t record"<<endl;
		cout<<""<<endl;
		cout<<"\t\t\t\t\t\tPress\t 3\t to\t delete\t a\t record"<<endl;
		cout<<""<<endl;
		cout<<"\t\t\t\t\t\tPress\t 4\t to\t show\t all\t records"<<endl;
		cout<<""<<endl;
		cout<<"\t\t\t\t\t\tPress\t 5\t to\t quit\t application"<<endl;
		cout<<"Please enter your choice"<<endl;
		cin>>choice;
		if (choice==1)
		{
			cout<<"How many records do you want to enter?(only 10 values can be entered)"<<endl;
			cin>>noOfRec;
			cout<<endl;
		
		for (int i=0;i<noOfRec;i++)
		{	
			cout<<"Enter record"<<endl;
			cin>>arr[i];
		}
		cout<<"All  "<<noOfRec<<"  values inserted";
		}
		if (choice==4)
		{
			cout<<"All records are\t";
			for (int i=0;i<noOfRec;i++)
			{
				cout<<arr[i]<<",";
			}
		}
		if (choice==2)
		{
			int toReplace=0;
			int replaceWith=0;
			cout<<"Which number do you want to update?"<<endl;
			cin>>toReplace;
			cout<<"Enter new value for number"<<endl;
			cin>>replaceWith;
			for(int i=0;i<10;i++)
			{
				if(arr[i]==toReplace)
				{
					arr[i]=replaceWith;
				}
			}
			cout<<"The updated record is"<<endl;
			for (int i=0;i<noOfRec;i++)
				{
					cout<<arr[i]<<",";
				}
		}
		if (choice==3)
		{
			int toDel=0;
			cout<<"Enter the number you want to delete"<<endl;
			cin>>toDel;
			for (int i=0;i<10;i++)
			{
				if (arr[i]==toDel)
				{
					arr[i]=arr[i+1];
				}
			}
			cout<<"The updated record is"<<endl;
			for (int i=0;i<noOfRec;i++)
				{
					cout<<arr[i]<<",";
					noOfRec--;
				}	
		}	
		
	}
	cout<<"Program Exit\n_______________________________________________________________";
}