#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 0) {
        cout << "Not an Ugly number";
        return 0;
    }

    while(n % 2 == 0) n /= 2;
    while(n % 3 == 0) n /= 3;
    while(n % 5 == 0) n /= 5;

    if(n == 1)
        cout << "Ugly number";
    else
        cout << "Not an Ugly number";

    return 0;
}
