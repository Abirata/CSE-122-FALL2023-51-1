#include <iostream>

// Base class
class Sequence {
public:
    virtual void generate(int n) = 0; // Pure virtual function
};

// Derived class
class Fibonacci : public Sequence {
public:
    void generate(int n) override {
        long long a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            std::cout << a << " ";
            long long temp = a;
            a = b;
            b = temp + b;
        }
        std::cout << std::endl;
    }
};

int main() {
    Fibonacci fibo;
    int n;

    std::cout << "Enter the number of Fibonacci numbers you'd like to print: ";
    std::cin >> n;

    fibo.generate(n);

    return 0;
}
