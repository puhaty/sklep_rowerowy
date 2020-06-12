#include "headset.h"

Headset::Headset(std::string name_, std::string type_, std::string steerer_tube_, std::string bearing_type_, float price_, int weight_, int series_code_)
{
    name = name_;
    type = type_;
    steerer_tube = steerer_tube_;
    bearing_type = bearing_type_;
    price = price_;
    weight = weight_; 
    series_code = series_code_; 
}

void Headset::show()
{
    std::cout << std::setw(45) << std::left << name << std::setw(8) << std::right << weight << " [g]" << std::setw(10) << std::right << price << " [zl]"  <<std::endl;
}

void Headset::show_detailed_information()
{
    std::cout << std::setw(30) << std::left << "Produkt: " << name <<std::endl;
    std::cout << std::setw(30) << std::left << "rozmiar rury sterowej: " << steerer_tube <<std::endl;
    std::cout << std::setw(30) << std::left << "typ sterow: " << type <<std::endl;
    std::cout << std::setw(30) << std::left << "typ lozyska: " << bearing_type <<std::endl;
    std::cout << std::setw(30) << std::left << "kod seryjny: " << series_code <<std::endl;
    std::cout << std::endl;
}

float Headset::get_price()
{  
    return price;
}

int Headset::get_weight()
{
    return weight;
}

int Headset::get_series_code()
{ 
    return series_code;
}

std::string Headset::get_name()
{ 
    return name;
} 