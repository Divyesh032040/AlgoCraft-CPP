<<<<<<< HEAD
#include<iostream>
using namespace std;
    void print(int n){
        for(int i=0 ; i<n ; i++){
            //space
            for(int j=0 ; j<n-i-1 ; j++){
                cout<<" ";
            }
            //stars
            for(int k=0 ; k<i*2+1 ;k++){
                cout<<"*";
            }
            //space
             for(int p=0 ; p<n-i-1 ; p++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
=======
#include<iostream>
using namespace std;
    void print(int n){
        for(int i=0 ; i<n ; i++){
            //space
            for(int j=0 ; j<n-i-1 ; j++){
                cout<<" ";
            }
            //stars
            for(int k=0 ; k<i*2+1 ;k++){
                cout<<"*";
            }
            //space
             for(int p=0 ; p<n-i-1 ; p++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
// ***********