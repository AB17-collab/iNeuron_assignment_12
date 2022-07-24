#include<iostream>
using namespace std;
void printTheSquaresOfFirstNnumbers(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    printTheSquaresOfFirstNnumbers(n-1);
    cout<<n*n<<" ";
    
}
int main(){
    int n;
    cout<<"Enter the number of natural numbers:";
    cin>>n;
    printTheSquaresOfFirstNnumbers(n); 
    return 0;
}