g++ -Iinclude -Wall src\*.cpp *.cpp -o main.exe

An easier way to grab values from JSON files, as well as grabbing the raw json data from the file.

HEADERS:  
```
// Gives you the json data within the file, filename may be johndoe or johndoe.json, does not matter
json JSON_GetRawFromFile(const std::string& filename);
// Gives you the value from a key within a file
json JSON_GetObjFromFile(const std::string& filename, const std::string& expected);
// Gives you the value from a key within the raw data, best if you retrieve the raw data using JSON_GetRawFromFile and save it as a variable first
json JSON_GetObjFromRaw(const json& data, const std::string& expected);
```


main.cpp provided as a usage example.
