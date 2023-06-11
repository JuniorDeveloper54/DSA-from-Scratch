#include<bits/stdc++.h>
using namespace std;

long long int called = 0;
//making more efficient code
int save[100];

int fib(int n)
{
    //base case means where we need to stop the recursion
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(save[n] != 0)
        return save[n];

    //fib(n-1) ke ekta call dibo
    //fib(n-2) ke ekta call dibo
    //trpr 2 ta jog kore dibo
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n] = x + y;
    return x + y;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    cout << "Total recursion called = "<<called << endl;

    return 0;
}
