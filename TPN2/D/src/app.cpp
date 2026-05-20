#include <iostream>

#define FIN std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

#define dt long long

int main() {
    FIN
    int n;
    std::cin >> n;
    dt e[n];
    std::pair<dt, dt> aux[n];
    int dimL = 0;
    bool finded = false;

    for(int i = 0; i < n; i++) {
        
        std::cin >> e[i];
        finded = false;

        while( (dimL > 0) && (e[i] <= aux[dimL-1].first)) dimL--;
        if (dimL == 0) 
            std::cout << "0 ";
        else
            std::cout << aux[dimL-1].second << " ";
        aux[dimL] = {e[i], i+1};
        dimL++;

    }
    
    std::cout << "\n";
} //monotonic stack
// https://usaco.guide/gold/stacks
// https://codeforces.com/blog/entry/123527