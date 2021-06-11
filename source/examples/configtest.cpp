#include "include/examples/configtest.hpp"
#include "include/common.hpp"
#include "include/config.hpp"
#include <iostream>

ConfigTest::ConfigTest()
{

}

//!Check system-config.json
void ConfigTest::readSettings() const noexcept
{
  std::cout << "Language : " << Config::GET["language"] << std::endl;
  std::cout << "Debug : "    << Config::GET["debug"] << std::endl;
  std::cout << "Project Code Name : " << Config::GET["system"]["codename"] << std::endl;
  std::cout << "Project Version : " << Config::GET["system"]["version"] << std::endl;
  std::cout << "Last Update : " << Config::GET["system"]["last_update"] << std::endl;
  std::cout << "Server Host : " << Config::GET["system"]["server_host"] << std::endl;
  std::cout << "Encoding : " << Config::GET["system"]["encoding"] << std::endl;
}