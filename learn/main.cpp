#include <iostream>

class car{
    
public:
   std::string name;
   std::string model;
   int year;
   
   car (std::string x, std::string y, int z){
       name = x;
       model = y;
       year = z;
   }
   
};

int main(){
  car car1 ("bmw", "xy", 2004);
  
  std::cout<<car1.name;
    
    
    
}