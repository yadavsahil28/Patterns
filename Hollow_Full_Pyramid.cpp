//     * 
//    * *
//   *   *
//  *     *
// * * * * *

#include<iostream>
using namespace std;
void Hollow_Full_Pyramid(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0; col<=row; col++){
            if(row==0 || row==n-1 || col==0 || col==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Hollow_Full_Pyramid(n);
    return 0;
}
