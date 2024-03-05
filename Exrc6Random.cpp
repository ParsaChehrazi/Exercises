#include <iostream>
#include <random>
#include <cmath>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 100);

    int numbers[10];
    for (int i = 0; i < 10; ++i) {
        numbers[i] = distribution(gen);
        cout << numbers[i] << " ";
    }

    double sum = 0.0;
    for (int i = 0; i < 10; ++i) {
        sum += numbers[i];
    }
    double average = sum / 10;
    
    double variance = 0.0;
    for (int i = 0; i < 10; ++i) {
        variance += pow(numbers[i] - average, 2);
    }
    variance /= 10;
    
    double standardDeviation = sqrt(variance);

    cout << "\nThe average is: " << average << endl;
    cout << "The variance is: " << variance << endl;
    cout << "The standard deviation is: " << standardDeviation << endl;

    return 0;
}
