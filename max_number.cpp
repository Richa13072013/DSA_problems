#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string num;

    cout << "Enter a number: ";
    cin >> num;

    sort(num.begin(), num.end(), greater<char>());

    cout << "Maximum number formed: " << num;

    return 0;
}
