#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of pyramid: ";
    cin>>n;

    for(int i=1;i<=n;i++) {
        //print spaces
        for(int j=i;j<n;j++) {
            cout<<" ";
        }
        //print stars
        for(int k=1;k<=2*1-i;k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}