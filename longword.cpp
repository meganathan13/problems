#include <iostream>
using namespace std;
int main(){
    int n;
    string a;
    cin >> n;
    while(n>0){
        cin >> a; 
        if(a.length()>10){
            cout << a[0] << a.length()-2 << a[a.length()-1] << endl;
        }
        else{
            cout << a << endl;
        }
        n--;
    }
    return 0;
}