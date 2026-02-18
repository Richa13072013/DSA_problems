#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements (sorted):\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    int flag=0;
    int sum=arr[0];
    int more=target-sum;
    cout<<more<<"\n";
    for(int i=1;i<n;i++){
        if(arr[i]==more){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}