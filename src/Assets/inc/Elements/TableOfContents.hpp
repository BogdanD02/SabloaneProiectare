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
#include <iostream>
#include <Elements/Element.hpp>

class TableOfContents : public Element
{
public:
    /**
     * @brief Destructor
     * 
     */
    ~TableOfContents() = default;

    /**
     * @brief Constructor
     * 
     */
    TableOfContents() = default;

    // Block other forms of construction

    TableOfContents( const TableOfContents& ) = delete;
    TableOfContents* operator= ( const TableOfContents& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the table of contents
     * 
     */
    void print() const;

    void accept(Visitor& visitor);
};