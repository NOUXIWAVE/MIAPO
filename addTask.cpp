#include <iostream>
#include <fstream>
#include "utils.h"

void addTask() {
    std::string task;
    std::cout << "Введите новую задачу: ";
    std::cin.ignore(); // Очистка буфера
    std::getline(std::cin, task);

    std::ofstream file("tasks.txt", std::ios::app);
    if (file.is_open()) {
        file << "0," << task << "\n"; // 0 - не выполнено, 1 - выполнено
        file.close();
        std::cout << "Задача добавлена.\n";
    } else {
        std::cout << "Ошибка открытия файла!\n";
    }
}
