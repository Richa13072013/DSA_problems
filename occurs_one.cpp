#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;

    for(int i = 0; i < n; i++) {
        result ^= arr[i]; 
    }

    cout << "The element that appears only once is: " << result;

    return 0;
}
