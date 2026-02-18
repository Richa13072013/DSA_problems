#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements (sorted):\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n==0){
        cout<<"False";
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] ){
            count++;
        }
    }
    if(count<=1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}