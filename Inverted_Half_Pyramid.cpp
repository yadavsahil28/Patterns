// * * * * * 
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
void Inverted_Half_Pyramid(int n){

    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Inverted_Half_Pyramid(n);
    return 0;
}
