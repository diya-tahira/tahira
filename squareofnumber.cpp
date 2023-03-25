#include<iostream>
using namespace std;
int main()
{
    int num,a,sq;
    cout<<"If you dont want to continue, press -1 otherwise enter any number= ";
    cin>>num;
    while(num!=-1)
    {
        cout<<"Enter a number= ";
        cin>>a;
        sq=a*a;
        cout<<sq;
        cout<<"\nIf you dont want to continue, press -1 otherwise enter any number= ";
        cin>>num;
    }
}