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
const int N = 37;
int arr[N][N];

int main()
{
    int a;
    while (cin >> a)
    {
        arr[0][0] = {1};
        {
            for (int i = 0; i <= a; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << arr[i - 1][j - 1] + arr[i - 1][j] << " ";
                }
                cout << endl;
            }
        }
    }
}