//storrm777s@gmail.com

#include <iostream>
#include <string>
#include "cp_eel.h"

#define logeel(opt) internal_logeel(__FILE__, __LINE__, opt)

void internal_logeel(const std::string& file, int line, const std::string& opt) {
    std::cout << "////////////////" << '\n';
    std::cout << "EEL LOG:" << '\n';
    std::cout << "FILE: " << file << '\n';
    std::cout << "LINE: " << line << '\n';
    std::cout << "OPT: " << opt << '\n';
    std::cout << "////////////////" << '\n';
}