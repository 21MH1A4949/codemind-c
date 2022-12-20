#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    cin >> s >> s1;
    string n = s + s1;
    sort(n.begin(),n.end());
    cout << n;
}