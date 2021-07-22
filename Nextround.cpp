
#include <iostream>
using namespace std;
int main(){
    int n1,k;
    int arr[1000];
    int count=0;
    cin >> n1 >> k;
    for(int i=0;i<n1;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n1;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    cout << count;
    
    return 0;
}