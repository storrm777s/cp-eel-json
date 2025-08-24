#include <iostream>
#include <string>

// HEADERS
#include "cp_json.h"

using json = nlohmann::json;

// EXAMPLE
int main() {
    // Your JSON file name
    // Including a .json is optional, the filename is adjusted to work regardless
    std::string filename = "johndoe";
    
    // Retrieves the raw json data from the file
    json data = JSON_GetRawFromFile(filename);

    // Print every key and value
    std::cout << data.dump(6) << '\n';

    // data has previously been defined as the raw json data from the file
    json net = JSON_GetObjFromRaw(data, "profile");
    // Net is now the raw data of johndoe/profile
    // Expands to johndoe/profile/bio and johndoe/profile/experience_years
    json net2 = JSON_GetObjFromRaw(net, "bio");
    // Net2 is now the raw data of johndoe/profile/bio

    // Let's print the items we've retrieved
    std::cout << net << '\n';
    std::cout << net2 << '\n';
    return 0;
}