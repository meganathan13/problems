#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m;
    cin >> n;
    int arr[m];
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    for(int i=0;i<m;i++){
        if(arr[i]==n){
            cout << "found at " << i+1;
        }
    }
}