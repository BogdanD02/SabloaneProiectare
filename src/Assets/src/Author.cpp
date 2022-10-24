/**
 * @file Author.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the Author class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Author.hpp>

Author::Author( const std::string& authorName)
{
    this->name = authorName;
}

void Author::print() const
{
    std::cout << name;
}