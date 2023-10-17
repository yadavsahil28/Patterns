// * * * * * 
// *     *
// *   *
// * *
// *

#include<iostream>
using namespace std;
void Hollow_Inverted_Half_Pyramid(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            if(row==0 || row==n-1 || col==0 || col==n-row-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Hollow_Inverted_Half_Pyramid(n);
    return 0;
}
