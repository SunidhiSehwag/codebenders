#include <iostream>
#include<cstring>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cin >> string1;
    
    length = strlen(string1);
	if(length>100 || length <1){
		return 0;
	}
    else{
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        cout<< "NO" << endl; 
    }    
    else {
        cout <<"YES" << endl; 
    }
    return 0;
	}
}

