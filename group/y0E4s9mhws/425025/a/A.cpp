/*
 * Author: czzy
 * Time: 2023-02-01 19:02:22
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int time;
    cin >> time;
    
    while (time--) {
        int number;
        ll result = 0;
        cin >> number;
        ll arr [number];        
        for (int i = 0; i < number; i++) {
            cin >> arr[i];
        }
        for (int index = 0; index < number-1; index++) {
            // cout << "one: " << arr[index] << " two: " << arr[index+1] << "\n";
            result = max(result, arr[index] * arr[index+1]);
        }
        
        cout << result << "\n";

    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int max_min_product(vector<int> arr) {
//     int n = arr.size();
//     int max_product = INT_MIN;
//     int min_product = INT_MAX;
//     int max_value = INT_MIN;
//     int min_value = INT_MAX;
//     int max_product_ending_here = 1;
//     int min_product_ending_here = 1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             max_product_ending_here *= arr[i];
//             min_product_ending_here = min(min_product_ending_here * arr[i], 1);
//             max_value = max(max_value, arr[i]);
//         } else if (arr[i] == 0) {
//             max_product_ending_here = 0;
//             min_product_ending_here = 1;
//             max_value = 0;
//         } else {
//             int temp = max_product_ending_here;
//             max_product_ending_here = max(min_product_ending_here * arr[i], 1);
//             min_product_ending_here = temp * arr[i];
//             max_value = max(max_value, arr[i]);
//         }

//         if (max_product_ending_here > max_product) {
//             max_product = max_product_ending_here;
//         }

//         if (min_product_ending_here < min_product) {
//             min_product = min_product_ending_here;
//         }
//     }

//     return max(max_product, max_value);
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int time;
//     cin >> time;
//     while (time--) {
//         int number;
//         cin >> number;
//         // int arr [number];        
//         // for (int i = 0; i < number; i++) {
//         //     cin >> arr[i];
//         // }
//         vector<int> arr;
//         for (int i = 0; i < number; i++){
//             int tmp;
//             cin >> tmp;
//             arr.push_back(tmp);
//         }

//         int result = max_min_product(arr);

//         cout << result << "\n";

//     }

//     return 0;
// }