/*
 * Author: czzy
 * Time: 2023-02-25 12:38:09
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void generateCombinations(int a, int b, int pos, vector<int>& curr, vector<vector<int> >& result) {
    if (curr.size() == a) {
        result.push_back(curr);
        return;
    }
    for (int i = pos; i < b; i++) {
        curr.push_back(i);
        generateCombinations(a, b, i+1, curr, result);
        curr.pop_back();
    }
}

void generateNeighbor(vector<vector<int> >& result, vector<string>& neighbor, string start) {
    for (auto one: result) {
        string curr = start;
        string result = "";
        vector<int> toend;
        for (int i =0; i < start.size(); i++) {
            if (find(one.begin(), one.end(), i) != one.end()) {
                toend.push_back(curr[i]);
            } else {
                result += curr[i];
            }
        }
        sort(toend.begin(), toend.end());
        for (auto rest: toend) {
            result += rest;
        }
        neighbor.push_back(result);
    }

}

vector<string> getneighbor(string start, int k, int n) {
    vector<int> curr;
    vector<vector<int> > result;
    vector<string> neighbor;
    generateCombinations(k, n, 0, curr, result);
    generateNeighbor(result, neighbor, start);
    return neighbor; 
}


int bfs(string start, string end, int k, int n) {
    // cout << "start: " << start << " end: " << end <<  " with k: " << k << '\n';
    queue<string> queue;
    set<string> visited;
    queue.push(start);
    visited.insert(start);
    int step = 0;
    while (! queue.empty()) {
        
        int size = queue.size();
        // cout << "size: " << size << '\n';
        while (size --) {
            string node = queue.front();
            queue.pop();
            // cout << "curr node: " << node << '\n';
            if (node == end) return step;
            for (auto nei : getneighbor(node, k, n)) {
                // cout << "curr node neighbor: " << nei << '\n';
                if (visited.find(nei) == visited.end()) {
                    queue.push(nei);
                    visited.insert(nei);
                    // cout << "push neighbor: " << nei << '\n';
                }
            }
        }
        step += 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int time;
    cin >> time;
    while (time--) {
        // cout << "one test: \n";
        int n, k, result;
        string end = "";
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
            end += to_string(i+1);
        }


        string start = "";
        for (auto x: v) start += to_string(x);
        // cout << "start: " << start << '\n';
        result = bfs(start, end, k, n);
        // cout << "result from bfs: " << result << '\n';
        cout << result << '\n';
    }
    return 0;
}
