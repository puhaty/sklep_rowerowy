#include "bike.h"

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