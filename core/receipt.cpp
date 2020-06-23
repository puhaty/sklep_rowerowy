#include "receipt.h"

void Receipt::generate(Basket & basket) 
{
    std::fstream file;
    file.open("paragon/paragon.txt", std::ios::out);
    time_t czas;
    time(&czas);
    char* data = ctime(&czas);
    if(basket.get_total_sum() > 0)
    {
        file << "Data: " << data << std::endl;
        file << basket;
        file.close();
    }
    else
    {
        throw Receipt_exception();
    }
    
} 