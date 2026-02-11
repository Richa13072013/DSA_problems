#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Display the array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int isshorted;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            isshorted=false;
            break;
        }
    }
            if(isshorted==false){
                cout<<"False";
            }
            else{
                cout<<"True";
            }
        
    
}