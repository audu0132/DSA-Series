#include <iostream>
using namespace std;

int main (){

    // for (int i=1;i==5; i++){
    //     cout << "******" << endl;
    // }

    int n=5;
    for(int i=1; i<=n; i++){
        int m =10;
        for (int j=1; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}



// nested loop is a loop inside loop.
// for ex = for (){ for() } 
//  one round means 1 iteration                      
//                