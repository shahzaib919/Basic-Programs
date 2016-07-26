	#include <iostream>
	#include <cmath>
	using namespace std;
	int main()
	{
		float fact=1, ans =1, term = 0;
		int num=0;
		cin>>num;
		
		
		for(int i=2;i<=num;i++)
		{
			fact = 1;
			if (i>0)
			for (int j=1;j<=i;j++)
			{
				fact=fact*j;
			}
			
			//term= pow(-1,i)*pow(i/fact, i);
			ans = ans + term;
			
		}
	cout<<ans;
	}	