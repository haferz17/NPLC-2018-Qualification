#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    int x1[n],x2[n],y1[n],y2[n];
    float z;
    if(n>=1&&n<=100)
    {
        for(a=0;a<n;a++)
        {
            cin>>x1[a]>>y1[a]>>x2[a]>>y2[a];
        }
        for(a=0;a<n;a++)
        {
            if(x1[a]>=0&&x1[a]<=50 && y1[a]>=0&&y1[a]<=50 && x2[a]>=0&&x2[a]<=50 && y2[a]>=0&&y2[a]<=50){
                z=pow((x2[a]-x1[a]),2)+pow((y2[a]-y1[a]),2);
                z=sqrt(z);
                cout<<round(z);
                if(a!=n-1){
                    cout<<"\r\n";
                }
            }
        }
    }
    return 0;
}
