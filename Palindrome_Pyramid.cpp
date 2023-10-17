// A
// ABA      
// ABCBA    
// ABCDCBA  
// ABCDEDCBA

#include<iostream>
using namespace std;
void Palindrome_Pyramid(int n){
    for(int row=1;row<=n;row++){
        char ch='A'-1;
        for(int col=1;col<=2*row-1;col++){
            if(col<=row){
                ch++;
                cout<<ch;
            }
            else{
                ch=ch-1;
                cout<<ch;
            }
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Palindrome_Pyramid(n);
    return 0;
}
