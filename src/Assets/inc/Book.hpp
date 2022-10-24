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
#include <BookContents/Chapter.hpp>
#include <BookContents/TableOfContents.hpp>
#include <Author.hpp>

class Book
{
private:
    std::string _title;
    std::vector <Chapter*> chapters;
    std::vector <Author*> authors;

    TableOfContents* tableOfContents;

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
     * @brief Creates a new empty chapter
     * 
     * @param name The name of the chapter
     * 
     * @return int 
     * @retval The index of the chapter
     */
    int createChapter( const std::string& );

    /**
     * @brief Gets a chapter
     * 
     * @param index The index of the chapter
     * 
     * @return Chapter* 
     * @retval NULL Invalid index
     */
    Chapter* getChapter( const unsigned& );

    /**
     * @brief Creates a new table of contents for this book
     * 
     */
    void AddTableOfContents();

    /**
     * @brief Returns the table of contents
     * 
     * @return TableOfContents* 
     */
    TableOfContents* getTableOfContents() const;

    /**
     * @brief Prints the book's content
     * 
     */
    void print() const;
};