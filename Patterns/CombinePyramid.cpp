<<<<<<< HEAD
#include <iostream>
using namespace std;

void upPyramid(int n){
for(int i=0;i<n;i++){
    //space 
    for(int j=0 ; j<n-i-1 ; j++){
        cout<<" ";
    }
    //star
    for (int h = 0; h < (i*2)+1 ; h++)
    {
        cout<<"*";
    }
    
    //space
    for(int p=0 ; p<n-i-1 ; p++){
        cout<<" ";
    }
    cout<<endl;
}
}

void downPyramid(int n){
for(int i=0 ; i<n ; i++){
    //space 
    for(int k=0;k<i;k++){
        cout<<" ";
    }
    //star
    for(int e=0;e<n*2-(i*2+1);e++){
        cout<<"*";
    }

    //space
     for(int r=0;r<i;r++){
        cout<<" ";
    }
    cout<<endl;
}
}

int main() {

int n;
cin>>n;
upPyramid(n);
downPyramid(n);

return 0;
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
// ***********
// ***********
//  ********* 
//   *******  
//    *****   
//     ***    
=======
#include <iostream>
using namespace std;

void upPyramid(int n){
for(int i=0;i<n;i++){
    //space 
    for(int j=0 ; j<n-i-1 ; j++){
        cout<<" ";
    }
    //star
    for (int h = 0; h < (i*2)+1 ; h++)
    {
        cout<<"*";
    }
    
    //space
    for(int p=0 ; p<n-i-1 ; p++){
        cout<<" ";
    }
    cout<<endl;
}
}

void downPyramid(int n){
for(int i=0 ; i<n ; i++){
    //space 
    for(int k=0;k<i;k++){
        cout<<" ";
    }
    //star
    for(int e=0;e<n*2-(i*2+1);e++){
        cout<<"*";
    }

    //space
     for(int r=0;r<i;r++){
        cout<<" ";
    }
    cout<<endl;
}
}

int main() {

int n;
cin>>n;
upPyramid(n);
downPyramid(n);

return 0;
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
// ***********
// ***********
//  ********* 
//   *******  
//    *****   
//     ***    
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
//      * 