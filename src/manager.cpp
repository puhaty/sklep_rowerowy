#include "manager.h"


int Manager::manage()
{
    int option = 0;
    long long unsigned int number = 0;
    std::cout << std::endl;
    std::cout << "Dzien dobry, witamy w sklepie BAJKSZOP, zyczymy udanych zakupow :)" << std::endl;
    std::cout << std::endl << "instrukcja obslugi sklepu:" <<std::endl;
    std::cout << "0: wyjscie ze sklepu" <<std::endl;
    std::cout << "1: wyswietl liste dostepnych produktow" <<std::endl;
    std::cout << "2: szczegolowe informacje na temat produktu" <<std::endl;
    std::cout << "3: dodaj element o danym indeksie do koszyka" <<std::endl;
    std::cout << "4: usun element o danym indeksie z koszyka" <<std::endl;
    std::cout << "5: usun wszystkie produkty z koszyka" <<std::endl;
    std::cout << "6: pokaz zawartosc koszyka" <<std::endl;
    std::cout << "7: sfinalizuj zamowienie" <<std::endl;
    std::cout << "8: sortuj dostepne produkty" <<std::endl << std::endl;
    std::cout << "dane na temat produktow sa wyswietlane w nastepujacej kolejnosci: " << std::endl;
    std::cout << "Index:, nazwa:, waga[g]:, cena[zl]:  " << std::endl;
    std::cout << std::endl;
    
    
    Warehouse warehouse_;
    Warehouse_presenter Warehouse_presenter_;
    //warehouse.add_products("produkty/produkty.txt");
    Basket basket_; 
    Receipt receipt_;

    for(;;)
    { 
        std::cout <<"podaj opcje: ";
        std::cin >> option;
        while( std::cin.fail() )
        {
            std::cin.clear();
            std::cin.ignore( 1000, '\n' );
            std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
            std::cout << "Wprowadz dane jeszcze raz: ";
            std::cin >> option;
        }
        while(getchar()!='\n');

        switch(option)
        {
            case 0 :
                std::cout << std::endl  << "Do widzenia, ZYCZYMY MILEGO DNIA I ZAPRASZAMY PONOWNIE" << std::endl;
                return 0; 

            case 1 :
                Warehouse_presenter_.show_products();
                break; 

            case 2 :
                std::cout << "podaj nr produktu: ";
                std::cin >> number;
                std::cout << std::endl;
                while( std::cin.fail() )
                {
                    std::cin.clear();
                    std::cin.ignore( 1000, '\n' );
                    std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                    std::cout << "Wprowadz dane jeszcze raz: ";
                    std::cin >> number;
                }
                Warehouse_presenter_.show_product_information(number);
                break;
            
            case 3 :
                std::cout << "podaj nr produktu: ";
                std::cin >> number;
                std::cout << std::endl;
                while( std::cin.fail() )
                {
                    std::cin.clear();
                    std::cin.ignore( 1000, '\n' );
                    std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                    std::cout << "Wprowadz dane jeszcze raz: ";
                    std::cin >> number;
                }
                basket_.add_to_basket(number, warehouse_);
                break;
            
            case 4 :
                std::cout << "podaj nr produktu: ";
                std::cin >> number;
                std::cout << std::endl;
                while( std::cin.fail() )
                {
                    std::cin.clear();
                    std::cin.ignore( 1000, '\n' );
                    std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                    std::cout << "Wprowadz dane jeszcze raz: ";
                    std::cin >> number;
                }
                basket_.delete_from_basket(number);
                break;

            case 5 :
                basket_.clear_basket();
                std::cout << "produkty zostaly usuniete :)" << std::endl;
                break;

            case 6 :
                basket_.show_product();
                break;

            case 7 :
                basket_.final();
                receipt_.generate(basket_);
                basket_.clear_basket();
                std::cout << std::endl;
                break;

            case 8 :
                std::cout << std::endl;
                std::cout << "1: sortuj wg. nazwy" << std::endl;
                std::cout << "2: sortuj wg. ceny" << std::endl;
                std::cout << "3: sortuj wg. wagi" << std::endl;
                std::cout << "0: powrot" << std::endl << std::endl;
                std::cout << "wybierz opcje sortowania: ";
                std::cin >> option;
                while( std::cin.fail() )
                {
                    std::cin.clear();
                    std::cin.ignore( 1000, '\n' );
                    std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                    std::cout << "Wprowadz dane jeszcze raz: ";
                    std::cin >> option;
                }
                std::cout << std::endl;

                switch(option)
                {
                    case 0 :
                        break;

                    case 1 :
                        std::cout << "1: rosnaco" << std::endl;
                        std::cout << "2: malejaco" << std::endl;
                        std::cout << "0: powrot" << std::endl << std::endl;
                        std::cout << "wybierz rodzaj sortowania: ";
                        std::cin >> option;
                        while( std::cin.fail() )
                        {
                            std::cin.clear();
                            std::cin.ignore( 1000, '\n' );
                            std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                            std::cout << "Wprowadz dane jeszcze raz: ";
                            std::cin >> option;
                        }
                        std::cout << std::endl;
                        switch(option)
                        {
                            case 0 :
                                break;

                            case 1 :
                                warehouse_.sort_by_name_asc();
                                break;
                                
                            case 2 :
                                warehouse_.sort_by_name_desc();
                                break;

                            default: std::cout << "niepoprawna opcja" << std::endl;
                        }
                        break;

                    case 2 :
                        std::cout << "1: rosnaco" << std::endl;
                        std::cout << "2: malejaco" << std::endl;
                        std::cout << "0: powrot" << std::endl << std::endl;
                        std::cout << "wybierz rodzaj sortowania: ";
                        std::cin >> option;
                        while( std::cin.fail() )
                        {
                            std::cin.clear();
                            std::cin.ignore( 1000, '\n' );
                            std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                            std::cout << "Wprowadz dane jeszcze raz: ";
                            std::cin >> option;
                        }
                        std::cout << std::endl;
                        switch(option)
                        {
                            case 0 :
                                break;

                            case 1 :
                                warehouse_.sort_by_price_asc();
                                break;
                                
                            case 2 :
                                warehouse_.sort_by_price_desc();
                                break;

                            default: std::cout << "niepoprawna opcja" << std::endl;
                        }
                        break;

                    case 3 :
                        std::cout << "1: rosnaco" << std::endl;
                        std::cout << "2: malejaco" << std::endl;
                        std::cout << "0: powrot" << std::endl << std::endl;
                        std::cout << "wybierz rodzaj sortowania: ";
                        std::cin >> option;
                        while( std::cin.fail() )
                        {
                            std::cin.clear();
                            std::cin.ignore( 1000, '\n' );
                            std::cout << "Wprowadzono niepoprawne dane!!" << std::endl;
                            std::cout << "Wprowadz dane jeszcze raz: ";
                            std::cin >> option;
                        }
                        std::cout << std::endl;
                        switch(option)
                        {
                            case 0 :
                                break;

                            case 1 :
                                warehouse_.sort_by_weight_asc();
                                break;
                                
                            case 2 :
                                warehouse_.sort_by_weight_desc();
                                break;

                            default: std::cout << "niepoprawna opcja" << std::endl;
                                
                        }
                        break;

                    default: std::cout << "niepoprawna opcja" << std::endl;

                }
                break;
            
            default: std::cout << "niepoprawna opcja" << std::endl;  
        }
    }
}