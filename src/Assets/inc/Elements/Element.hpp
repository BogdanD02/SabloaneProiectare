/**
 * @file Element.hpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the Element class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <Engines/Visitor.hpp>
#include <string>

class Element
{
protected:
    std::string name_;

public:
    /**
     * @brief Destructor
     * 
     */
    virtual ~Element() = default;

    /**
     * @brief Prints the element
     * 
     */
    virtual void print() const = 0;

    /**
     * @brief Compares two elements
     * 
     * @param other The other element
     * @return true 
     * @return false 
     */
    bool operator== (const Element& other)
    {
        return name_ == other.name_;
    }

    virtual void accept(Visitor& visitor) = 0;
};