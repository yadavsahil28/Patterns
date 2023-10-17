// 1
// 11
// 121
// 1331
// 14641

#include<iostream>
using namespace std;
int Facto(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
void Pascal_Triangle(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            int a=row-col;
            cout<<Facto(row)/(Facto(col)*Facto(a));
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Pascal_Triangle(n);
    return 0;
}
