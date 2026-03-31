#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt int

const int INF = 10e8;

int main() {
    FIN;
    int n;
    dt minX = INF;
    dt maxX = -INF;
    dt minY = INF;
    dt maxY = -INF;
    dt x, y;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x >> y;
        minX = std::min(minX, x-1);
        maxX = std::max(maxX, x+1);
        minY = std::min(minY, y-1);
        maxY = std::max(maxY, y+1);
    }
    std::cout << 2 *( maxX - minX ) + 2 * ( maxY - minY ) << "\n";
    return 0;
}
