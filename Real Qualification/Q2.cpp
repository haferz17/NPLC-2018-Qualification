#include <iostream>
using namespace std;
int main()
{
    int N,a,b;
    string y[10],x[10],z,c,out;
    cin>>N;
    if(N>=1&&N<=10)
    {
        for(a=0;a<N;a++)
        {
            cin>>y[a];
            cin>>x[a];
        }
        for(a=0;a<N;a++)
        {
            for(b=0;b<x[a].length();b++)
            {
                if(b==0)z=y[a][0];
                c=y[a][b+1];
                switch(x[a][b])
                {
                    case '&':
                        if(z=="T"&&c=="T")z='T';
                        else z='F';
                        break;
                    case '|':
                        if(z=="T"||c=="T")z='T';
                        else z='F';
                        break;
                    default:
                        if(z=="T"^c=="T")z='T';
                        else z='F';
                }
            }
            if(z=="T")out="true";
            else out="false";
            cout<<out;
            if(a<N-1)cout<<"\r\n";
        }
    }
    return 0;
}
