#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
        return (n>0 && ((n&(n-1))==0));
    }
int main()
{
    int n;
    n=64;
    cout<<isPowerOfTwo(n);
}