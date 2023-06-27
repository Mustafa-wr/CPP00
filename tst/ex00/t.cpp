#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& csvFilePath)
{
    parseCSV(csvFilePath);
}

void BitcoinExchange::calculateBitcoinValue(const std::string& inputFilePath)
{
    std::ifstream inputFile(inputFilePath.c_str());
    if (!inputFile)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string value;

        if (std::getline(iss, date, '|') && std::getline(iss, value))
        {
            if (isValidDate(date) && isValidValue(value))
            {
                float bitcoinPrice = getBitcoinPrice(date);
                if (bitcoinPrice > 0)
                {
                    float inputValue = std::atof(value.c_str());
                    float bitcoinValue = inputValue * bitcoinPrice;
                    std::cout << date << " => " << value << " = " << bitcoinValue << std::endl;
                }
                else
                {
                    std::cerr << "Error: no bitcoin price available for date " << date << std::endl;
                }
            }
            else
            {
                std::cerr << "Error: bad input => " << line << std::endl;
            }
        }
    }
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
    // Simple check for date format
    return (date.size() == 10 && date[4] == '-' && date[7] == '-');
}

bool BitcoinExchange::isValidValue(const std::string& value)
{
    // Check if value is a positive float or integer
    std::istringstream iss(value);
    float floatValue;
    return (iss >> floatValue && floatValue >= 0 && floatValue <= 1000);
}

void BitcoinExchange::parseCSV(const std::string& csvFilePath)
{
    std::ifstream csvFile(csvFilePath.c_str());
    if (!csvFile)
    {
        std::cerr << "Error: could not open CSV file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(csvFile, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string price;

        if (std::getline(iss, date, ',') && std::getline(iss, price))
        {
            bitcoinPrices[date] = std::atof(price.c_str());
        }
    }

    csvFile.close();
}

float BitcoinExchange::getBitcoinPrice(const std::string& date)
{
    std::map<std::string, float>::const_iterator it = bitcoinPrices.lower_bound(date);
    if (it == bitcoinPrices.end())
    {
        if (bitcoinPrices.empty())
        {
            return 0;
        }
        else
        {
            // Use the closest date available
            it = --bitcoinPrices.end();
        }
    }

    return it->second;
}

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 1;
    }

    std::string inputFilePath(argv[1]);

    BitcoinExchange bitcoinExchange("data.csv");
    bitcoinExchange.calculateBitcoinValue(inputFilePath);

    return 0;
}
