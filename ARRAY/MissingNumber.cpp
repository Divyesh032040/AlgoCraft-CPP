
#include <bits/stdc++.h> 
using namespace std;

//brute force 
int findMissingBF(int arr[] , int n){
    for(int i=1 ; i<=n ; i++){
        int flag = 0;
    for(int j=0 ; j<n-1 ; j++){
        if(arr[j]==i){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return i;
    }
}
 return -1;
}

//Batter - using Hash array 
int findMissingBatter (int arr[] , int n){
    //hash arr
    int hash[n+1] = {0};
    for(int i=0 ; i<n-1 ; i++){
        hash[arr[i]]++ ;
    }
    for(int i=1 ; i<=n ;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

//Optimal solution one : sum (1 to n no. sum - 1 to n-1 sum)
int findMissingOptimalOne(int arr[] , int n){
    int TotalSum = 0;
    for(int i=1 ; i<=n ; i++){
        TotalSum += i ;
    }
    int ArrSum = 0;
    for(int i=0 ; i<n-1 ; i++0){
        ArrSum += arr[i];
    }
    int ans = TotalSum - ArrSum;
    return ans; 
}

//optimal solution two : XOR(DO xor operation of 1 to N with 0 to n-1 ans missing no gives not 0)
int findMissingOptimalXor(int arr[] , int n){
//pending 
}
int main() {

    int n;
    cin>>n;

    int arr[n-1];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int ans1 = findMissingBF( arr , n );    //TC: o(n^2)   sc: o(1)

    int ans2 = findMissingBatter( arr , n );  //TC: o(2n)  sc: o(1)

    int ans3 = findMissingOptimalOne( arr , n); //TC: 0(n) SC: o(1)



    cout<<ans1<<endl;
    cout<<ans2<<endl;


return 0;
}