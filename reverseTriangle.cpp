#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of rectangle";
    cin>>length;
    for(int i=0;i<length;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"*i;
        }
        cout<<endl;
    }
}