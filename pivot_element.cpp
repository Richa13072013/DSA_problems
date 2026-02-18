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
    int sum=0;
    int add=0;
    int cnt=0;
    int i=0;
    int j=n-1;
    while(i<j){
        sum+=arr[i];   
        add+=arr[j];
        if(sum<add){
            i++;
        }
        else if(sum>add) {
            j--;
        }
        else{
            cnt=i+1;
        }
        
    }
     cout<<"index"<<cnt;   
    
}