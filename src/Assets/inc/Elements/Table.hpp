/**
 * @file Table.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the Table class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <ChapterContents/Element.hpp>

class Table : public Element
{
private:
    std::string name;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Table() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    Table( const std::string& );

    // Block other forms of construction

    Table() = delete;
    Table( const Table& ) = delete;
    Table* operator= ( const Table& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the table
     * 
     */
    void print() const;
};