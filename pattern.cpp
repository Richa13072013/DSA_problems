#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    for(int i=0;i<x;i++){
        for (int j=0;j<x-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i+1;k++){
            cout<<"*";   
        }
        cout<<"\n";
    }
}