#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    bool flag=true;
    for(int i=1;i<=n;i++){
        if((i % 2)==1){
            flag=false;
        }
        for(int j=1;j<=i;j++){
            cout<<flag;
            flag=!(flag);
        }
        cout<<endl;
    }
}