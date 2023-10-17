//     * 
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;
void Hollow_Diamond(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        if(row==1){
            for(int col=1;col<=row;col++)
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int col=1;col<row-1;col++)
            {
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        if(row==1){
            for(int col=1;col<=row;col++)
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int col=1;col<row-1;col++)
            {
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n = 5;
    Hollow_Diamond(n);
    return 0;
}
