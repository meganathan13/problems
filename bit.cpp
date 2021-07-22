#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    int x=0;
    while(n>0){
        cin >> a;
        if(a=="++X" || a=="X++"){
            x++;
        }
        else if(a=="--X" || a=="X--"){
            x--;
        }
        n--;
    }
    cout << x;
    
    
    return 0;
}