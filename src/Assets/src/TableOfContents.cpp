/**
 * @file TableOfContents.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the Table of contents class
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <BookContents/TableOfContents.hpp>

TableOfContents::TableOfContents( Book* linkedBook )
{
    book = linkedBook;
}

void TableOfContents::print() const
{
    std::cout << "\nTable of contents\n";
}