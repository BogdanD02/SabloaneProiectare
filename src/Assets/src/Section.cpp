/**
 * @file Section.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the section class
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <BookContents/Section.hpp>

Section::Section(const std::string& name)
{
    name_ = name;
}

unsigned Section::add(Element* newElement)
{
    children_.push_back(newElement);

    return children_.size() - 1;
}

void Section::remove(Element* element)
{
    for(auto iter = children_.begin(); iter < children_.end(); iter++)
    {
        if(*iter == element)
        {
            children_.erase(iter);
            break;
        }
    }
}

Element* Section::get(const unsigned& index) const
{
    if(index < children_.size())
    {
        return children_.at(index);
    }

    return nullptr;
}

void Section::print() const
{
    std::cout << "Section " << name_ << "\n";

    for(auto element : children_)
    {
        element->print();
    }
}

void Section::accept(Visitor& visitor)
{
    visitor.visitSection(*this);

    for (Element*& el : children_)
    {
        el->accept(visitor);
    }
}