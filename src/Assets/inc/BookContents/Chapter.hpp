/**
 * @file Chapter.hpp
 * @author David Bogdan (david.bnicolae@gmail.com)
 * @brief Definition of the Chapter class
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
#include <ChapterContents/SubChapter.hpp>

class Chapter
{
private:
    std::string name;
    std::vector < SubChapter* > subChapters;

public:
    /**
     * @brief Destructor
     * 
     */
    ~Chapter() = default;

    /**
     * @brief Constructor
     * 
     * @param name The name of the author
     */
    Chapter( const std::string& );

    // Block other forms of construction

    Chapter() = delete;
    Chapter( const Chapter& ) = delete;
    Chapter* operator= ( const Chapter& ) = delete;

    // ----- METHODS -----

    /**
     * @brief Prints the chapter
     * 
     */
    void print() const;

    /**
     * @brief Creates a new empty subChapter
     * 
     * @param name The name of the subchapter
     * 
     * @return int
     * @retval The index of the SubChapter 
     */
    int createSubChapter( const std::string& );

    /**
     * @brief Returns a sub chapter
     * 
     * @param index The index of the subchapter
     * 
     * @return SubChapter* 
     * @retval NULL Invalid index
     */
    SubChapter* getSubChapter( const unsigned& );
};