#include <iostream>
#include <vector>
#include <algorithm> // sort, for_each

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 7};

    std::sort(numbers.begin(), numbers.end(),
              [](int a, int b) { return a < b; });

    return 0;
}