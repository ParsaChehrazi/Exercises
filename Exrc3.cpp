#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter your inputs with commas in between: " ;
    getline(std::cin, input);

    stringstream ss(input);
    string item;
    string arr[3];
    int i = 0;

    

    while(getline(ss, item, ',')) {
        arr[i++] = item;
    }
    

    for(int j = 0; j < 3; ++j) {
        cout << "index " << j << " : " << arr[j] << endl;
    }

    for(int k = 0; k < 3; ++k) {
        cout << arr[k];
        if(k != 2) {
            cout << "@";
        }
    }

    return 0;
}
