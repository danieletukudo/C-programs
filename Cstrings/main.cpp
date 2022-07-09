#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
char firstname[20]{};
char secondname[20]{};
char fullname[50]{};
char temp[50]{};
cout<<firstname;

cout<<"please enter your first name: ";
cin>>firstname;
cout<<"please enter your last name: ";
cin>>secondname;

cout<<"hello "<<firstname<<" your first name has "<<strlen(firstname)<<" characters"<<endl;

cout<<"and your lastname, "<<secondname<<" has "<<strlen(secondname)<<" characters"<<endl;
strcpy(fullname,firstname);
strcat(fullname, " ");
strcat(fullname,secondname);

cout<<"your full name is "<< fullname<<endl;	
cout<<"enter your full name";
cin.getline(fullname,50);
cout<<fullname<<endl;
cout<<"=======================" <<endl;
strcpy(temp,fullname);
if (strcmp(temp,fullname)==0){
    cout<<temp<<"and"<<fullname<<"are the same"<<endl;
}
else{
    cout<<temp<<"and"<<fullname<<"are different"<<endl;
    cout<<"===============================";
}
for (size_t i{0};i < strlen(fullname);++i){
    if (isalpha(fullname[i]))
        fullname[i] = toupper(fullname[i]); 
    }
    cout<<"your full name is: "<<fullname<<endl;
    cout<<"Result of comparing"<<temp<<"and"<<fullname<<":"<<strcmp(temp,fullname)<<endl; 
    cout<<"Result of comparing"<<fullname<<"and"<<temp<<":"<<strcmp(fullname,temp)<<endl;
return 0;   
}
