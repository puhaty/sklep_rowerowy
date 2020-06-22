#include "warehouse.h"

Warehouse::~Warehouse()
{
    warehouse_products_.clear();
}

void Warehouse::add_products(std::string filename)
{
    std::string line, type, name, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8;
    float prize = 0;
    int weight = 0, series_code = 0, travel = 0;
    std::fstream file;
    file.open(filename, std::ios::in);
    if(file.good() == false)
    {
        throw File_exception();
        exit(0);
    }

    while (getline(file, line, ';'))         
    {
        if (line == "stery")
        {
            getline(file, name, ',');     
            getline(file, type, ',');      
            getline(file, temp1, ',');      
            getline(file, temp2, ',');    
            getline(file, temp3, ','); 
            prize = atof(temp3.c_str());     
            getline(file, temp4, ',');
            weight = atoi(temp4.c_str());               
            getline(file, temp5);
            series_code = atoi(temp5.c_str());         
            warehouse_products_.push_back(std::make_shared<Headset>(name, type, temp1, temp2, prize, weight, series_code)); 
        }
    
        if (line == "amortyzator")
        {
            getline(file, name, ',');       
            getline(file, temp1, ',');  
            getline(file, temp2, ',');      
            getline(file, temp3, ',');       
            getline(file, temp4, ','); 
            prize = atof(temp4.c_str());      
            getline(file, temp5, ',');
            weight = atoi(temp5.c_str());   
            getline(file, temp6, ',');
            travel = atoi(temp6.c_str());          
            getline(file, temp7);
            series_code = atoi(temp7.c_str()); 
            warehouse_products_.push_back(std::make_shared<Front_shock>(name, temp1, temp2, temp3, prize, weight, travel, series_code));    
        }

        if (line == "rower")
        {
            getline(file, name, ',');      
            getline(file, type, ',');      
            getline(file, temp1, ',');    
            getline(file, temp2, ','); 
            getline(file, temp3, ',');      
            getline(file, temp4, ','); 
            getline(file, temp5, ','); 
            getline(file, temp6, ','); 
            prize = atof(temp6.c_str());    
            getline(file, temp7, ',');
            weight = atoi(temp7.c_str());           
            getline(file, temp8);
            series_code = atoi(temp8.c_str());  
            warehouse_products_.push_back(std::make_shared<Bike>(name, type, temp1, temp2, temp3, temp4, temp5, prize, weight, series_code));    
        }
    }
    file.close();
}

std::vector<std::shared_ptr<Product>> Warehouse::get_warehouse_products()
{
    return warehouse_products_;
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




