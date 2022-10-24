/**
 * @file Paragraph.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the Paragraph class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <ChapterContents/Element.hpp>

class Paragraph : public Element
{
private:
    std::string name;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Paragraph() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    Paragraph( const std::string& );

    // Block other forms of construction

    Paragraph() = delete;
    Paragraph( const Paragraph& ) = delete;
    Paragraph* operator= ( const Paragraph& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the paragraph
     * 
     */
    void print() const;
};