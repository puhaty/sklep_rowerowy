#include "warehouse.h"


Warehouse::Warehouse()
{
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: Rock Shox Reba", "1 1/8 - 1 1/5", "powietrzna", "tak", 1299, 1356, 140, 1376002));
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: Rock Shox Recon", "1 1/8 - 1 1/5", "powietrzna", "tak", 2299, 1430, 130, 1376002));
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: RS Suntour Raidon", "1 1/8 - 1 1/5", "powietrzna", "tak", 659, 1980, 120, 1375123));
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: RS Suntour XCT", "1 1/8", "sprezyna", "brak", 539, 2280, 110, 13712345));
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: RS Suntour XCR", "1 1/8", "sprezyna", "tak", 459, 2480, 100, 1275124));
    warehouse_products_.push_back(std::make_shared<Front_shock>("Amortyzator przedni: RS Suntour XCM", "1 1/8", "sprezyna", "brak", 259, 2980, 80, 1412434));
    warehouse_products_.push_back(std::make_shared<Headset>("Stery: Accent exe", "pol-zintegrowane", "1 1/8 - 1 1/5", "maszynowe", 99, 74, 5233454));
    warehouse_products_.push_back(std::make_shared<Headset>("Stery: Neco H-843", "pol-zintegrowane", "1 1/8", "kulkowe", 112, 16, 1234));
    warehouse_products_.push_back(std::make_shared<Headset>("Stery: Neco H-422", "pol-zintegrowane", "1 1/8 - 1 1/5", "maszynowe", 98, 65, 3243463));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 1.0", "MTB-> rekreacyjne", "Shimano Tourney", "stal", "RS Suntour XCT", "brak", "26", 2099, 14500, 2342353));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 2.0", "MTB-> rekreacyjne", "Shimano Altus", "aluminium", "RS Suntour XCM", "brak", "26", 2299, 14500, 3456353));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 3.0", "MTB-> rekreacyjne", "Shimano Acera", "aluminium", "RS Suntour XCM", "brak", "26", 2599, 14450, 3464566));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 4.0", "MTB-> XC/rekreacyjne", "Shimano Alivio", "aluminium", "RS Suntour XCR", "brak", "27,5", 2999, 14200, 2342353));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 5.0", "MTB-> XC", "Shimano Alivio/Deore", "aluminium", "RS Suntour XCR(powietrze)", "brak", "27,5", 3499, 14100, 2334566));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 6.0", "MTB-> XC", "Shimano Deore", "aluminium", "RS Suntour Raidon(powietrze)", "brak", "29", 3999, 12500, 4352353));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 7.0", "MTB-> XC", "Shimano Deore/SLX", "aluminium", "Rock Shox Recon(powietrze)", "brak", "29", 4499, 12370, 7565553));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 8.0", "MTB-> XC", "Shimano SLX", "aluminium", "Rock Shox Recon(powietrze)", "brak", "29", 4999, 12200, 2533553));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 9.0", "MTB-> XC/All-mountain", "Shimano Deore XT", "aluminium", "Rock Shox Reba(powietrze)", "brak", "29", 5999, 12200, 4566553));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 10.0", "MTB-> XC/All-mountain", "Shimano Deore/SLX", "Carbon", "Rock Shox Recon(powietrze)", "brak", "29", 5999, 11950, 2533553));
    warehouse_products_.push_back(std::make_shared<Bike>("Kross Level 15.0", "MTB-> XC-All-mountain", "Sram x01-Eagle", "aluminium", "Fox Float(powietrze)", "brak", "29", 15999, 9670, 25456457));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 100", "Road-> comfort", "Shimano Claris", "aluminium", "brak", "brak", "28", 2999, 9580,3452345));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 200", "Road-> comfort", "Shimano Sora/Claris", "aluminium", "brak", "brak", "28", 3899, 9240,13423565));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 300", "Road-> comfort", "Shimano Tiagra/Sora ", "aluminium", "brak", "brak", "28", 4499, 9070,1334565));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 400", "Road-> comfort", "Shimano 105", "aluminium", "brak", "brak", "28", 5499, 9110,8974445));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 4000", "Road-> race", "Shimano 105", "carbon", "brak", "brak", "28", 10299, 8460,9823745));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura 5000", "Road-> race", "Shimano Ultegra", "carbon", "brak", "brak", "28", 11399, 8470,1457545));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura DISC 5000", "Road-> race", "Shimano Ultegra", "carbon", "brak", "brak", "28", 12399, 8470,2923743));
    warehouse_products_.push_back(std::make_shared<Bike>("Merida Scultura DISC 8000", "Road-> race", "Shimano Ultegra Di-2", "carbon", "brak", "brak", "28", 29899, 7330,4984759));

}
Warehouse::~Warehouse()
{
    warehouse_products_.clear();
}

std::vector<std::shared_ptr<Product>> Warehouse::get_warehouse_products()
{
    return warehouse_products_;
}

void Warehouse::show_products()
{
    for (long long unsigned int i = 0; i < warehouse_products_.size(); i++)
    {
        std::cout << std::setw(3) << std::right << i+1 << ". ";
        warehouse_products_[i]->show();
    }
    std::cout << std::endl;
}

void Warehouse::show_product_information(long long unsigned int id)
{
    if(id > warehouse_products_.size() || id < 1)
    {
        std::cout << "nieprawidlowa wartosc indeksu!!" << std::endl;
    }
    else
    {
        warehouse_products_[id-1]->show_detailed_information();
    }
    
     
}

void Warehouse::sort_by_name_asc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_name() < x2->get_name();});
}

void Warehouse::sort_by_name_desc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_name() > x2->get_name();});
}

void Warehouse::sort_by_price_asc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_price() < x2->get_price();});
}

void Warehouse::sort_by_price_desc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_price() > x2->get_price();});
}

void Warehouse::sort_by_weight_asc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_weight() < x2->get_weight();});
}

void Warehouse::sort_by_weight_desc()
{
    sort(warehouse_products_.begin(), warehouse_products_.end(),[](std::shared_ptr<Product> x1, std::shared_ptr<Product> x2){return x1->get_weight() > x2->get_weight();});
}




