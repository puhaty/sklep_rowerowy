#ifndef HEADSET_H
#define HEADSET_H
#include "product.h"

#include <iomanip>

class Headset :public Product
{
    std::string name, type, steerer_tube, bearing_type;
    float price;
    int weight, series_code;
public:
    Headset(std::string name_, std::string type_, std::string steerer_tube_,
            std::string bearing_type_, float price_, int weight_,  int series_code_);
    void show();
    void show_detailed_information();
    float get_price();
    int get_weight();
    int get_series_code();
    std::string get_name();
};

#endif /* HEADSET_H */