#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
	{
        std::cout << "usage: replace <file> s1 s2" << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile)
	{
        std::cout << "Error: " << argv[1] << " not found." << std::endl;
        return 1;
    }

    std::string search = argv[2];
    std::string replace = argv[3];
    std::string line;
	std::string output;

    while (std::getline(infile, line))
	{
        ssize_t pos = 0;
        while ((pos = line.find(search, pos)) != -1)
		{
            output += line.substr(0, pos) + replace;
            pos += search.length();
            line = line.substr(pos);
            pos = 0;
        }
        output += line + '\n';
    }

    infile.close();

    std::ofstream outfile((std::string(argv[1]) + ".replace"));
    if (!outfile)
	{
        std::cout << "Error: could not open output file." << std::endl;
        return 1;
    }

    outfile << output;

    outfile.close();

    return 0;
}