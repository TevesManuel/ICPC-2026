#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt long long

enum class LastWord { None, T, A, P };

int main() {
    FIN;
    LastWord lastWord = LastWord::None;
    std::string s;
    std::cin >> s;
    for (char c : s) {
        if(c == 'T' && lastWord == LastWord::None) {
            lastWord = LastWord::T;
        }
        else if (c == 'A' && lastWord == LastWord::T) {
            lastWord = LastWord::A;
        }
        else if (c == 'P' && lastWord == LastWord::A) {
            lastWord = LastWord::P;
            break;
        }
    }
    if (lastWord == LastWord::P) {
        std::cout << "S\n";
    } else {
        std::cout << "N\n";
    }
    return 0;
}