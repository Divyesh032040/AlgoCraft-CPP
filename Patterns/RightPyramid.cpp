#include <iostream>
using namespace std;

void RightUpPyramid (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void RightDownPyramid (int n){
   for(int i=0;i<=n;i++){
       for(int j=0;j<n-i+1;j++){
           cout<<"*";
       }
       cout<<endl;
   }
}

int main() {
int n;
cin>>n;
RightUpPyramid(n);
RightDownPyramid(n);
return 0;
}


// *
// **
// ***
// ****
// *****
// *******
// ******
// *****
// ****
// ***
// **
// *