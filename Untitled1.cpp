#include<iostream>
using namespace std;

int main()
{
	//taking password from user
	string password;
	cout<<"Enter your Password"<<endl;
	cin>>password;
	
	//declaring types of character in password
	int uppercase;
	int lowercase;
	int digit;
	int special;
	
	//checking characters of password through loop
	for(int i=0;i < password.length();i++)
	{
		if(password[i] >= 'A' && password[i] <='Z')
		{
			uppercase++;
		}
		else if(password[i] >= 'a' && password[i] <= 'z')
		{
			lowercase++;
		}
		else if(password[i] >= '0' && password[i] <= '9')
		{
			digit++;
		}
		else
		{
			special++;
		}
	}
	
	//checking password type based on type of charcters
	if(password.length() <6)
	{
		cout<<"Weak"<<endl;
		}	
	else if(password.length() >=6 && uppercase > 0 && lowercase == 0 && digit == 0 && special == 0)
	{
		cout<<"Medium"<<endl;
	}	
	else if(password.length() >=6 && lowercase > 0 && uppercase == 0 && digit == 0 && special == 0)
	{
		cout<<"Medium"<<endl;
	}
	else if(password.length() >=6 && digit > 0 && uppercase == 0 && lowercase == 0 & special == 0)
	{
		cout<<"Medium"<<endl;
		}
	else if(password.length() >=6 && uppercase > 0 && lowercase > 0 && digit == 0)
	{
		cout<<"Good"<<endl;
		}	
	else if(password.length() >6 && lowercase > 0 && digit > 0 && lowercase == 0)
	{
		cout<<"Good"<<endl;
	}
	else if(password.length() >6 && digit > 0 && uppercase > 0 && uppercase == 0)
	{
		cout<<"Good"<<endl;
	}
	else if(password.length() >8 && uppercase > 0 && lowercase > 0 && digit > 0)
	{
		cout<<"Strong"<<endl;		
	}
	else if(password.length() >=8 && uppercase > 0 && lowercase > 0 && digit > 0 && special > 0)
	{
		cout<<"Strong"<<endl;
	}	
	else
	{
		cout<<"invalid password"<<endl;
	}	
	
	return 0;	
}

