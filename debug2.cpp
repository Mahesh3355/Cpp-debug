#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return True;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return False;
}

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if (is_prime(input)) {
        cout << input << " is a prime number." << endl;
    } else {
        cout << input << " is a prime number." << endl;
    }
    cout << input << " is not a prime number." << endl;
    
    return 0;
}
