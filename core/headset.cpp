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