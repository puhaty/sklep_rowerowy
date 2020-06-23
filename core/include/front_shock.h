#ifndef FRONT_SHOCK_H
#define FRONT_SHOCK_H
#include "product.h"

#include <iomanip>


class Front_shock :public Product
{
    std::string name, steerer_tube, spring_type, oil_damper;
    float price;
    int weight, travel, series_code;
public:
    Front_shock(std::string name_, std::string steerer_tube_, std::string spring_type_,
                std::string oil_damper_,  float price_, int weight_, int travel_, int series_code_);
    void show() override;
    void show_detailed_information() override;
    float get_price() override;
    int get_weight() override;
    int get_series_code() override;
    std::string get_name() override;
};
#endif /* FRONT_SHOCK_H */