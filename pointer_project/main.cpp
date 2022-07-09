#include <iostream >
using namespace std;
#include <vector>

void print1(vector <int> a){
    cout<<"[ ";
    for (auto str: a){
        
        cout<<" "<<str;
          }
          cout<< " ]";
    return str;
}
void print2(vector <int> a){
    cout<<"[ ";
    for (auto str: a){
        
        cout<<" "<<str;
          }
          cout<< " ]";
}


int main()
{
	vector<int> array1 {1,2,3,4,5};
    vector<int> array2{10,20,30};
        

    print1(array1);
    
    print2(array2);
    
	return 0;
}
