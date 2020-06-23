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
    void show() override;
    void show_detailed_information() override;
    float get_price() override;
    int get_weight() override;
    int get_series_code() override;
    std::string get_name() override;
};

#endif /* HEADSET_H */