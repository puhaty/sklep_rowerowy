#ifndef RECEIPT_H
#define RECEIPT_H
#include "basket.h"
#include "exception.h"

#include <fstream>
#include <time.h>

class Receipt
{
public:
    void generate(Basket &);
};
#endif /* RECEIPT_H */
