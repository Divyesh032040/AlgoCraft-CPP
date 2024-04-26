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

int main() {

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans = occurrenceOneBF (arr,n);  //TC: o(n^2) SC: 0(1)
cout<<ans<<endl;

return 0;
}