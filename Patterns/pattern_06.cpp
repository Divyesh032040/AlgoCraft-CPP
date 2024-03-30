<<<<<<< HEAD
#include<iostream>
using namespace std ;

void pattern(int n){
   for(int i=1;i<=n;i++){
       for(int j = 1 ; j<= n+1-i ; j++){
           cout<<j;
       }
       cout<<endl;
   }
}

int main (){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

// 12345
// 1234
// 123
// 12
// 1
=======
#include<iostream>
using namespace std ;

void pattern(int n){
   for(int i=1;i<=n;i++){
       for(int j = 1 ; j<= n+1-i ; j++){
           cout<<j;
       }
       cout<<endl;
   }
}

int main (){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

// 12345
// 1234
// 123
// 12
// 1
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
