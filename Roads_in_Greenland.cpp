#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u == parent[u])
            return u;
        return parent[u] = find(parent[u]);
    }

    void unite(int u, int v) {
        int pu = find(u);
        int pv = find(v);
        if (pu != pv) {
            if (rank[pu] > rank[pv]) {
                parent[pv] = pu;
            } else if (rank[pu] < rank[pv]) {
                parent[pu] = pv;
            } else {
                parent[pv] = pu;
                rank[pu]++;
            }
        }
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        DSU dsu(N);

        for (int i = 2; i <= N; ++i) {
            for (int j = 2 * i; j <= N; j += i) {
                dsu.unite(i, j);
            }
        }

        int components = 0;
        for (int i = 2; i <= N; ++i) {
            if (dsu.find(i) == i) {
                components++;
            }
        }

        cout << components - 1 << endl;
    }

    return 0;
}
