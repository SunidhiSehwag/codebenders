#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n;
    cin>>t;
    while(t){
        int count=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count>2){
            cout<<"not prime";
        }
        else{
            cout<<"prime";
        }
        cout<<endl;
        t--;
   } 
}
    
