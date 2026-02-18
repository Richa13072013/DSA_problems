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
        //cout<<"\n";
    }
    //rotate array by 180 degree
    cout<<"Rotate Matrix :\n";
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}