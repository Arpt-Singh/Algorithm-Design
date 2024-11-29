#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    if((n>>i)&1==0)
    {
        cout<<i<<" bit is unset bit";
    }
    else
    {
        cout<<i<<" bit is set bit";
    }
    return 0;
}