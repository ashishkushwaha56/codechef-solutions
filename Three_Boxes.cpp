#include <iostream>

using namespace std;

int main(){
    int t;
    t = 1;
    if(t>=1 && t<=100){
        while(t--){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a>=1 && a<=b && b>=a && b<=c && c>=b && c<=d && d<=100){
                int total = a+b+c;
                if(total<=d){
                    cout<<"1"<<endl;
                }
                else{
                    if((a+b)<=d || (a+c)<=d || (b+c)<=d){
                        cout<<"2"<<endl;
                    }
                    else{
                        cout<<"3"<<endl;
                    }
                }
            }
        }
    }
}