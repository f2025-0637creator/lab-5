#include <iostream>
using namespace std;

void menu (){

cout<<" 1) check even /odd"<<endl;
cout<<"2) check count of digits"<<endl;
cout<<"3) check sum of digits"<<endl;
cout<<"4) check prime"<<endl;
cout<<"5) exit"<<endl;
}
int getNumber(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;
return n;
}

void checkEvenOdd(int num){

if(num%2==0)
cout<<num<<" is even"<<endl;
else
cout<<num<<" is odd"<<endl;
}

int countDigits(int num){
int count = 0;
    while (num!= 0) {
        count++;
        num /= 10;
    }
    return count;
}
int sumDigits(int num){
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
bool isPrime(int num){
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
    int main() {
        int choice, num;
        do {
            menu();
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    num = getNumber();
                    checkEvenOdd(num);
                    break;
                case 2:
                    num = getNumber();
                    cout << "Number of digits: " << countDigits(num) << endl;
                    break;
                case 3:
                    num = getNumber();
                    cout << "Sum of digits: " << sumDigits(num) << endl;
                    break;
                case 4:
                    num = getNumber();
                    if (isPrime(num))
                        cout << num << " is Prime." << endl;
                    else
                        cout << num << " is Not Prime." << endl;
                    break;
                case 5:
                    cout << "Exiting program. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }

        } while (choice != 5);

        return 0;
    }
