/*
 * Author: czzy
 * Time: 2023-01-27 09:49:32
**/

#include <bits/stdc++.h>
using namespace std;

string func(vector<int> arr) {
    // vector<int> result;
    
    // int number = arr[0] - 1;
    // int average = arr[2] / number;
    // int rem = arr[2] % number;
    // if (average == 0) {
    //     average = 1;
    //     rem = 0;
    // }
    
    // for (int i = 0; i < number; i++){
    //     result.push_back(average);
    // }
    // // cout << "average: " << average << "\n";
    // // cout << "rem: " << rem << "\n";

    // int index = 0;
    // while (rem != 0) {
    //     index %= number;
    //     result[index] += 1;
    //     rem -= 1;
    //     index += 1;
    // }
    // cout << "arr: ";
    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    vector<int> result;
    for (int i = 0; i < arr[0] - 1; i++) {
        result.push_back(0);
    }
    int index = 0;
    int number = arr[2];
    
    while (number != 0) {
        result[index] += 1;
        index += 1;
        index %= (arr[0] - 1);
        number -= 1;
    }


    result.push_back(arr[1] - arr[2]);

    string str = "";
    for (int i = 0; i < result.size(); i++) {
        str += (to_string(result[i]));
        if ( i!= result.size() - 1) {
            str += " ";
        }
    }
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string n;
    getline(cin, n);

    for (int i = 0; i < stoi(n); i++) {
        vector <int> arr;
        string input;
        getline(cin, input);
        istringstream is(input);
        int num;
        while(is>>num) {
            arr.push_back(num);
        }
        cout << func(arr) << "\n";
    }
    return 0;
}
