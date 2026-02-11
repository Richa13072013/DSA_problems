#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int r=0;
    int rev=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        rev=rev*10 +r;
        n=n/10;
    }
    cout<<rev;
}