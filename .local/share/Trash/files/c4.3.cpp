#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        if(str[0]=='#') break;
        int f=0;
        if(next_permutation(str.begin(), str.end()))
        {
            f=1;
            cout << str << endl;
        }
        if(!f) cout<< "No Successor" << endl;
    }
    return 0;
}
