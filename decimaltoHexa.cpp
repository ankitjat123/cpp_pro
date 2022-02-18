#include<iostream>
using namespace std ;

int main()
{

int remainder=0,hexadecimal,i=1,j,num;
char hex[100];
cout<<"Enter the decimal no"<<endl;
cin>>num;

while(num>0)
{
remainder = num%16;
    if (remainder<10) 
    {
         hexadecimal=remainder + 48;
    }
    else
    {
        hexadecimal=remainder + 55;
    }
hex[j++]=hexadecimal;
num=num/16;

}

for(i=j;i>=0;i--)
{
    cin>>hex[i];
}


    return 0;
}