#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter your inputs with commas in between: ";
    getline(cin, input);

    istringstream ss(input);
    string token;
    int index = 0;
    while (getline(ss, token, ',')) {
        token.erase(remove(token.begin(), token.end(), ' '), token.end());
        cout << "index " << index << " : " << token.length() << " len" << endl;
        index++;
    }

    return 0;
}