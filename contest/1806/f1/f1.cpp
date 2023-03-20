/*
 * Cited from Walid_Ebaid
 * Learned a lot from this solution
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long n, x,m,K;
int k;
const long long MAXEL = 1000LL * 1000LL * 1000LL * 1000LL;
long long nwd(long long a, long long b)
{
    while (a != 0) {
        b %= a;
        swap(a, b);
    }
    return b;
}
void work()
{
    cin >> n >> m >> K;
	vector<long long> li, result;
	vector<pair<long long, int>> kro;
    result.resize(n + 2);
    for (int i = 0; i < n; i++) {
        cin >> x;
        li.emplace_back(x);
    }
    sort(li.begin(), li.end());
    int ile = 0;
    long long last = li.front();
    for (auto l : li) {
        if (l == last) {
            ile++;
        }
        else {
            kro.emplace_back(last, ile);
            ile = 1;
            last = l;
        }
    }

    kro.emplace_back(last, ile);
    long long nw = 0;
    long long sum = 0;

    for (auto x : kro)
        sum += x.first;

    for (std::size_t i = 0; i < kro.size(); i++) {
        long long tmp = nwd(nw, kro[i].first);
        if (tmp != nw) {
            long long max = -MAXEL;
            for (std::size_t j = i; j < kro.size(); j++)
                max = std::max(max, nwd(nw, kro[j].first) - kro[j].first);
            long long sum2 = sum + max;
            int ite = 0;
            int poz = kro.size() - 1;
            vector<long long> str; 
            while (true) {
                result[kro.size() - i + ite] = std::max(result[kro.size() - i + ite], sum2);
                result[kro.size() - i + ite + 1] = std::max(result[kro.size() - i + ite + 1], sum2 - max + nw);
                while (poz >= int(i) && kro[poz].second == 1)
                    poz--;
                if (poz < int(i))
                    break;
                kro[poz].second--;
                str.emplace_back(poz);
                ite++;
                sum2 += kro[poz].first;
            }
            for (auto x : str)
                kro[x].second++;
            nw = tmp;
        }
        sum -= kro[i].first;
    }
    sum = 0;
    for (auto x : li)
        sum += x;
    nw = 0;
    for (size_t i = 0; i < li.size(); i++){
        long long tmp = nwd(nw, li[i]);
        sum -= li[i];
 
        if (tmp != nw){
            long long max = -MAXEL;
            for (size_t j = i; j < li.size(); j++)
                max = std::max(max, nwd(li[i], nw));
            result[li.size() - i] = std::max(result[li.size() - i], sum + max);
        }
        else
            result[li.size() - i] = std::max(result[li.size() - i], sum + nw);
 
        nw = tmp;
    }
        cout << result[n-K] << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
	int T=1;
	cin >> T;
	while (T--)
        work();

}