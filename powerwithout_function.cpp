#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    int b;
    cout << "Enter the power: ";
    cin >>b;
    int power=1;
    while(b!=0){
        power= power*a;
        b--;
    }
    cout<<power;
    return 0; 
}