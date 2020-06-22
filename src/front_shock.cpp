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