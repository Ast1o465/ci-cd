#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <vector>

namespace string_utils {
    std::string to_upper(const std::string& s);
    std::vector<std::string> split(const std::string& s, char delimiter);
}

#endif // STRING_UTILS_H
