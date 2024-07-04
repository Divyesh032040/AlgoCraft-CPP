
#include <bits/stdc++.h>
using namespace std;

int peakElementBrute(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if( (i == 0 || arr[i-1]<arr[i]) && ( i == n-1 || arr[i+1]<arr[i])){
            return arr[i];
        }
    }
    return -1;
}

//optimal binary search approach - for one peak in arr
int findPeakElement(vector<int>arr){
    int n = arr.size();
    
     //edge cases
    if(n==1) return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];
    int low = 1;
    int high = n-2;
    while(low<=high){
        int mid = low + (high-low) / 2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1] || arr[mid]==arr[mid+1]) return arr[mid];

        if(arr[mid]<arr[mid+1] && arr[mid] > arr[mid-1]){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }
    return -1;
}

int main() {

     vector<int>arr={1,2,3,4,5,6,6,5};


    int ans = peakElementBrute(arr);

    cout<<ans;


return 0;
}