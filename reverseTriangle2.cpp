#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for triangle";
    cin>>n;
    //we see that everytime the sum i+j=n+1
    //so the value of j=n+1-i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}