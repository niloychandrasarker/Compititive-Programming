#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct Firefly {
    long long x, y;
};

double solve(int n, const vector<Firefly>& fireflies) {
    double min_x = 1e9, max_x = -1e9;
    double min_y = 1e9, max_y = -1e9;

    for (int i = 0; i < n; i++) {
        min_x = min(min_x, (double)fireflies[i].x);
        max_x = max(max_x, (double)fireflies[i].x);
        min_y = min(min_y, (double)fireflies[i].y);
        max_y = max(max_y, (double)fireflies[i].y);
    }

    double triangle_area = max_y * (max_x - min_x) / 2.0;
    double rectangle_area = (max_y - min_y) * (max_x - min_x);

    return triangle_area / (2.0 * rectangle_area);
}

int main() {
    int T;
    cin >> T;

    cout << fixed << setprecision(7);

    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        vector<Firefly> fireflies(n);

        for (int i = 0; i < n; i++) {
            cin >> fireflies[i].x >> fireflies[i].y;
        }

        double result = solve(n, fireflies);
        cout << result << endl;
    }

    return 0;
}