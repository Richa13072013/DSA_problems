#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    if (n < 2) return cout << "Not Prime", 0;
    if (n == 2) return cout << "Prime", 0;
    if (n % 2 == 0) return cout << "Not Prime", 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return cout << "Not Prime", 0;
    }

    cout << "Prime";
    return 0;
}
