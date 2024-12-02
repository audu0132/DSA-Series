#include <iostream>
using namespace std;

int main (){
    int n = 10;
    int sum =5;

    // for(int i=1; i<=n; i++){
    //     sum += i;

    // }
    // cout << "sum =" << sum << endl;

    while(n<=sum){
        sum = sum+n;
        n--;
    }
    cout << "sum = "<< sum << endl;
    return 0; 
}