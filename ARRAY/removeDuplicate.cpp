#include<iostream>
using namespace std;

//return removed duplicate new array length 

int removedArray ( int n , int arr[]){
    int i = 0 ;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1 ;
}


int main(){

    int n = 8 ;
    int arr[n]={2,3,4,4,5,5,6,6};
    cout<<removedArray( n , arr );    //5    TC: n

    return 0;
}