/**
 * @file Table.cpp
 * @author David Bogdan
 * @brief Implementation of the Table class
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Elements/Table.hpp>

Table::Table(const std::string& tableName)
{
    this->name = tableName;
}

void Table::print() const
{
    std::cout << "Table : " << name << "\n";
}