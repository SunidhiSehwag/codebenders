#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int num,n,i,ans=1;
    cin>>num>>n;
    for(i=1;i<=n;i++){
        ans=ans*num;
    }
    cout<<ans;

    return 0;
}
