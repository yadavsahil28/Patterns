// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

#include<iostream>
using namespace std;
void Star_Palindrome(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-row-2;col++){
            cout<<"*";
        }
        for(int col=0;col<2*row+1;col++){
            if(col%2!=0){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        for(int col=0;col<2*n-row-2;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Star_Palindrome(n);
    return 0;
}
