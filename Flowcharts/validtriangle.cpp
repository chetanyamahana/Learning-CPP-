#include <iostream>
using namespace std;
int main(){
    cout<<"Enter length of sides of triangle:";
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}