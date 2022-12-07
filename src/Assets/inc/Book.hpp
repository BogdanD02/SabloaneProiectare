/**
 * @file Book.hpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the Book class
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <string>
#include <vector>
#include <iostream>
#include <BookContents/Section.hpp>
#include <Elements/TableOfContents.hpp>
#include <Author.hpp>

class Book : public Section
{
private:
    std::string _title;
    std::vector <Author*> authors;

    void printUnderlined(std::string message) const;

public:
    /**
     * @brief Constructor
     * 
     * @param title The book's title
     */
    Book(std::string title);

    /**
     * @brief Adds a new Author to the book
     * 
     */
    void addAuthor( Author*& );

    /**
     * @brief Prints the book's content
     * 
     */
    void print() const;

    void accept(Visitor& visitor);
};