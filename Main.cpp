#include <iostream>
#include "utils.h"

// Прототипы функций
void addTask();
void removeTask();
void viewTasks();
void markComplete();

int main() {
    while (true) {
        std::cout << "\n=== Менеджер задач ===\n"
        << "1. Добавить задачу\n"
        << "2. Удалить задачу\n"
        << "3. Просмотреть задачи\n"
        << "4. Отметить задачу как выполненную\n"
        << "5. Выход\n"
        << "7. Еще одна функция\n"
        << "Выберите операцию: ";
        int choice;
        std::cin >> choice;

        if (std::cin.fail()) {
            clearInputBuffer(); // Очистка буфера при ошибке
            std::cout << "Ошибка ввода! Попробуйте снова.\n";
            continue;
        }

        if (choice == 5) break;

        switch (choice) {
            case 1: addTask(); break;
            case 2: removeTask(); break;
            case 3: viewTasks(); break;
            case 4: markComplete(); break;
            default: std::cout << "Неверный выбор!\n";
        }
    }

    return 0;
}
