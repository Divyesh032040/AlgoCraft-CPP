<<<<<<< HEAD
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void downPyramid(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k < n*2-(i*2 + 1);k++){
            cout<<"*";
        }
        //space
          for(int p=0;p<i;p++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    downPyramid(n);
    return 0;
}

// *************
//  *********** 
//   *********  
//    *******   
//     *****    
//      ***     
=======
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void downPyramid(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k < n*2-(i*2 + 1);k++){
            cout<<"*";
        }
        //space
          for(int p=0;p<i;p++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    downPyramid(n);
    return 0;
}

// *************
//  *********** 
//   *********  
//    *******   
//     *****    
//      ***     
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
//       *  