#include<iostream>
using namespace std;
int main(){
    int length,widght;
    cout<<"Enter the length and width of rectangle";
    cin>>length>>widght;
    for(int i=0;i<length;i++){
        for(int j=0;j<widght;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}