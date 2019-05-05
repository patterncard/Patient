#include <iostream>
#include <string.h>

class Patient
{
public: //should be private
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

    Patient(const Patient &illPerson)
    {
        strcpy(this->name, illPerson.name);
        strcpy(this->lastName, lastName);
        this->age = illPerson.age;
        this->height = illPerson.height;
        this->weigth = illPerson.weigth;
    }
};

int main()
{
    std::cout << "Object:" << std::endl;
    Patient grandma("Iv", "Kiel", 80, 3.3, 6.6);
    std::cout << grandma.age << std::endl;
    std::cout << grandma.height << std::endl;
    std::cout << grandma.weigth << std::endl;

    std::cout << "Object:" << std::endl;
    Patient illPerson = grandma;
    std::cout << grandma.age << std::endl;
    std::cout << grandma.height << std::endl;
    std::cout << grandma.weigth << std::endl;

    return 0;
}