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

    Patient(int ag2, float ht2, float wh2) : age(ag2), height(ht2), weigth(wh2) {}
};

int main()
{
    Patient somebody(20, 3.3, 4.4);
    std::cout << "foodAmount" << std::endl;
    std::cout << somebody.age << std::endl;
    std::cout << somebody.height << std::endl;
    std::cout << somebody.weigth << std::endl;

    return 0;
}