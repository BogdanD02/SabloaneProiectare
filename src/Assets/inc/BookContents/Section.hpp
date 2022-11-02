
#pragma once

// Including dependencies
#include <Elements/Element.hpp>
#include <iostream>
#include <vector>
#include <string>

class Section : public Element
{
private:
    std::vector<Element*> children_;
    std::string name_;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Section() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the section
     */
    explicit Section(const std::string&);

    /**
     * @brief Prints the contents of a section
     * 
     */
    void print() const;

    /**
     * @brief Appends a child element
     * 
     * @return unsigned 
     */
    unsigned add( Element* );

    /**
     * @brief Removes a child element
     * 
     */
    void remove ( Element* );

    /**
     * @brief Gets an element by its ID
     * 
     * @return Element* 
     */
    Element* get ( const unsigned& ) const;
};