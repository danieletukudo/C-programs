#ifndef _ACCOUTN_H_
#define _ACCOUTN_H_
#include <string>
class Account{
    
private:
    std::string name;
    double balance;

public:
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}        
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUTN_H_
