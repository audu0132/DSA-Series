#include <iostream>
using namespace std;

int main(){
    int n=50;

    for(int i=0; i<n; i++){//n
        for(int j=0; j<i+1; j++){//i+1
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}