#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of row: ";
    cin >> n;
    int m;
    cout << "Enter size of column: ";
    cin >> m;
    int arr[n][m];
    cout << "Enter elements :\n";
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int a;
    cout<<"Enter the target element ";
    cin>>a;
    int flag=0;
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==a){
                flag=1;
            }    
        }
    }
    if(flag==1){
        cout<<"Target element found";
    }
    else{
        cout<<"Target element not found";
    }
}