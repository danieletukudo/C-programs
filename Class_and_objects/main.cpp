#include <iostream>
#include <vector>
#include <string>

using namespace std;

 class Player{
private:  
    string name{"Daniel"};
    int health;
    int exp;
public:
    void talk(string text){
        cout<<name<<" Says "<<text;
    }
    bool is_dead();
    
};

class Account{
    
public:
     string name;
     double balance;
     
     bool deposit(double);
     bool withdraw(double); 

};
int main(){
    Account frank_account;
    Account jim_account;

	Player frank;
   // frank.name = "frank";
    frank.health = 100;
    frank.exp = 12;
    frank.talk("hello");
   Player *enemy = new Player;
   
   (*enemy).name = "enemy";
   enemy-> talk("I will distroy you");
   
   
	return 0;
}
