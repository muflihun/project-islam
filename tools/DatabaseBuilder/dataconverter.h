#ifndef DATACONVERTER_H
#define DATACONVERTER_H

#include <string>
#include <vector>

class DataConverter
{
public:
    DataConverter();
    
    void startConvert(const std::string& rukuhSajdahFile, 
                      const std::string& tableName, 
                      const std::string& dataFilename, 
                      const std::string& outputFilename);
private:
    std::vector<std::string> &split(const std::string &s, char delim, 
                                    std::vector<std::string> &elems);
    std::string convertLine(const std::string& line);
    std::string chapVerse(const std::string& line);
};

#endif // DATACONVERTER_H