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
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int i=0;
    int mis=0;
        for(int j=1;j<n;j++){
            mis=arr[j]-arr[i];
            if(mis!=1){
                cout<<"/n Missing number: "<<arr[j]-1;
                break;
            }
            i++;    
        }
}
    
