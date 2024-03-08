#include <iostream>
using namespace std;
int main()
{
    cout << "here we are going to print prime number " << endl;
    int n;

    cin >> n;
    int i = 2;

    while (i < n)
    {
        if ((i % 2 == 0))
            cout << "not prime number for" << i << endl;
        else
        {
            cout << "prime number  for"<<i<<endl;
        }
        i++;
    }
}