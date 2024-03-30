<<<<<<< HEAD
#include<iostream>
using namespace std;

void pattern1 (int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
           }
           cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
       for(char ch = 'A' ; ch<='A'+ (n-i-1) ; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(char j=0 ; j<=i ; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        char start = ch+(n-i-1);
        for(char j = start ; j<=start+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //pattern
        char ch = 'A';
        int bp = (2*i+1)/2;
        for(int u=0;u<=i*2+1;u++){
            cout<<ch;
            if(u<bp) ch ++;
            else ch--;   
        }

        //space 
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){

int n;
cin>>n;
//pattern1(n);
//pattern2(n);
//pattern3(n);
//pattern4(n);
//pattern5(n);


 

    return 0;
=======
#include<iostream>
using namespace std;

void pattern1 (int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
           }
           cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
       for(char ch = 'A' ; ch<='A'+ (n-i-1) ; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(char j=0 ; j<=i ; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        char start = ch+(n-i-1);
        for(char j = start ; j<=start+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //pattern
        char ch = 'A';
        int bp = (2*i+1)/2;
        for(int u=0;u<=i*2+1;u++){
            cout<<ch;
            if(u<bp) ch ++;
            else ch--;   
        }

        //space 
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){

int n;
cin>>n;
//pattern1(n);
//pattern2(n);
//pattern3(n);
//pattern4(n);
//pattern5(n);


 

    return 0;
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20
}