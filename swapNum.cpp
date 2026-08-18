#include <iostream> 
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    cout<<"a is "<<a<<"\nb is "<<b<<"\n";
    c=a;
    a=b;
    b=c;
    cout<<"a is "<<a<<"\nb is "<<b;
}
