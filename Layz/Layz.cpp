#include <iostream>
#include <random>
#include <Windows.h>

struct STUDENT
{
    std::string studentName;
    int groupNumb;
    float ses[5];

};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    const int size = 3;
    STUDENT stud1[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите имя " << i + 1 << " студента: \n";
        std::cin >> stud1[i].studentName;
        std::cout << "Введите номер группы " << i + 1 << " студента: \n";
        std::cin >> stud1[i].groupNumb;
        std::cout << "Введите оценки " << i + 1 << " студента: \n";
        for (int j = 0; j < 5; j++)
        {
            std::cout << "Введите " << j + 1 << " оценку\n";
            std::cin >> stud1[i].ses[j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Имя " << i + 1 << " студента: " << stud1[i].studentName << "\n";
        std::cout << "Номер группы " << i + 1 << " студента: " << stud1[i].groupNumb << "\n";
        std::cout << "Оценки " << i + 1 << " студента: \n";
        for (int j = 0; j < 5; j++)
        {
            std::cout << j + 1 << " оценка: " << stud1[i].ses[j] << "\n";
        }
    }
    float mark = 0, sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += stud1[i].ses[j];
        }
        mark = sum / 5;
        if (mark >= 4.0f)
        {
            std::cout << "Имя хорошего человека: " << stud1[i].studentName << ", Группа: " << stud1[i].groupNumb
                << ", Средняя оценка: " << mark << "\n";
        }
        else
        {
            std::cout << "Имя плохого человека: " << stud1[i].studentName << ", Группа: " << stud1[i].groupNumb
                << ", Средняя оценка: " << mark << "\n";
        }
        sum = 0;
    }
    STUDENT temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = stud1[i];
    }




    return 0;
}

