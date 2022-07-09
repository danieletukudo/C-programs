#include <iostream>
#include <vector>
#include <string>
using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);
void pass_by_ref1(int &num){
num = 1000;
    }
    void pass_by_ref2(string &s){
        s = "changed";
    }
     void pass_by_ref3(vector <string> &v){
       v.clear();
    }
void print_vector(const vector<string> &v){
    
    for (auto s:v){
    cout<<s<<"";
    }
    cout<<endl;
}

int main()
{   
   int num = {10};
   int another_number {20};
   cout <<"num before calling pass by ref1:"<<num<<endl;
   pass_by_ref1(num);
   cout <<"num after calling pass by ref1:"<<num<<endl;
   
   cout <<"num before calling pass by ref1:"<<another_number<<endl;
   pass_by_ref1(another_number);
   cout <<"num after calling pass by ref1:"<<another_number<<endl;
   
   string name{"Frank"};
   cout <<"\n name before calling pass by ref2:"<<name<<endl;
   pass_by_ref2(name);
   cout <<"name after calling pass by ref2:"<<name<<endl;
   
   vector <string> stooges{"Frank","Daniel","Samuel"};
   cout <<"\n stooges before calling pass by ref3:";
   print_vector(stooges);
   pass_by_ref3(stooges);
   cout <<"stooges after calling pass by ref3:";
   print_vector(stooges);
   
   cout<<endl;
return 0;
}


