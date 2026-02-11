#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    int r=0;
    int arm=0;
    cout << "Enter the number: ";
    cin >> n;
    int real=n;
    while(real!=0){
        count++;
        real=real/10;
    }
    real=n;
    while(real>0){
        r=real%10;
        arm =arm + pow(r,count);
        real=real/10;
    }
    if(n==arm){
        cout<<"Armstrong number"<<n;
    }
    else{
        cout<<"not a armstrong number";
    }
    return 0; 
}