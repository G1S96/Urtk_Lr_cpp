#include <vector>
#include <iostream>
#include <numeric>
#include <functional>
#include <algorithm>

using namespace std;


int main(int argc, const char* argv[])
{
    unsigned int N;
    vector<int> total, dist, cost;
    while (cin >> N) total.push_back(N);
    auto mid = total.begin() + total.size() / 2;
    copy(total.begin(), mid, back_inserter(dist));
    copy(mid, total.end(), back_inserter(cost));
    sort(dist.begin(), dist.end(), greater<int>());
    sort(cost.begin(), cost.end());
    cout << inner_product(dist.begin(), dist.end(), cost.begin(), 0) << endl;
}