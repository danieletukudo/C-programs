#include <iostream>
#include <vector>
#include <string>
using namespace std;


	void print(int);
    void print(double);
    void print(string);
    void print(string,string);
    void print(vector<string>);
    
    void print(int num){
        cout <<"prtinting int"<<num <<endl;
        
    }
    void print(double num){
        cout<<"printing double"<<num<<endl;
    }
     void print(string s){
        cout<<"printing stings"<<s<<endl;
        
    }
      void print(string s,string t){
        cout<<"printing stings"<<s<<"and"<<t<<endl;
    

}	

void print(vector <string> v){
    cout<<"printing vector of stings";
    for (auto s:v){
    cout<<s+"";}
    cout<<endl;
}


int main()
{   
    vector <string>three{"d:" ,"john:","Edet"};
    print(100.3F);
    print(three);
    
    
return 0;}
