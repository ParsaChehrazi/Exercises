#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    
    cout << "Enter username: ";
    cin >> username;
    
    if (username == "Username") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Login failed!" << endl;
    }
    
    return 0;
}
