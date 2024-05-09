#include <iostream>
#include <cmath>
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

int main() {
    int T, n;
    std::cin >> T;

    while (T--) {
        std::cin >> n;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            if (!isPerfectSquare(x)) {
                ++count;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}
