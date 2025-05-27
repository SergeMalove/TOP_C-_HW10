#include <iostream>

// Посмотрите в этом плейлисте
// https ://www.youtube.com/playlist?list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r уроки 72 - 79.
// Напишите какой - нибудь свой простенький класс.

class SmartPhone
{
    std::string brand;
    std::string model;
    double screenSize;
    int weight;
    bool isAvalibleForOrder;

public:
    SmartPhone()
    {
        brand = "No brand";
        model = "Unknown model";
        screenSize = 0;
        weight = 0;
        isAvalibleForOrder = false;
    }

    SmartPhone(const std::string& brand, const std::string& model, double screenSize, int weight, bool isAvalibleForOrder)
        : brand(brand), model(model), screenSize(screenSize), weight(weight), isAvalibleForOrder(isAvalibleForOrder)
    {
    }

    void setBrand(std::string s_brand)
    {
        brand = s_brand;
    }

    void setModel(std::string s_model)
    {
        model = s_model;
    }

    void setScreenSize(double s_screenSize)
    {
        screenSize = s_screenSize;
    }

    void setWeight(int s_weight)
    {
        weight = s_weight;
    }

    void setIsAvaliableForOrder(bool s_isAvaliableForOrder)
    {
        isAvalibleForOrder = s_isAvaliableForOrder;
    }

    std::string getBrand()
    {
        return brand;
    }

    std::string getModel()
    {
        return model;
    }

    double getScreenSize()
    {
        return screenSize;
    }

    int getWeight()
    {
        return weight;
    }

    bool getIsAvaliableForOrder()
    {
        return isAvalibleForOrder;
    }
};

void printSmartPhone(SmartPhone smartPhone)
{
    std::cout << smartPhone.getBrand() << std::endl;
    std::cout << smartPhone.getModel() << std::endl;
    std::cout << smartPhone.getScreenSize() << std::endl;
    std::cout << smartPhone.getWeight() << std::endl;
    std::cout << smartPhone.getIsAvaliableForOrder() << std::endl;
}

int main()
{
    SmartPhone smartPhone1; // Создание объекта с конструктором по умолчанию

    SmartPhone smartPhone2("SmartPhone2", "Model1", 5.5, 103, true); // Создание объекта с конструктором

    std::cout << "First object\n" << std::endl;
    printSmartPhone(smartPhone1);

    std::cout << "\nSecond object\n" << std::endl;
    printSmartPhone(smartPhone2);

    smartPhone1.setBrand("SmartPhone1");
    smartPhone1.setModel("Model1");
    smartPhone1.setScreenSize(6.3);
    smartPhone1.setWeight(145);
    smartPhone1.setIsAvaliableForOrder(true);

    std::cout << "\nFirst object after setting\n" << std::endl;
    printSmartPhone(smartPhone1);
}