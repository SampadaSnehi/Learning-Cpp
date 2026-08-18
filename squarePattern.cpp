#include <iostream> 
using namespace std;

int main(){
    int num,i,j;
    cout<<"enter num: ";
    cin>>num;
    for (i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}
