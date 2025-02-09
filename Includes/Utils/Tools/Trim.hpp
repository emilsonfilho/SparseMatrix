#ifndef TRIM_HPP
#define TRIM_HPP

#include <algorithm>
#include <cctype>
#include <string>

/**
 * @brief Remove espaços em branco do início e do fim de uma string
 *
 * @param str String a ser tratada
 * @return std::string String tratada
 */
std::string trim(const std::string &str);

#endif