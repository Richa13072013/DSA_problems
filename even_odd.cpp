#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Display the element of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int sum=0;
    int mul=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum=sum+arr[i];
        }
        else{
            mul =mul*arr[i];
        }
    }
    cout<<"\nSum"<<sum<<"\n"<<"Multi"<<mul;
}