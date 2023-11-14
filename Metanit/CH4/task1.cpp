#include <iostream>
#include <memory>

size_t enter_size(void) {
    size_t n;
    std::cin >> n;
    return n;
}

int main(void) {
    size_t size = enter_size();
    std::unique_ptr<int[]> array = std::make_unique<int[]>(size);

    for(size_t i = 0; i < size; ++i) {
        array[i] = i * i;
    }

    int64_t sum = 0;

    for(size_t i = 0; i < size; ++i) {
        sum += array[i];
    }

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}