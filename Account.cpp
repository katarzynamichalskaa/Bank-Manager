#include "Account.h"


void Account::Create_New_Account()
{
    cout<<"\n\nEnter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"\n\nEnter The Last Name of The account Holder : ";
	cin.ignore();
	cin.getline(last_name,100);
	cout<<"\n\nEnter Your login : ";
	cin.ignore();
	cin.getline(login,100);
	cout<<"\n\nEnter Your password : ";
	cin.ignore();
	cin.getline(password,100);
	cout<<"\nEnter The Initial amount: ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";

}

Account::~Account()
{
    //dtor
}

int Account::Deposit_Account(int deposit_add)
{
    deposit+=deposit_add;
    cout<<"\n\nEnter Total deposit : " <<deposit<<endl;
}

void Account::Show_Data()
{
    for(auto &el:accounts)
    {
        cout<<el.name<<endl;
        cout<<el.last_name<<endl;
        cout<<el.deposit<<endl;

    }
}
