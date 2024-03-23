#include <iostream>
using namespace std;

void print(int n){
    for(int i=1 ; i<= n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main() {

int n;
cin>>n;

print(n);

return 0;
}

// 111111
// 222222
// 333333
// 444444
// 555555
// 666666
