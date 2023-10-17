// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;
void Butterfly(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        for(int col=1;col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        for(int col=1;col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Butterfly(n);
    return 0;
}
