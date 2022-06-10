// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<long>
#define vvl vector<vl>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define pb push_back
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mp make_pair
#define rep(a, b, c) for (long long a = b; a <= c; ++a)
#define repr(a, b, c) for (long long a = b; a >= c; --a)
#define input(a, b, n)                 \
    for (long long i = b; i <= n; ++i) \
        cin >> a[i];
#define output(a, b, n)                \
    for (long long i = b; i <= n; ++i) \
        cout << a[i] << " ";
#define Mod 1000000007
using namespace std;
int countBit1toN(int n)
{
    if (n <= 0)
        return 0;
    int x = log2(n);
    int ans = pow(2, x - 1) * x + (n - pow(2, x) + 1);
    return ans = ans + countBit1toN(n - pow(2, x));
}
void solve()
{
    int n;
    cin >> n;
    int ans = countBit1toN(n);
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}