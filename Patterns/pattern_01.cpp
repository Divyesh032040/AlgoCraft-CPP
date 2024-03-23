#include<iostream>
using namespace std;

void print(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main (){
    int count ;

    cin>>count ;

    print(count);


    return 0;
}

//if pattern not work , probably we did mistake in for loops

// * * * *
// * * * *
// * * * *
// * * * *