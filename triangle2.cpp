#include <iostream> 
using namespace std;

int main(){
    int num,i,j;
    cout<<"enter num: ";
    cin>>num;
    for (i=1;i<=num;i++){
        for (j=1;j<=(num-i);j++){
            cout<<" ";
        }
        for (j=1;j<=i;j++){
            cout<<j;
        }
        for (j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}


//    1
//   121
//  12321
// 1234321
