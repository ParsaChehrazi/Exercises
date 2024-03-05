#include <iostream>
#include <random>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 100);

    int numbers[10];
    cout << "Generated numbers: ";
    for (int i = 0; i < 10; ++i) {
        numbers[i] = distribution(gen);
        cout << numbers[i] << " ";
    }

    int smallest = numbers[0];
    int largest = numbers[0];

    for (int i = 1; i < 10; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }

        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    sort(numbers, numbers + 10);


    cout << "\nSmallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    cout << "Sorted numbers: ";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    return 0;
}