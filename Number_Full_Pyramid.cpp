//     1
//    232
//   34543
//  4567654
// 567898765

#include<iostream>
using namespace std;
void Number_Full_Pyramid(int n){
    for(int row=0;row<n;row++){
        int a=row;
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<=2*row;col++){
            if(col<=row){
                a++;
                cout<<a;
            }
            else{
                a=a-1;
                cout<<a;
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Number_Full_Pyramid(n);
    return 0;
}
