#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an alphabet= ";
    cin>>ch;
    switch(ch)
    {
        case 'm':
        case 'M':
            cout<<"\nMale";
            break;
        case 'f':
        case 'F':
            cout<<"\nFemale";
            break;
        default:
            cout<<"\nINVALID";
    }
}