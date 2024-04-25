#include <bits/stdc++.h> 
using namespace std;

//FIFO : First in , will be first output from the queue

int main() {


queue<int>q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);

cout<<q.back()<<endl;  //40
q.back() = 50;
cout<<q.back()<<endl;   //50

cout<<q.front()<<endl;  //10

cout<<q.size()<<endl;  //4

q.pop();  //front elem : 10 

cout<<q.front()<<endl; // front elem becomes 20 

return 0;
}