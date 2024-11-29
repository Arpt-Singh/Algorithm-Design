#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    cout<<"after setting the ith bit number become "<<(n|(1<<i))<<endl;
    cout<<"after clearing the ith bit number become "<<(n&~(1<<i))<<endl;
    cout<<"after toggling the ith bit number become "<<(n^(1<<i))<<endl;
    return 0;
}