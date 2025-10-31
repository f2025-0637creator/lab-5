#include<iostream>
#include<string>
using namespace std;
int main() {
    string password;

    while (true) {
        cout << "Enter your password: ";
        cin >> password;
        if (password == "Python123"){
            cout << "access granted" << endl;
            break;
        }
        else {
            cout << "Invalid password" << endl;
        }
    }
    return 0;
}





