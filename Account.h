#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Account
{
    private:
        int ID, deposit;
        char name[100], last_name[100], login[100], password[100];
        vector<Account> accounts;
    public:
        virtual ~Account();
        void Create_New_Account();
        void Show_Data();
        int Deposit_Account(int);
};

#endif // ACCOUNT_H
