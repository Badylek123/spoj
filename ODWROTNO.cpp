#include <iostream>

int find_inverse(int p, int n) {
    int power = p - 2;
    long long result = 1;
    long long base = n;

    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % p;
        }
        base = (base * base) % p;
        power /= 2;
    }

    return static_cast<int>(result);
}

int main() {
	std::ios::sync_with_stdio(false);
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int p, n;
        std::cin >> p >> n;
        int inverse = find_inverse(p, n);
        std::cout << inverse << '\n';
    }

    return 0;
}
