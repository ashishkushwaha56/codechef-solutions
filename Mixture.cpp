#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=20){
        while(t--){
            int a,b;
            cin>>a>>b;
            if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && (a+b)>0){
                if(a>0 && b>0){
                    cout<<"Solution"<<endl;
                }
                if(a>0 && b==0){
                    cout<<"Solid"<<endl;
                }
                if(a==0 && b>0){
                    cout<<"Liquid"<<endl;
                }
            }
        }
    }
    return 0;
}