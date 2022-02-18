#include <iostream>
using namespace std ;

int main()
{

int octal=0,c=1,num,remainder;

cout<<"enter the decimal no"<<endl;
cin>>num;

while(num>0)
{

remainder = num%8;
octal=octal+remainder*c;
c=c*10;
num=num/8;

}

cout<<"the octal no of the decimal no is "<< octal<<endl;

    return 0;
}