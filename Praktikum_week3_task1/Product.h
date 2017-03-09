#pragma once
#include<iostream>
using namespace std;


enum ProductType
 {
    ProductTypeNone,
    Kozmetichen,
    Hranitelen,
    Metalen

 };
class Product{
private:

    int Prize;
    int Kg;
    int Date;
    int Month;
    int Year;
    ProductType eProductType;
public:
    //Product();
    Product(ProductType newType = ProductTypeNone ,int newPrize=10,int newKg=3,int newDate=12,int newMonth=6,int newYear = 17);

    int getPrize();
    void setPrize(int newPrize);

    int getKg();
    void setKg(int newKg);

    int getDate();
    void setDate(int newDate);

    int getMonth();
    void setMonth(int newMonth);

    int getYear();
    void setYear(int newYear);

    ProductType getProductType();
    void setProductType(ProductType newProductType );

};

