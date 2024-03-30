<<<<<<< HEAD

#include <iostream>
using namespace std;
void pattern (int n){
    for(int i=1 ; i<=2*n-1 ; i++){
        int stars = i ;
        if( i > n ){
            stars = 2*n-i ;
        }
        for(int j=1 ; j<=stars ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {

int n;
cin>>n;
pattern(n);
    return 0;
}


// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
=======

#include <iostream>
using namespace std;
void pattern (int n){
    for(int i=1 ; i<=2*n-1 ; i++){
        int stars = i ;
        if( i > n ){
            stars = 2*n-i ;
        }
        for(int j=1 ; j<=stars ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {

int n;
cin>>n;
pattern(n);
    return 0;
}


// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
// *