<<<<<<< HEAD
#include <iostream>
using namespace std;

void pattern(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        //space
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        //num
         for(int l=i;l>=1;l--){
           cout<<l;
        }
        cout<<endl;
         space -= 2 ;
    }
}

int main() {
int n;
cin>>n;
pattern(n);

return 0;
}

// input : n = 6 

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
=======
#include <iostream>
using namespace std;

void pattern(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        //space
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        //num
         for(int l=i;l>=1;l--){
           cout<<l;
        }
        cout<<endl;
         space -= 2 ;
    }
}

int main() {
int n;
cin>>n;
pattern(n);

return 0;
}

// input : n = 6 

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
// 123456654321