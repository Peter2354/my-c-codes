#include <iostream>
using namespace std;

// Function to return half of a number
float halfNumber(float a) {
    return a / 2;
}

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;

    float answer = halfNumber(num);
    cout << "Half of " << num << " is " << answer <<endl;

    return 0;
};
