#include <bits/stdc++.h> 
using namespace std;

//the largest one will be come at top
//not a linear data structure , inside it a tree data structures is maintained 

//main fn : push() pop() top()



int main() {

priority_queue<int>pq;    //aka max heap

pq.push(10);  //{10}
pq.push(30);  //{30 10}
pq.push(140); //{140 30 10}
pq.push(40);  //{140 40 30 10}
pq.push(34);  //{140 40 34 30 10}

cout<<pq.size();  //5

pq.pop();  // remove 140

cout<<pq.top();  //now top is 40

//minimum priority queue
priority_queue<int , vector<int> , greater<int>> pq2 ;    //aka min heap

pq2.push(4);   //{4}
pq2.push(5);   //{4,5}
pq2.push(3);   //{3,4,5}
pq2.push(9);   //{3,4,5,9}
 
cout<<pq2.top();  //3

pq2.pop();  //remove first elem {3}

cout<<pq2.top();  //4
return 0;
}