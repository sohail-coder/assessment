#include <bits/stdc++.h>
using namespace std;

int len = 1, res = 0;
map<int, string> m;
int recieve(int chunk, string s)
{
    m[chunk] = s;
}

pair<string, int> read()
{
    pair<string, int> p;
    string s = "";
    int size = 0;
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->first == len)
        {
            string temp = it->second;
            s = s + it->second;
            len = len + temp.length();
        }
    }
    p.first = s;
    p.second = s.length();

    return p;
}

int main()
{
    recieve(1, "i ");
    recieve(3, "a");
    recieve(7, " pr");
    pair<string, int> p = read();
    cout << p.first << " " << p.second;

    return 0;
}
