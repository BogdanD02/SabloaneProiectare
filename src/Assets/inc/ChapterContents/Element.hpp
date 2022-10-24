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
#include <string>
#include <iostream>

class Element
{
public:
    /**
     * @brief Destructor
     * 
     */
    virtual ~Element() {}

    /**
     * @brief Prints the element
     * 
     */
    virtual void print() const = 0;
};