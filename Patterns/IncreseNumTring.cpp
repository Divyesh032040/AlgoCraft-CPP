<<<<<<< HEAD
#include <iostream>
using namespace std;

void print(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num = num + 1 ;
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


// 1 
// 2 3 
// 4 5 6 
=======
#include <iostream>
using namespace std;

void print(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num = num + 1 ;
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


// 1 
// 2 3 
// 4 5 6 
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
// 7 8 9 10 