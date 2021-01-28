#include<iostream>

using namespace std;

void cin_arr(int* arr,int n);
string* change_arr_to_string(int* arr,int n);
string check_symmetry(string s);

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cin_arr(arr,n);
    string* arr_string=new string [n];
    arr_string=change_arr_to_string(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<check_symmetry(arr_string[i])<<endl;
    }
    return 0;
}

void cin_arr(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

string* change_arr_to_string(int* arr,int n)
{
    string* arr_string=new string [n];
    for(int i=0;i<n;i++)
    {
        arr_string[i]=to_string(arr[i]);
    }
    return arr_string;
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
