#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string binary){
    int len = binary.size(), p2 = 1,num = 0;
    for(int i=len-1;i>=0;i--){
        if(binary[i]=='1'){
            num = num + p2;
        }
        p2=p2<<1;
    }
    return num;
}

int main(){
    string s ="11111";
    cout<<binaryToDecimal(s);
    return 0;
}