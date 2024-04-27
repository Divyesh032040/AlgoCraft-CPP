#include <bits/stdc++.h> 
using namespace std;

int occurrenceOneBF ( int arr[] , int n ){
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                ans++;
            }
        }
       if(ans == 1) return arr[i];
    }
    return -1;
}

int occurrenceOneOptimizeOne(int arr[] , int n){
    int maxElement = arr[0];
   // First, we will find the maximum element(say maxElement) to know the size of the hash array.
    for(int i=0;i<n;i++){
        maxElement = max(maxElement,arr[i]);
    }
    //Then we will declare a hash array of size maxElement+1.
    int hash[maxElement+1]={0};

    //Now, using another loop we will store the elements of the array along with their frequency in the hash array.
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    //After that, using another loop we will iterate over the hash array, and try to find the element for which the frequency is 1, and finally, we will return that particular element.
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1) return arr[i];

    }
    //This line will never execute
    //if the array contains a single element.
    return -1;
}

//id elem comes 2 times , use xor for such case will be best optimized approach
int occurrenceOneOptimizeTwo (int arr[] , int n ){
    int xr = 0;
    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        return xr;
    }
    return -1;
}

int main() {

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans1 = occurrenceOneBF (arr,n);  //TC: o(n^2) SC: 0(1)

int an2s = occurrenceOneOptimizeOne (arr,n);  //TC: 0(3n) SC: 0(hash[max])

int ans3 = occurrenceOneOptimizeTwo(arr,n); //TC:o(n) SC:o(1)
cout<<ans1<<endl;
cout<<ans2<<endl;
return 0;
}

/*
occurrenceOneOptimize

First, we will find the maximum element(say maxElement) to know the size of the hash array.
Then we will declare a hash array of size maxElement+1.
Now, using another loop we will store the elements of the array along with their frequency in the hash array. (i.e. hash[arr[i]]++)
After that, using another loop we will iterate over the hash array, and try to find the element for which the frequency is 1, and finally, we will return that particular element.

*/