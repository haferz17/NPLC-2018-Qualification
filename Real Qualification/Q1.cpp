#include <iostream>
using namespace std;
int main()
{
    int n,a,b=0,d,e;
    string c[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","dear","Aldo","Happy","birthday","to","you"};
    cin>>n;
    string t[n];
    for(a=0;a<n;a++){
        cin>>t[a];
    }
    for(a=0;a<16;a++){
        cout<<t[b]<<": "<<c[a]<<endl;
        b++;
        if(b==n)b=0;
    }
    return 0;
}
