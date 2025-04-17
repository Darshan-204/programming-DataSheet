#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Max-heap based on second of pair
struct CompareSecond {
    bool operator()(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second < b.second; // Max-heap (highest second comes first)
    }
};

int main() {
    priority_queue<pair<char, int>, vector<pair<char, int>>, CompareSecond> pq;

    pq.push({'a', 10});
    pq.push({'b', 5});
    pq.push({'c', 15});

    while (!pq.empty()) {
        cout << pq.top().first << " : " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
