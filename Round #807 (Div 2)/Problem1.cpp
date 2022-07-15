#include <bits/stdc++.h>
using namespace std;

bool f(int arr[], int x, int n) {
    sort(arr, arr + 2 * n);

    int i = 0, j = n;
    while(i < n && j < 2 * n) {
        if(arr[j] - arr[i] < x) return false;
        i++;
        j++;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, x;

        cin >> n;
        cin >> x;

        int *arr = new int[2 * n];
        for(int j = 0; j < 2 * n; j++) {
            cin >> arr[j];
        }
        
        bool result = f(arr, x, n);

        if(result == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}