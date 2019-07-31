#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int T,a,c;
    double h,b,w;
    string K[10],s;
    cin>>T;
    cin.ignore();
    for(a=0;a<T;a++)
    {
        getline(cin,K[a]);
    }
    for(a=0;a<T;a++)
    {
        s=K[a];
        vector <string> tokens;
        stringstream check1(s);
        string i;
        while(getline(check1,i,' '))tokens.push_back(i);
        if(tokens[0].find(",")!=string::npos)tokens[0].replace(tokens[0].find(","),1,".");
        if(tokens[1].find(",")!=string::npos)tokens[1].replace(tokens[1].find(","),1,".");
        if(tokens[2].find(",")!=string::npos)tokens[2].replace(tokens[2].find(","),1,".");
        h=atof(tokens[0].c_str());
        b=atof(tokens[1].c_str());
        w=atof(tokens[2].c_str());
        c=1;
        while(h*b>=w)
        {
            if(h*b==w)c++;
            else c+=2;
            h*=b;
        }
        cout<<c;
        if(a<T-1)cout<<"\r\n";
    }
    return 0;
}
