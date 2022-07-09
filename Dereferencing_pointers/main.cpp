#include <iostream>
using namespace std;
#include <vector>
 
int main()
{   
    int score{100};
    int *score_ptr {&score};
    int sc = 200;
    cout <<*score_ptr<<endl;
    *score_ptr = sc; 
    cout <<*score_ptr<<endl;
    cout<< "\n ========================="<<endl;
    double high_temp {100.7};
    double low_temp{37.4};
    double *temp_ptr {&high_temp};
    cout<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;
    cout<< "\n ========================="<<endl;
    vector <string> stooges {"larry" ,"Moe","Curly"};
    vector <string> *vectors{&stooges};
    cout <<"first stooge: "<<(*vectors).at(0)<<endl;

    cout<<"stooges"<<endl;
    for (auto stoog: *vectors)
        cout<<stoog<<endl;
	return 0;
}
