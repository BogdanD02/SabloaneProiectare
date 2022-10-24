/**
 * @file SubChapter.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the SubChapter class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <string>
#include <vector>
#include <Elements/Image.hpp>
#include <Elements/Paragraph.hpp>
#include <Elements/Table.hpp>

class SubChapter
{
private:
    std::string name;
    std::vector <Element*> elements;
public:
    /**
     * @brief Destructor
     * 
     */
    ~SubChapter();

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    SubChapter( const std::string& );

    // Block other forms of construction

    SubChapter() = delete;
    SubChapter( const SubChapter& ) = delete;
    SubChapter* operator= ( const SubChapter& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the subchapter
     * 
     */
    void print() const;

    /**
     * @brief Creates a new empty image
     * 
     * @param name The name of the image
     * 
     * @return int 
     * @retval The index of the image
     */
    int createImage( const std::string& );

    /**
     * @brief Creates a new empty paragraph
     * 
     * @param name The name of the paragraph
     * 
     * @return int 
     * @retval The index of the paragraph
     */
    int createParagraph( const std::string& );

    /**
     * @brief Creates a new empty table
     * 
     * @param name The name of the table
     * 
     * @return int 
     * @retval The index of the paragraph
     */
    int createTable( const std::string& );

    /**
     * @brief Gets an image
     * 
     * @param index The index of the image
     * 
     * @return Image* 
     * @retval NULL invalid index
     */
    Image* getImage( const unsigned& );

    /**
     * @brief Gets a table
     * 
     * @param index The index of the table
     * 
     * @return Table* 
     * @retval NULL invalid index
     */
    Table* getTable( const unsigned& );

    /**
     * @brief Gets an paragraph
     * 
     * @param index The index of the paragraph
     * 
     * @return Paragraph* 
     * @retval NULL invalid index
     */
    Paragraph* getParagraph( const unsigned& );

};