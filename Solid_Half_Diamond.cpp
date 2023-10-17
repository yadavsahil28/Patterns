// 1
// 2*3
// 4*5*6
// 7*8*9*10      
// 11*12*13*14*15
// 15*14*13*12*11
// 10*9*8*7
// 6*5*4
// 3*2
// 1

#include<iostream>
using namespace std;
void Solid_Half_Diamond(int n){
    int a=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=2*row-1;col++){
            if(col%2==0){
                cout<<"*";
            }
            else{
                cout<<a;
                a++;
            }
        }
        cout<<endl;
    }
    int b=a-1;
    for(int row=n;row>=1;row--){
        for(int col=2*row-1;col>=1;col--){
            if(col%2==0){
                cout<<"*";
            }
            else{
                cout<<b;
                b--;
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Solid_Half_Diamond(n);
    return 0;
}
