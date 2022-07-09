#include <iostream>
#include "ACCOUNT.h"
using namespace std;

int main(){
    
    Account frank_account;
    frank_account.set_name("Frank Account");
    frank_account.set_balance(100);
    
    if (frank_account.deposit(200.0))
        cout<<"Deposite OK"<<endl;
    else
        cout<<"Deposit not allowed"<<endl;
    if (frank_account.withdraw(500.0))
        cout<<"withdraw ok"<<endl;
    else
        cout<<"Not surfficient funds"<<endl;
        
    if (frank_account.withdraw(1500))
        cout<<"withdraw ok fa"<<endl;
    else
        cout<<"Not surfficeint funds";
    
    return 0;
        
    
    
    }
