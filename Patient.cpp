#include <iostream>
#include <string.h>

class Patient
{
private:
    char name[20];
    char lastName[20];
    int age;
    float heigh;
    float wiegth;

public:
    int foodAmount;

    Patient()
    {
        strcpy(this->name, "");
        strcpy(this->lastName, "");
        this->age = 0;
        this->heigh = 0;
        this->wiegth = 0;
        this->foodAmount = rand() % 300 + 15;
    }

    Patient(char name[20], char lastName[20], int age, float height, float weigth)
    {
        strcpy(this->name, name);
        strcpy(this->lastName, lastName);
        this->age = age;
        this->heigh = 0;
        this->wiegth = 0;
        this->foodAmount = rand() % 300 + 15;
    }
};

int main()
{
    std::cout << "foodAmounttt" << std::endl;
    return 0;
}