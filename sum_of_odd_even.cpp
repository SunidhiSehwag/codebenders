#include <iostream>
using namespace std;

int main() {
    int num,even=0,odd=0,i;
    cin>>num;
    while(num){
        int a = num%10;
        if(a%2==0){
            even=even+a;
        }
        else{
            odd=odd+a;
        }
        num = num/10;

        }
        cout<<even<<" "<<odd;
    
    return 0;
}
