#include <vector>
#include <set>
using namespace std;

vector<int> stones(int n, int a, int b) {
    set<int> res;
    for (int i = 0; i < n; i++) {
        res.insert(i * a + (n - 1 - i) * b);
    }
    return vector<int>(res.begin(), res.end());
}
