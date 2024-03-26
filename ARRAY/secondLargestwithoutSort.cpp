//brute Force approach : sort array and proccess with n-1 and n-2 if both are not same condition apply 

//batter approach : first find largest element by apply loop and help of largest variable and than using largest number and second large variable find both : time complexity is o(2n)

// #include <iostream>
// using namespace std;

// int largestElem(int n , int arr[]){
//     int largest = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// int secondLargest(int n , int arr[]){
//     int secondLarge = -1 ;
//     int largest = largestElem(n, arr);
//     for(int i=0;i<n;i++){
//         if(arr[i]>secondLarge && arr[i]<largest){
//             secondLarge = arr[i];
//         }
//     }
//     cout<<largest<<"  "<<secondLarge<<endl;
//     return secondLarge;
// }

// int main() {
// int n = 5 ;

// int arr[n]={45,99,23,56,39};

// secondLargest(n, arr );

// return 0;
// }
//---------------------------------------------------------------

//optimized approach 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int largerNum(int n, int arr[]) {
    int larger = arr[0];
    int secondLarger = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > larger) {
            secondLarger = larger;
            larger = arr[i];
        }
    }
    cout<<"largest is: "<<larger<<" "<<"second largest is: "<<secondLarger<<endl;
    return larger; 
}
int main() {
  int n = 6 ; 
  int arr[n] = {34,45,23,56,25,22};
  int ans = largerNum(n, arr );


    return 0;
} 