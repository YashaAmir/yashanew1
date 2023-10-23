#include<iostream>
using namespace std;
int main()
{
	int flag = 1;
	do
	{
		system("cls");
		int choice;
		int b;
		int i;
		cout<<"please enter the limite";
		cin>> b;
		cout<<"please enter your choice\n2: for table 2\n3: for table 3\n4: for table 4" <<endl;
		cin>> choice;
		
		
		switch(choice)
		{
			case 2:
			for(int i= 1; i<=b; i++)
			{
				cout<<choice<<"x"<<i<<"="<<choice*i<<endl;
			}
			break;
			case 3:
			for(int i= 1; i<=b; i++)
			{
				cout<<choice<<"x"<<i<<"="<<choice*i<<endl;
			}
			break;
				case 4:
			for(int i= 1; i<=b; i++)
			{
				cout<<choice<<"x"<<i<<"="<<choice*i<<endl;
			}
			break;
		} 
		
		   cout<<"do you want to continue if yes than press 1 if not than press ant other key to exit"<<endl;
		   cin>> flag;
	}
	while(flag==1);
	system("cls");
	cout<<"thankyou"<<endl;
	}

