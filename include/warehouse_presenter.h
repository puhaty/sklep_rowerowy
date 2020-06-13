#ifndef D51F8D12_9E9E_4188_9B4B_18B37ED3C007
#define D51F8D12_9E9E_4188_9B4B_18B37ED3C007

#include <iostream>
#include "warehouse.h"


class Warehouse_presenter : public Warehouse
{
public:
    void show_products();
    void show_product_information(long long unsigned int id); 
};

#endif /* D51F8D12_9E9E_4188_9B4B_18B37ED3C007 */
