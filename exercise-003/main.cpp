#include <fmt/chrono.h>
#include <fmt/format.h>
#include <iostream>

#include "vectorint.hpp"


auto main(int argc, char **argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, World!\n");

    /* INSERT YOUR CODE HERE */
        auto start = std::chrono::system_clock::now();
    VectorInt data(5);

    data.push_back(23);
    data.push_back(42);

    std::cout << "Size: " << data.size() << ", Capacity: " << data.capacity() << std::endl;

    for (int i = 0; i < data.size(); ++i) {
        std::cout << "Element at index " << i << ": " << data.at(i) << std::endl;
    }

    auto end = std::chrono::system_clock::now();
    auto elapsed =
    std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    fmt::print("Zeit: {}", elapsed);

    return 0; /* exit gracefully*/
}
