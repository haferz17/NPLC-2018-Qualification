#include <iostream>

using namespace std;

int main()
{
    int N,a,b,c=0;
    string nama;
    cin>>N;
    cin>>nama;
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=(N-a)*2;b++)
        {
            cout<<"*";
        }
        for(b=1;b<=a*2-1;b++)
        {
            cout<<nama[c];
            if(b<a*2-1)cout<<" ";
            c++;
            if(c==nama.length())c=0;
        }
        cout<<"\r\n";
    }
    for(a=1;a<=N-1;a++)
    {
        for(b=1;b<=a*2;b++)
        {
            cout<<"*";
        }
        for(b=1;b<=N*2-1-a*2;b++)
        {
            cout<<nama[c];
            if(b<N*2-1-a*2)cout<<" ";
            c++;
            if(c==nama.length())c=0;
        }
        if(a<N-1)cout<<"\r\n";
    }
    return 0;
}
