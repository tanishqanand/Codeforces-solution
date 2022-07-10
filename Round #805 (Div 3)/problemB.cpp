#include <bits/stdc++.h>
using namespace std;

int polycarp(string s)
{
    unordered_map<char, int> map;

    int days = 0;
    int len = s.length();
    int i = 0;
    while(i <= len - 1) {
        char ch = s[i];
        if(map.find(ch) == map.end()) {
            if(map.size() == 3) {
                days += 1;
                map.clear();
            }
            map[ch] = 1;
        }
        i++;
    }

    if(map.size() > 0 && map.size() <= 3) {
        days += 1;
    } 

    return days;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int result = polycarp(s);
        cout << result << endl;
    }
    return 0;
}