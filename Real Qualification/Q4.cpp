#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
    int N,a,b,c,e,z;
    string x[10],y,d;
    cin>>N;
    if(N>=1&&N<=10)
    {
        for(a=0;a<N;a++)
        {
            cin>>x[a];
        }
        for(a=0;a<N;a++)
        {
            y=x[a];
            e=0;
            while(y.length()>1)
            {
                z=1;
                for(b=0;b<y.length();b++)
                {
                    d=y[b];
                    c=atoi(d.c_str());
                    z*=c;
                }
                stringstream ss;
                ss<<z;
                y=ss.str();
                e++;
            }
            cout<<e;
            if(a<N-1)cout<<"\r\n";
        }
    }
    return 0;
}
