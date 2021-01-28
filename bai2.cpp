#include<iostream>
#include<cstring>

using namespace std;

string check_symmetry(string s);

int main()
{
    string s;
    cin>>s;

    cout<<check_symmetry(s);

    return 0;
}


string check_symmetry(string s)
{
    bool check=true;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
            check=false;
    }
    if(check)
        return "yes";
    else
        return "no";
}
