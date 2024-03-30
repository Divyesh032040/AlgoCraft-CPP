<<<<<<< HEAD
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
=======
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
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
// *