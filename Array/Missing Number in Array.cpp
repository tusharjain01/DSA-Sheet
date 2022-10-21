#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans=0;

    for(int i=0;i<n-1;i++)
    {
        ans=ans^arr[i];
    }
     for(int i=0;i<=n;i++)
    {
        ans=ans^i;
    }

    cout<<"Missing Number is "<<ans<<endl;
}
