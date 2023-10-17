// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<iostream>
using namespace std;
void Hollow_Solid_Diamond(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        for(int col=1;col<=2*row-2;col++){
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        for(int col=1;col<=2*row-2;col++){
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Hollow_Solid_Diamond(n);
    return 0;
}
