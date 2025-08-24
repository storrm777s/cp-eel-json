//storrm777s@gmail.com

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

// HEADERS
#include "cp_json.h"

json JSON_GetRawFromFile(const std::string& fname) {
    std::string filename = fname;
    if (filename.substr(filename.size() - 5) != ".json") {
        filename += ".json";
    }
    
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Returning NULL, file could not be opened." << '\n';
        return nullptr;
    }

    json j;
    file >> j;

    return j;
}

json JSON_GetObjFromFile(const std::string& fname, const std::string& expected) {
    json data = JSON_GetRawFromFile(fname);
    if (!data.contains(expected)) {
        std::cout << "Returning NULL, expected key not within file." << '\n';
        return nullptr;
    }
    return data[expected];
}

json JSON_GetObjFromRaw(const json& data, const std::string& expected) {
    if (!data.contains(expected)) {
        std::cout << "Returning NULL, expected key not within data." << '\n';
        return nullptr;
    }
    return data[expected];
}


