#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int r=0;
    cout << "Enter the number: ";
    cin >> n;
    while(n>5){
        r++;
        n=n-5;
    }
    cout<<r;
    return 0; 
}