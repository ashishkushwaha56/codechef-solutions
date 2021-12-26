#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;
        if(x>=0&&y>=0&&z>=0){
            if((y-x)<=(2*z)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}