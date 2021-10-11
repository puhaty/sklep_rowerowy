#include "basket.h"

void Basket::show_product()
{
    for (long long unsigned int i = 0; i < basket_products_.size(); i++) 
    {
        std::cout << i+1 << ": ";
        basket_products_[i]->show();
    }
    std::cout << std::endl;
    sum_shopping();
    std::cout << "suma produktow w koszyku: " << total_sum << "zl" << std::endl << std::endl;
}  

void Basket::final() 
{
    std::cout << "zawartosc twojego koszyka: " << std::endl;
    show_product();
    sum_shopping(); 
    if(total_sum != 0)
    {
        std::cout << "calkowita kwota do zaplaty: " << total_sum << "zl" << std::endl; 
    }
    else
    {
        std::cout << "prosze dodac produkt do koszyka!!" << std::endl;
    }
}