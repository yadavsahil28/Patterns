// * 
// * * 
// * * * 
// * * * * 
// * * * * *

#include<iostream>
using namespace std;
void Half_Pyramid(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Half_Pyramid(n);
    return 0;
}
