#include<iostream>
using namespace std;
void printTheFirstNnumbers(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printTheFirstNnumbers(n-1);
}
int main(){
    int n;
    cout<<"Enter the number of natural numbers:";
    cin>>n;
    printTheFirstNnumbers(n); 
    return 0;
}