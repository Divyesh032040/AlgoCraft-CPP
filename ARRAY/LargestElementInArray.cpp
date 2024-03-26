#include <iostream>
using namespace std;

int largestElement(int n , int arr[]){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest ;
    return 1 ;
}

int main() {
int n;
n = 5 ;
int arr[5]={45,999,23,56,39};

largestElement(n , arr);

return 0;
}

//999