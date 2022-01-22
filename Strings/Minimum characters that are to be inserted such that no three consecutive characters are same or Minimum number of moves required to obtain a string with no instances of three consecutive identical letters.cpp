#include<bits/stdc++.h>
using namespace std;
int getCount(string str, int n)
{
    int cnt = 0;
 
    int i = 0;
    while (i < n - 3) {
        if (str[i] == str[i + 1]
            && str[i] == str[i + 2]) {
            cnt++;
            i = i + 2;
        }
        else
            i++;
    }
 
    return cnt;
}
 
int main()
{
    string str;
    cin>>str;
    int n = str.length();
 
    cout << getCount(str, n);
 
    return 0;
}
