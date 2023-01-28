#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int S, E ,W,temp;
    cin>>S>>E>>W;
    for(temp=S;temp<=E;temp=temp+W){
        int ans = (temp-32)*0.5556;
        cout<<temp<<"   "<<ans;
        cout<<endl;
    }
    return 0;
}
