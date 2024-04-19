# include <iostream>
using namespace std;

class account 
{
	public :
		string name ;
		int accnum;
		int bal=0;
		int min_bal=500;
		int pen;
		
		int deposit ()
		{
			int temp;
			cout<<"Enter the amount to deposit : "<<endl;
			cin>>temp;
			bal=bal+temp;
			return 0;
			
		}
		
		void disp ()
		{
			cout<<"Your balance is :"<<bal<<endl;
		}
		
		void interest ()
		{
			int intr;
			intr=bal*0.3;
			bal=bal+intr;
		}
		
		void withdraw ()
		{
			int amt;
			cout<<"Entwr the amout to withdraw : "<<endl;
			cin>>amt;
			if (amt > bal)
			{
				cout<<"Balance insufficient"<<endl;
			}
			else
			{
				cout<<"Collect your cash"<<endl;
				bal=bal-amt;
				cout<<"Your balance : "<<bal<<endl;
			}
		}
		
				
};

class cur_acct : public account
{
	public:
		int pen=0;
		void minbal()
		{
			if (bal<min_bal)
			{
				cout<<"You are fined !!!"<<endl;
				cout<<"No minimum balance "<<endl;
				pen=pen+100;
			}
			else
			{
				cout<<"No fine safe balance"<<endl;
			}
		}
		
};

class sav_acct : public account
{
	public:
		int pen=0;
		void minbal()
		{
			if (bal<min_bal)
			{
				cout<<"You are fined !!!"<<endl;
				cout<<"No minimum balance "<<endl;
				pen=pen+100;
			}
			else
			{
				cout<<"No fine safe balance"<<endl;
			}
		}
		
};

int main()
{
	int ch;
	int ch2;
	cur_acct acc1;
	sav_acct acc2;
	cout<<"Welcome to BANK"<<endl;
    cout<<"Enter 1 for current acount and 2 for saving account "<<endl;
	cin>>ch;
	while (1)
	{
	cout<<"Menu"<<endl;
	cout<<"1-deposit"<<endl;
	cout<<"2-display balance"<<endl;
	cout<<"3-compute and deposit interest"<<endl;
	cout<<"4-withdraw"<<endl;
	cout<<"5-minimum balance"<<endl;
	cout<<"6-exit"<<endl;
	cout<<"Enter your choice : ";
	cin>>ch2;
	
	
	switch(ch2)
	{
		case 1:
			if (ch==1)
				{
					acc1.deposit();
				}
			else
				{
					acc2.deposit();
				}
			break;
		case 2:
			if (ch==1)
		{
			acc1.disp();
		}
		else
		{
			acc2.disp();
		}
			break;
		case 3:
			if (ch==1)
		{
			acc1.interest();
		}
		else
		{
			acc2.interest();
		}
		break;
		case 4:
			if (ch==1)
		{
			acc1.withdraw();
		}
		else
		{
			acc2.withdraw();
		}
		break;
		case 5:
			if (ch==1)
		{
			acc1.minbal();
		}
		else
		{
			acc2.minbal();
		}
		break;
		default:
			break;

		
	}
}

	return 0;
}
