#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    int first = fib(n - 1);
    int sec = fib(n - 2);
    return first + sec;
}
int main()
{
    int n;
    cout << " enter your number: " << endl;

    cin >> n;
    cout << fib(n);
     return 0;
     
}
