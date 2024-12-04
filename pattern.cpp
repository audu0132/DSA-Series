#include <iostream>
using namespace std;

int main (){
     int n= 10;

     for(int i=1; i<=n; i++){ //outer loop

        for(int j=1; j<=n; j++){ //inner loop
            cout << j << " ";
        }

        cout << endl;
     }
}



// outer loop is a check rows and inner loop is check colume. 