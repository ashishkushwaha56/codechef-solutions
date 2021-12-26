#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int i = 1, j = 1, c = 1;
    for(i = 1; i <=n;i++){
        for(j = 1; j <=n;j++){
            for(c = 1; c <=n;c++){
                int a[n];
                if((i ==1 && i == k)||(j==2 && j == k)||(c==3 && c ==k)){
                    break;
                }
            }
        }
    }
    cout<<i<<" "<<j<<" "<<c<<endl;

    return 0;
}