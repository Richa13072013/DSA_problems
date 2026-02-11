#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end, count = 0;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    for(int i = start; i <= end; i++) {
        if(isPrime(i))
            count++;
    }

    cout << "Number of prime numbers between "
         << start << " and " << end << " is: "
         << count;

    return 0;
}
