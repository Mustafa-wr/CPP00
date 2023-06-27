#ifndef T_HPP
#define T_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdlib.h>

class BitcoinExchange
{
public:
    BitcoinExchange(const std::string& csvFilePath);
    void calculateBitcoinValue(const std::string& inputFilePath);

private:
    std::map<std::string, float> bitcoinPrices;

    bool isValidDate(const std::string& date);
    bool isValidValue(const std::string& value);
    void parseCSV(const std::string& csvFilePath);
    float getBitcoinPrice(const std::string& date);
};

#endif
