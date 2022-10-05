/**
 * @file Book.hpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the Book class
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <string>
#include <vector>
#include <iostream>

class Book
{
private:
    std::string _title;
    std::vector < std::string > _paragraphs;
    std::vector < std::string > _images;
    std::vector < std::string > _tables;

    void printUnderlined(std::string message);

public:
    /**
     * @brief Constructor
     * 
     * @param title The book's title
     */
    Book(std::string title);

    /**
     * @brief Adds a new paragraph to the book
     * 
     * @param text The paragraph's text
     */
    void createNewParagraph(std::string text);
    
    /**
     * @brief Adds a new image to the book
     * 
     * @param path The path to the image
     */
    void createNewImage(std::string path);

    /**
     * @brief Adds a new table to the book
     * 
     * @param title The name of the table
     */
    void createNewTable(std::string title);

    /**
     * @brief Prints the book's content
     * 
     */
    void print();
};