#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;

    unordered_map<char, int> freq;

    for(char c : num) {
        freq[c]++;
    }

    int oddCount = 0;

    for(auto it : freq) {
        if(it.second % 2 != 0)
            oddCount++;
    }

    if(oddCount <= 1)
        cout << "Yes, it can form a palindrome.";
    else
        cout << "No, it cannot form a palindrome.";

    return 0;
}
