// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,…… First, delete every second number, we get following reduced set.1, 3, 5, 7, 9, 11, 13, 15, 17, 19,………… Now, delete every third number, we get 1, 3, 7, 9, 13, 15, 19,….….Continue this process indefinitely……
// Any number that does NOT get deleted due to above process is called “lucky”.

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
bool fun(int n, int d)
{
    if (n < d)
        return true;
    if (n % d == 0)
        return false;
    return fun(n - n / d, d + 1);
}
bool luckyNum(int n)
{
    return fun(n, 2);
}
void solve()
{
    int n;
    cin >> n;
    cout << luckyNum(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}