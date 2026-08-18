#include <iostream> 
using namespace std;

int main(){
    int a,b,larger,smaller,i;
    int num=1;
    
    cout<<"enter nums\n";
    cin>>a>>b;
    if (a>b){
        larger =a;
        smaller = b;
    }else{
        smaller =b;
        larger =a;
    }
    i=1;
    while(i<=smaller){
        if (smaller%i==0){
            if (larger%i ==0){
                num =i;
            }
        }
        i++;
        
    }

    cout<<num;

    return 0;
}
