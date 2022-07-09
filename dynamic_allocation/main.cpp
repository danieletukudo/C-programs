#include <iostream>
using namespace std;

int main()
{
	int *int_ptr{nullptr};
    int_ptr = new int;
    cout<< int_ptr;
    delete int_ptr;
    
    size_t size{0};
    double *temp {nullptr};
    
    cout <<"how many temps? ";
    cin>>size;
    
    temp = new double[size];
    cout <<temp;
    
    delete [] temp;
    int score[] {100,95,89};
    int *scorep{score};
    
    cout <<"Value of score" <<endl;
    cout<<*(scorep+2);
    
	return 0;
}
