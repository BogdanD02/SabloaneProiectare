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

Book::Book(std::string title) : Section(title)
{
    _title = title;
}

void Book::printUnderlined(std::string message) const
{
    std::cout << message << "\n";

    for(unsigned counter = 0; counter < message.length() + 3; counter++)
    {
        std::cout << "=";
    }
    std::cout << "\n";
}

void Book::addAuthor( Author*& author )
{
    authors.push_back(author);
}

void Book::accept(Visitor& visitor)
{
    visitor.visitBook(*this);

    Section::accept(visitor);
}

void Book::print() const
{
    printUnderlined(_title);
    std::cout << "\nAuthors: ";

    for(auto iter = authors.begin(); iter < authors.end(); iter++)
    {
        (*iter)->print();

        if(iter + 1 != authors.end())
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n\n";

    Section::print();
}