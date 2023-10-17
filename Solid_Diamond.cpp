//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;
void Solid_Diamond(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        for(int col=0;col<row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Solid_Diamond(n);
    return 0;
}
