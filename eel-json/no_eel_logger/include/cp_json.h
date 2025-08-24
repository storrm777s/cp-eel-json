//storrm777s@gmail.com

#ifndef CP_JSON_H
#define CP_JSON_H
#include <string>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

json JSON_GetRawFromFile(const std::string& filename);
json JSON_GetObjFromFile(const std::string& filename, const std::string& expected);
json JSON_GetObjFromRaw(const json& data, const std::string& expected);

#endif