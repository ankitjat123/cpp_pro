#include <iostream>
using namespace std ;

int main()
{
int num ,remainder ,binary =0, c=1;
cout<<"enter the decimal no "<<endl;
cin>>num;
while(num>0){

remainder =num%2;
binary=binary+remainder*c;
c=c*10;
num=num/2;

}

cout<<"binary no of the decimal no is "<<binary<<endl;
return 0;

}