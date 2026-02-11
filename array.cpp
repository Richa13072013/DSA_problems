#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Insertion
    int pos, value;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    for(int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Deletion
    cout << "\nEnter position to delete (0-based index): ";
    cin >> pos;

    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "Array after deletion:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
