#include <iostream>
using namespace std;

int main(){

int integer = 0;


cout<<"Enter a Integer: ";
cin>>integer;

if(integer % 2 == 0){
    cout<<"its even"<<endl;
} else {
    cout<<"its odd"<<endl;
}

if(integer>0){
cout<< "The integer is positive";
}else if(integer<0){
cout<< "The integer is negative";
}
return 0;
}
