// Given the total number of persons n and a number k which indicates that k - 1 persons are skipped and kth person is killed in circle in a fixed direction.
// The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.
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

int jos(int n, int k)
{
    if (n == 1)
        return 0;
    return (jos(n - 1, k) + k) % n;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    cout << (jos(n, k) + 1) << endl; // Since N starts from 1 not zero so we add 1; or You can do below code without adding 1;
    int jos(int n, int k)
    {
        if (n == 1)
            return 1;
        return (jos(n - 1, k) + k - 1) % n + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}