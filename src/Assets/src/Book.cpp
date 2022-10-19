/**
 * @file Book.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the book class
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Book.hpp>

Book::Book(std::string title)
{
    _title = title;
}

void Book::printUnderlined(std::string message)
{
    std::cout << message << "\n";

    for(unsigned counter = 0; counter < message.length() + 3; counter++)
    {
        std::cout << "=";
    }
    std::cout << "\n";
}

void Book::print()
{
    printUnderlined(_title);

    std::cout << "\n";
}