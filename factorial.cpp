#include <iostream>
using namespace std;

int main() {
    int num,i,fac=1;
    cin>>num;
    if(num<0){
        cout<<"Error";
    }
    else{
        for(i=num;i>0;i--){
            fac=fac*i;
        }
        cout<<fac;
    }
    
    return 0;
}
