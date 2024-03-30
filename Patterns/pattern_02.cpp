#include <iostream>
using namespace std;

void print(int n){
    for(int i=1 ; i<= n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main() {

int z;
cin>>z;
for(int n=1;n<=z;n++){
    print(n);
    // cout<<endl;
}

return 0;
}

// *
// *
// **
// *
// **
// ***
// *
// **
// ***
// ****