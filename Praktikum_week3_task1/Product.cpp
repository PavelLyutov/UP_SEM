#include "Product.h"

 Product::Product(ProductType newType  ,int newPrize,int newKg,int newDate,int newMonth,int newYear):
     eProductType(newType), Prize(newPrize), Kg(newKg), Date(newDate), Month(newMonth), Year(newYear)
     {
     }

int Product::getPrize()
{
    return Prize;
}
void Product::setPrize(int newPrize)
{
    Prize=newPrize;
}

int Product::getKg()
{
    return Kg;
}
void Product::setKg(int newKg)
{
    Prize=newKg;
}

int Product::getDate()
{
    return Date;
}
void Product::setDate(int newDate)
{
    Date=newDate;
}

int Product::getMonth()
{
    return Month;
}
void Product::setMonth(int newMonth)
{
    Month=newMonth;
}

ProductType Product::getProductType()
{
    return eProductType;
}

void Product::setProductType(ProductType newss)
{
    eProductType=newss;

}
