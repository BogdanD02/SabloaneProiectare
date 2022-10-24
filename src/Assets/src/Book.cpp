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

int Book::createChapter( const std::string& name )
{
    chapters.push_back( new Chapter(name) );

    return chapters.size() - 1;
}

Chapter* Book::getChapter( const unsigned& index )
{
    if(index < chapters.size())
        return chapters.at(index);

    return nullptr;
}

void Book::AddTableOfContents()
{
    tableOfContents = new TableOfContents(this);
}

TableOfContents* Book::getTableOfContents() const
{
    return tableOfContents;
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

    for(const Chapter* const chapter : chapters)
    {
        chapter->print();
    }
}