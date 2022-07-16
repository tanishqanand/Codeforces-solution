#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n)
{
    int x = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] % x != 0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int *arr = new int[n];

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int result = f(arr, n);

        if(result) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}