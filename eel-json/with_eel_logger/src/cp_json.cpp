//storrm777s@gmail.com

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

// HEADERS
#include "cp_json.h"
#include "cp_eel.h"

json JSON_GetRawFromFile(const std::string& fname) {
    std::string filename = fname;
    if (filename.substr(filename.size() - 5) != ".json") {
        filename += ".json";
    }
    
    std::ifstream file(filename);
    if (!file.is_open()) {
        logeel("File could not be opened, or doesn't exist.");
        return nullptr;
    }

    json j;
    file >> j;

    return j;
}

json JSON_GetObjFromFile(const std::string& fname, const std::string& expected) {
    json data = JSON_GetRawFromFile(fname);
    if (!data.contains(expected)) {
        logeel("Could not find expected value in json.");
        return nullptr;
    }
    return data[expected];
}

json JSON_GetObjFromRaw(const json& data, const std::string& expected) {
    if (!data.contains(expected)) {
        logeel("Could not find expected value in json.");
        return nullptr;
    }
    return data[expected];
}


