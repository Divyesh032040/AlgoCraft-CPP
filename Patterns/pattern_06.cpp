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
