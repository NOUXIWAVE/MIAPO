#include <iostream>
#include <fstream>
#include <vector>
#include "utils.h"

void viewTasks() {
    std::ifstream file("tasks.txt");
    std::vector<std::string> tasks;
    std::string line;
    int count = 0;

    std::cout << "Список задач:\n";
    while (std::getline(file, line)) {
        count++;
        std::string status = (line[0] == '0') ? "[ ]" : "[X]";
        std::string task = line.substr(2);
        std::cout << count << ". " << status << " " << task << "\n";
    }

    if (count == 0) {
        std::cout << "Нет задач.\n";
    }
}
