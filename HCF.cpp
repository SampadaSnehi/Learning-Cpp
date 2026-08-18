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

    for(i=1;i<=smaller;i++){
        if (smaller%i==0){
            if (larger%i ==0){
                num =i;
            }
        }
    }
    cout<<num;

    return 0;
}
