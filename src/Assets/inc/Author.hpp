/**
 * @file Author.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the Author class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <string>
#include <iostream>

class Author
{
private:
    std::string name;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Author() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    Author( const std::string& );

    // Block other forms of construction

    Author() = delete;
    Author( const Author& ) = delete;
    Author* operator= ( const Author& ) = delete;

    // ----- METHODS -----

    void print() const;
};