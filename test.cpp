#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;

string getOutput(int t)
{
    if (t > 0)
        return "1";
    else if (t == 0)
        return "0.5";
    else if (t < 0)
        return "0";
}

void solve(int t)
{
    cout << getOutput(t) << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int input;
        cin >> input;
        solve(input);
    }
    return 0;
}