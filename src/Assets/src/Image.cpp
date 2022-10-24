/**
 * @file Image.cpp
 * @author David Bogdan
 * @brief Implementation of the Image class
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Elements/Image.hpp>

Image::Image(const std::string& imageName)
{
    this->name = imageName;
}

void Image::print() const
{
    std::cout << "Image : " << name << "\n";
}