#ifndef BIKE_H
#define BIKE_H
#include "product.h"

#include <iomanip>

class Bike :public Product
{
    std::string name, type, equipment_group, frame, front_shock, rear_shock, circle_size;
    float price;
    int weight, series_code;
public:
    Bike(std::string name_, std::string type_, std::string equipment_group_, std::string frame_, std::string front_shock_,
                std::string rear_shock_, std::string circle_size_, float price_, int weight_, int series_code_);
    void show() override;
    void show_detailed_information() override;
    float get_price() override;
    int get_weight() override;
    int get_series_code() override;
    std::string get_name() override;
};
#endif /* BIKE_H */