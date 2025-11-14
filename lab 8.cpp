#include<iostream>
using namespace std;
int main(){
    int books;
    cout<<"Enter the number of books: ";
    cin>>books;

    int bookcount=1;
    while(bookcount<=books){
        cout<<"\nbook"<<bookcount<< " fine day by day:\n ";

        int day=1;
        int fine=5;

        while(fine<=1000){
            cout<<"days "<<day<<":RS. "<<fine<<endl;
            fine=fine*2;
            day++;
        }
        bookcount++;
    }
    return 0;
}
