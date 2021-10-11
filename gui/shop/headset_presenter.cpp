#include "headset.h"

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