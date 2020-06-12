#include "receipt.h"

void Receipt::generate(Basket & basket) 
{
    std::ofstream file("paragon/paragon.txt");
    time_t czas;
    time( & czas );
    char * data = ctime( & czas );
    if(basket.get_total_sum() > 0)
    {
        file << "Data: " << data << std::endl;
        file << basket;
        file.close();
        std::cout << "paragon jest zapisany w folderze 'paragon' " << std::endl;
    }
    else
    {
        std::cout << "brak zawartosci koszyka!!!" << std::endl;
    }
    
} 