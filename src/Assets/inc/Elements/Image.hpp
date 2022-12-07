/**
 * @file Image.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the Image class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <Elements/Element.hpp>
#include <iostream>
#include <string>

class Image : public Element
{
private:
    std::string name;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Image() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    Image( const std::string& );

    // Block other forms of construction

    Image() = delete;
    Image( const Image& ) = delete;
    Image* operator= ( const Image& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the image
     * 
     */
    void print() const;

    void accept(Visitor& visitor);
};