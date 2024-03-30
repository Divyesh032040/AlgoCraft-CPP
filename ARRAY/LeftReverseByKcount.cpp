#include<iostream>
using namespace std;

void leftRotate ( int n , int arr[] , int d){
     d = d % n ;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d ; i<n ; i++){
        arr[i-d]=arr[i];
    }
    int j= 0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotate( n , arr , d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}