#include <QCoreApplication>
#include "bigint.h"
#include<iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    big_integer b("2");
    big_integer c("63");
    big_integer result;
    for (big_integer var = 1; var < 65; ++var) {
        result+=b.pow(b).pow(var);
     //  std::cout << "2**2**"<<var<<"="<< b.pow(b).pow(var)<<"\n";
    }
   // std::cout <<result;
    big_integer serno("453709822561251284617832809909024282");
    serno*=35;
    std::cout<<serno/big_integer("1000000000")*big_integer("2")/big_integer("1000000000")<<"\n";
    std::cout<<big_integer("1083").pow(big_integer("10").pow(big_integer("9")));
    return a.exec();
}
