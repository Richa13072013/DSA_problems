#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int r=0;
    int rev=0;
    int real=n;
    while(n!=0){
        r=n%10;
        rev=rev*10 +r;
        n=n/10;
    }
    if(real==rev){
        cout<<"Palindrom Number"<<real;
    }
    else{
        cout<<"Not a palindrom number";
    }
}