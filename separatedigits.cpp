#include<iostream>
using namespace std;
int main()
{
    int num,r,q, rev=0;
    cout<<"Enter a number= ";
    cin>>num;
    while(num!=0)
    {
        r=num%10;
        q=num/10;
        num=q;
        rev= (rev*10) +r;
    }
    cout<<"Reverse number= "<<rev;
    return 0;
}