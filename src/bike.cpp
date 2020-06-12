#include "bike.h"

Bike::Bike(std::string name_, std::string type_, std::string equipment_group_, std::string frame_, std::string front_shock_,
                std::string rear_shock_, std::string circle_size_, float price_, int weight_, int series_code_)
{
    name = name_;
    type = type_;
    equipment_group = equipment_group_;
    frame = frame_;
    front_shock = front_shock_;
    rear_shock = rear_shock_;
    circle_size = circle_size_;
    price = price_;
    weight = weight_;
    series_code = series_code_; 
}

void Bike::show()
{
    std::cout << std::setw(45) << std::left << name << std::setw(8) << std::right << weight << " [g]" << std::setw(10) << std::right << price << " [zl]"  <<std::endl;
}

void Bike::show_detailed_information()
{
    std::cout << std::setw(30) << std::left << "Produkt: " << name << std::endl;
    std::cout << std::setw(30) << std::left << "typ: " << type << std::endl;
    std::cout << std::setw(30) << std::left << "grupa osprzetu: " << equipment_group << std::endl;
    std::cout << std::setw(30) << std::left << "material Ramy: " << frame << std::endl;
    std::cout << std::setw(30) << std::left << "przedni amortyzator: " << front_shock << std::endl;
    std::cout << std::setw(30) << std::left << "tylny amortyzator: " << rear_shock << std::endl;
    std::cout << std::setw(30) << std::left << "rozmiar kol: " << circle_size << " cali" << std::endl;
    std::cout << std::setw(30) << std::left << "kod seryjny: " << series_code << std::endl;
    std::cout << std::endl;
}

float Bike::get_price()
{ 
    return price;
} 

int Bike::get_weight()
{
    return weight;
}

int Bike::get_series_code() 
{ 
    return series_code;
}

std::string Bike::get_name()
{ 
    return name;
}
