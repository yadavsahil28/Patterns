//     * 
//    * *
//   * * *
//  * * * *
// * * * * *

#include<iostream>
using namespace std;
void Full_Pyramid(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Full_Pyramid(n);
    return 0;
}
