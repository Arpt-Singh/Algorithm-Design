#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b;
    return 0;
}