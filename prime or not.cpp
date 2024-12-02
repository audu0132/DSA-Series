#include <iostream>
using namespace std;

int main (){
    int n = 19;
    bool isprime = true;
                  //i<=n-1 is to i*i<=n 
    for (int i=2; i*i<=n; i++){
        if (n%i == 0){//non prime
        isprime = false;
        break;
        }
    }

    if (isprime == true){
        cout << "prime no\n";
    }else{
        cout << "non prime no\n";
    }
       return 0;
}