#include "front_shock.h"

Front_shock::Front_shock(std::string name_, std::string steerer_tube_, std::string spring_type_, std::string oil_damper_, float price_, int weight_, int travel_, int series_code_)
{
    name = name_;
    steerer_tube = steerer_tube_;
    spring_type = spring_type_; 
    oil_damper = oil_damper_;
    price = price_;
    weight = weight_;
    travel = travel_;
    series_code = series_code_; 
}

void Front_shock::show()
{
    std::cout << std::setw(45) << std::left << name << std::setw(8) << std::right << weight << " [g]" << std::setw(10) << std::right << price << " [zl]"  <<std::endl;
}

void Front_shock::show_detailed_information()
{
    std::cout << std::setw(30) << std::left << "Produkt: " << name <<std::endl;
    std::cout << std::setw(30) << std::left << "rozmiar rury sterowej: " << steerer_tube <<std::endl;
    std::cout << std::setw(30) << std::left << "skok amortyzatora: " << travel <<std::endl;
    std::cout << std::setw(30) << std::left << "typ sprezyny: " << spring_type <<std::endl;
    std::cout << std::setw(30) << std::left << "tlumik olejowy: " << oil_damper <<std::endl;
    std::cout << std::setw(30) << std::left << "kod seryjny: " << series_code <<std::endl;
    std::cout << std::endl;
}

float Front_shock::get_price()
{ 
    return price;
} 

int Front_shock::get_weight()
{
    return weight;
}

int Front_shock::get_series_code() 
{ 
    return series_code;
}

std::string Front_shock::get_name()
{ 
    return name;
}