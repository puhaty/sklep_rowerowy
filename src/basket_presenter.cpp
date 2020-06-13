#include "basket_presenter.h"

void Basket_presenter::show_product(Basket& basket_)
{
    for (long long unsigned int i = 0; i < basket_.get_basket_products().size(); i++) 
    {
        std::cout << i+1 << ": ";
        basket_.get_basket_products().at(i)->show();
    }
    std::cout << std::endl;
    basket_.sum_shopping();
    std::cout << "suma produktow w koszyku: " << basket_.get_total_sum() << "zl" << std::endl << std::endl;
}  

void Basket_presenter::final(Basket& basket_) 
{
    std::cout << "zawartosc twojego koszyka: " << std::endl;
    show_product(basket_);
    basket_.sum_shopping(); 
    if(basket_.get_total_sum() != 0)
    {
        std::cout << "calkowita kwota do zaplaty: " << basket_.get_total_sum() << "zl" << std::endl; 
    }
    else
    {
        std::cout << "prosze dodac produkt do koszyka!!" << std::endl;
    }
}