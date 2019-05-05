#include <iostream>
#include <string.h>
#include <iomanip>

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

    Patient(const Patient &illPerson)
    {
        strcpy(this->name, illPerson.name);
        strcpy(this->lastName, lastName);
        this->age = illPerson.age;
        this->height = illPerson.height;
        this->weigth = illPerson.weigth;
    }

    inline float BodyMassIndex()
    {
        return weigth / (height * height);
    }

    inline char display()
    {
        std::cout << name << std::setw(5) << lastName << std::setw(4) << " (Age: " << age << ", Height: " << height << ", Weigth: " << weigth << ")" << std::endl;
    }

    ~Patient()
    {
        std::cout << "Object of class Patient was destroyed" << std::endl;
    }
};

int main()
{
    Patient grandad("John", "Doe", 80, 1.6, 50.0);
    std::cout << grandad.age << std::endl;
    std::cout << grandad.height << std::endl;
    std::cout << grandad.weigth << std::endl;
    std::cout << grandad.BodyMassIndex() << std::endl;
    std::cout << grandad.display() << std::endl;

    return 0;
}