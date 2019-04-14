#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t, n, p;
vector<int> minTrs;
vector<int> players;
vector<int> sums;

int calculate_tr(int startIndex)
{
    int sum = 0;
    return (p - 1) * players[startIndex] - sums[startIndex + p - 1] + sums[startIndex];
}

void read_input()
{
    cin >> n >> p;
    players = vector<int>(n);
    sums = vector<int>(n);
    for (size_t i = 0; i < n; i++)
    {
        int player;
        cin >> player;
        players[i] = player;
    }
}

void calc_sums()
{
    int sum = 0;
    for (size_t i = 0; i < players.size(); i++)
    {
        sum += players[i];
        sums[i] = sum;
    }
}

void calc_min_tr()
{
    int minTr = 0;

    for (size_t i = 0; i <= n - p; i++)
    {
        int tr = calculate_tr(i);
        if (tr < minTr || i == 0)
        {
            minTr = tr;
        }
    }

    minTrs.push_back(minTr);
}

void print()
{
    for (size_t i = 1; i <= minTrs.size(); i++)
    {
        cout << "Case #" << i << ": " << minTrs[i - 1] << '\n';
    }
}

void solve()
{
    read_input();

    std::sort(players.begin(), players.end(), std::greater<int>());

    calc_sums();

    calc_min_tr();
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    print();

    return 0;
}