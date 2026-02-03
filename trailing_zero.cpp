#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0 ||n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n ;
    int t=0;
    int count=0;
    cout << "Enter the number: ";
    cin >> n;
    t=fact(n);
    while(t%10==0){
        count++;
        t=t/10;
    }
    cout << count;
    return 0; 
}
