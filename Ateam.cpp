#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    int count1=0,count2=0;
    cin >> n;
    while(n>0){
       for(int i=0;i<3;i++){
           cin >> arr[i];
       }
       for(int i=0;i<3;i++){
           if(arr[i]==1){
               count1++;
           }
       }
       if(count1>=2){
           count2++;
       }
       count1=0;
       n--;
    }
    cout << count2;
    return 0;
}