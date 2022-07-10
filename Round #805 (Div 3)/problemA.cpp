#include <bits/stdc++.h>
using namespace std;

unsigned int bourles(unsigned int m)
{
    // Calculate number of digits in m
    unsigned int n = m;
    int digits = 0;
    while(n > 0) {
        digits += 1;
        n /= 10;
    }

    unsigned int k = (unsigned int)(pow(10, digits - 1));

    return m - k;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        unsigned int m;
        cin >> m;
        unsigned int result = bourles(m);
        cout << result << endl;
    }
    return 0;
}