#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a,b;
    while(getline(cin,a),getline(cin,b))
    {
        int i=0,j=0;
        while(i<a.length()&&j<b.length())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }

