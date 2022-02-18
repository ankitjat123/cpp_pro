#include <iostream>
using namespace std ;


int main() {

int n1 ,n2 , su ;

n1=0;
n2=1;
for(int i = 1;i<=10;i++)
{
    su=n1+n2;
    cout<<su<<endl;
    n1=n2;
    n2=su;
}

return 0 ;
}