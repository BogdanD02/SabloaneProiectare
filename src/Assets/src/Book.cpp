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

void Book::createNewParagraph(std::string message)
{
    _paragraphs.push_back(message);
}

void Book::createNewImage(std::string path)
{
    _images.push_back(path);
}

void Book::createNewTable(std::string title)
{
    _tables.push_back(title);
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

    for(const std::string& paragraph : _paragraphs)
    {
        std::cout << paragraph << "\n\n";
    }

    for(const std::string& image : _images)
    {
        std::cout << image << "\n";
    }

    std::cout << "\n";

    for(const std::string& table : _tables)
    {
        std::cout << table << "\n";
    }
}