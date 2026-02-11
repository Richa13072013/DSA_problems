#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p=n;
    int r=0;
    int sum=0;
    int s=0;
    cout << "Enter the number: ";
    cin >> n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<sum<<"\n";
    s=p%9;
    cout<<s;
    return 0; 
}