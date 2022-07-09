#include <string>
using namespace std;

int main()
{
    int *create_array(size_t size , int int_value = 0){
        int *new_storage{nullptr};
        new_Storage = new int[size];
        
        for  (size_t i{0}; i < size; ++i)
            *(new_Storage + i ) = init_value;
        return new_storage;        
    }

}


//	int num{100};
//    int &ref{num}; 
//    
//    cout<<num<<endl;
//    cout<<ref<<end;
//    
//    num = 200;
//    cout<<"\n===================================="<<endl;
//    cout <<num <<endl;
//    cout<<ref<<endl;
//    
//    ref= 300;
//    cout<<"\n===================================="<<endl;
//    cout <<num <<endl;
//    cout<<ref<<endl;
//	return 0;
//
