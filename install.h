#ifndef INSTALL_H
#define INSTALL_H
#include "md5.h"
#include <string>
#include <iostream>
#include <fstream>
std::string checkHash();
std::string openFile(std::string filename);
std::string GetHash(std::string content);
std::string Exists(std::string package);
#endif // INSTALL_H
