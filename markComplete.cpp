#include <iostream>
#include <fstream>
#include <vector>
#include "utils.h"

void markComplete() {
    int index;
    std::cout << "Введите номер задачи для отметки как выполненной: ";
    if (!(std::cin >> index) || index < 1) {
        std::cout << "Неверный номер задачи.\n";
        return;
    }

    std::ifstream inFile("tasks.txt");
    std::vector<std::string> tasks;
    std::string line;
    while (std::getline(inFile, line)) {
        tasks.push_back(line);
    }
    inFile.close();

    if (index > static_cast<int>(tasks.size())) {
        std::cout << "Задача с таким номером не существует.\n";
        return;
    }

    tasks[index - 1][0] = '1'; // Отметка как выполненной

    std::ofstream outFile("tasks.txt");
    for (const auto& t : tasks) {
        outFile << t << "\n";
    }
    outFile.close();

    std::cout << "Задача отмечена как выполненная.\n";
}
