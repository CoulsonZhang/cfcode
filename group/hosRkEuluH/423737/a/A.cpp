#include <bits/stdc++.h>

using namespace std;
 
int func(int n) {
    vector<char> string;
    while (n != 0) {
        int rem = n % 10;
        char ch = (rem + '0');
        string.push_back(ch);
        n /= 10;
    }

    reverse(string.begin(), string.end());

    int result = INT_MAX;
    int size = string.size();
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int pair = (string[i] - '0') * 10 + (string[j] - '0');
            if (pair % 25 == 0) {
                int one = j - i - 1;
                int two = size - (j + 1);
                result = min(result, one + two);
            }
        }
    }
    return result;

}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cout << func(num) << "\n";
    }
}