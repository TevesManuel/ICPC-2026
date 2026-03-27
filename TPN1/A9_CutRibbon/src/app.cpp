#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt long long

const int MEASURES_LENGTH = 3;
const dt NEG_INF = -1e18;
dt memo[4001];

dt cuts(dt value, int * measures) {
    if(value < 0) return NEG_INF;
    if(value == 0) return 0;
    if(memo[value] != -1) return memo[value];

    dt res = NEG_INF;
    for(int i = 0; i < MEASURES_LENGTH; i++) {
        res = std::max(res, cuts(value - measures[i], measures) + 1);
    }

    return memo[value] = res;
}

int main() {
    FIN;
    memset(memo, -1, sizeof(memo));
    int n;
    int measures [3];
    std::cin >> n >> measures[0] >> measures[1] >> measures[2];
    std::cout << cuts(n, measures) << "\n";
    return 0;
}