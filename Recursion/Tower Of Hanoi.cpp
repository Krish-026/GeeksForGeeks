// The tower of Hanoi is a famous puzzle where we have three rods and N disks.The objective of the puzzle is to move the entire stack to another rod.You are given the number of discs N.Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod.Also, you need to find the total moves.Note : The discs are arranged such that the top disc is numbered 1 and the bottom - most disc is numbered N.Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc.Refer the provided link to get a better clarity about the puzzle.

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
int TOH(int n, int s, int h, int d) // s = source, h = helper, d = destination
{
    if (n == 1)
    {
        cout << "move disk 1 from rod " << s << " to rod " << d << endl;
        return 1;
    }
    int count = TOH(n - 1, s, d, h);
    cout << "move disk " << n << " from rod " << s << " to rod " << d << endl;
    count += TOH(n - 1, h, s, d);
    return count + 1;
}
void solve()
{
    int n;
    cin >> n;
    cout << TOH(n, 1, 2, 3);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}