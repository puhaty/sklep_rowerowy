#ifndef B57CF7E9_FE8C_4526_BF26_210B0070BA75
#define B57CF7E9_FE8C_4526_BF26_210B0070BA75
#include <exception>

class exception
{
public:
    virtual void what() = 0;
};

class File_exception : public exception
{
public:
    void what() override
    {
        std::cout << "blad otwarcia pliku!!" << std::endl;
    }
};

class Receipt_exception : public exception
{
public:
    void what() override
    {
        std::cout << "brak zawartosci koszyka!!!" << std::endl;
    }
};

class Basket_exception : public exception
{
public:
    void what() override
    {
        std::cout << "brak zawartosci koszyka!!!" << std::endl;
    }
};
#endif /* B57CF7E9_FE8C_4526_BF26_210B0070BA75 */
