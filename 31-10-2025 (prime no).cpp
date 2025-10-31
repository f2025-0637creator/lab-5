#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number";
    cin>>n;

    if(n<=1){
        cout<<"enter a number bigger than 1"<<endl;
        goto endOfProgram;
    }
    for(int i=2;i<n/2;i++){
        if (n%i == 0){
            cout<<"is not a prime number"<<endl;
            break;
        }
    }
    endOfProgram:
    cout<<"program ended"<<endl;
    return 0;

}
