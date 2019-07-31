#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    string input[10];
    cin>>n;
    if(n>0&&n<=10){
        for(int a=0;a<n;a++){
            cin>>input[a];
        }
        for(int a=0;a<n;a++){
            transform(input[a].begin(),input[a].end(),input[a].begin(),::tolower);
            if(input[a]==string(input[a].rbegin(),input[a].rend()))
                {cout<<"TRUE";}
            else
                {cout<<"FALSE";}

        }
    }
    return 0;
}
