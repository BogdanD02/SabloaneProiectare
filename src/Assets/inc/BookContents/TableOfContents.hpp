/**
 * @file TableOfContents.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the TableOfContents class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <string>
#include <Book.hpp>

class TableOfContents
{
private:
    const Book* book;

public:
    /**
     * @brief Destructor
     * 
     */
    ~TableOfContents() = default;

    /**
     * @brief Constructor
     * 
     * @param book The book containing the table of contents
     */
    TableOfContents( const Book* );

    // Block other forms of construction

    TableOfContents() = delete;
    TableOfContents( const TableOfContents& ) = delete;
    TableOfContents* operator= ( const TableOfContents& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the table of contents
     * 
     */
    void print();
};