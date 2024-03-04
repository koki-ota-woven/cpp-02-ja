// コードを入力してください

#include "./logger.hpp"
#include <iostream>
#include <string>

Logger::Logger() {}

void Logger::logMessage(std::string message) const {
    std::cout << message << std::endl;
}
