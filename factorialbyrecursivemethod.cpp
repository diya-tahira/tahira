#include <iostream>
#include <cstring>
using namespace std;
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << " Enter a number to find a factorial: ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is : " << ans;
    cout << endl;
    return 0;
}