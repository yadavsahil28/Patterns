// *
// *1*
// *121*
// *12321*
// *1234321*

#include<iostream>
using namespace std;
void Solid_Half_Diamonds(int n){
    for(int row=1;row<=n;row++){
        int a=0;
        for(int col=1;col<=2*row-1;col++){
            if(col==1 || col==2*row-1){
                cout<<"*";
            }
            else{
                if(col<=row){
                    a++;
                    cout<<a;
                }
                else{
                    a--;
                    cout<<a;
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Solid_Half_Diamonds(n);
    return 0;
}
