#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
using namespace std;
#define ll long long
#define int ll
int name, demo, math, english;

struct Student
{
    string name;
    int programmingScore;
    int mathScore;
    int englishScore;
};

void solve()
{
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> students[i].name >> students[i].programmingScore >> students[i].mathScore >> students[i].englishScore;
    }
    for (int i = 0; i < n; ++i)
    {
        int totalScore = students[i].programmingScore + students[i].mathScore + students[i].englishScore;
        cout << students[i].name << " " << totalScore << endl;
    }
}

signed main()
{
    // setlocale(LC_ALL, "");
    buff;
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}