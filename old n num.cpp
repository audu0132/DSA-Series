#include <iostream>
using namespace std;

int main () {
    int n=50;
    int oddsum= 5;
    // for(int i=1; i<=n; i++){
    //     if(i%2 !=0){
    //         oddsum+= i;
    //     }
    // }

    // cout<<"oddsum = "<< oddsum << endl;

    while(n<=oddsum){
        if( n%2 !=0){
            oddsum +=n;
            }
        
    }
    cout << "oddsum = "<< oddsum << endl;
    return 0;
}
