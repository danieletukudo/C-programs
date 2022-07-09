#include <iostream>
using namespace std;
#include <vector>

//void swap(int *a, int *b){
//    int temp = *a;
//    *a =*b;
//    *b = temp;  
//}
//
//int main(){
//    
//    int x{100}, y{200};
//    
//    swap(&x,&y);
//    cout<<x<<y;   
//}
void display(vector <string> *v){
     (*v).at(0) =  "Ds";
    for (auto str: *v)
        cout<<str << " ";
    cout<<endl;
   
}
void display(int *array, int sentine){
    while (*array != sentine)
        cout<<*array++;
       
    
}

    
int main(){
    
vector <string> stooges {"Larry" , "Moe","Curly"};

display(&stooges);

cout<<"================";
int in[]{100,100,10,32,32};
display(in,32);
    
return 0;
}



