#include <iostream>
#include <string.h>

class Patient
{
public:
    char name[20];
    char lastName[20];
    int age;
    float height;
    float weigth;

    Patient()
    {
        strcpy(this->name, "");
        strcpy(this->lastName, "");
        this->age = 0;
        this->height = 0;
        this->weigth = 0;
    }

    Patient(char name[20], char lastName[20], int age, float height, float weigth)
    {
        strcpy(this->name, name);
        strcpy(this->lastName, lastName);
        this->age = age;
        this->height = height;
        this->weigth = weigth;
    }
    Patient(char name[20], char lastName[20], int age)
    {
        strcpy(this->name, name);
        strcpy(this->lastName, lastName);
        this->age = age;
        this->height = 0;
        this->weigth = 0;
    }
};

int main()
{
    Patient somebody("Iv", "Kiel", 20);
    std::cout << "foodAmount" << std::endl;
    std::cout << somebody.age << std::endl;
    std::cout << somebody.height << std::endl;
    std::cout << somebody.weigth << std::endl;

    return 0;
}