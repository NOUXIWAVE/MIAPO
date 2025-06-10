#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <limits>

// Очистка буфера ввода
inline void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif // UTILS_H
