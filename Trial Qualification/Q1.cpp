#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if(n>=1&&n<=100){
        for(a=1;a<=n;a++){
            cout<<a<<". Welcome to NPLC";
            if(a!=n){
                cout<<"\r\n";
            }
        }
    }
    return 0;
}
