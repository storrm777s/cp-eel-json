//storrm777s@gmail.com

#ifndef CP_EEL_H
#define CP_EEL_H

#include <string>

void internal_logeel(const std::string& file, int line, const std::string& opt);
#define logeel(opt) internal_logeel(__FILE__, __LINE__, opt)

#endif