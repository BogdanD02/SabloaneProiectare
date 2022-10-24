/**
 * @file Paragraph.cpp
 * @author David Bogdan
 * @brief Implementation of the Paragraph class
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Elements/Paragraph.hpp>

Paragraph::Paragraph(const std::string& paragraphName)
{
    this->name = paragraphName;
}

void Paragraph::print() const
{
    std::cout << "Paragraph : " << name << "\n";
}