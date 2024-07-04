#include <bits/stdc++.h> 
using namespace std;

/*
Example 1: Input Format: n = 36 , Result: 6
brute force approach is use liner search where we check for all n*n <= 36

*/

int sqrtBF(int n){
    int ans = 1 ;
    for(int i=0;i<=n;i++){
        if(i*i <= n) ans = i ;
        else break;
    }
    return ans;
}


//batter approach - binary search 
//take long long to avoid overflow in big input
int mySqrt(int x) {
        long long low = 1;
        long long high = x;
        long long ans  = 1;
        if(x==0) return 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if(mid*mid <= x) ans = mid;
            if(mid*mid > x) high = mid - 1;
            else low = mid + 1;
        }
        return ans;
    }



int main() {
int n = 36;
cout<< mySqrt(n);

return 0;
}