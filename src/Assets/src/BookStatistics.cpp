/**
 * @file BookStatistics.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the render engine
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Engines/BookStatistics.hpp>

void BookStatistics::print()
{
    std::cout << "Books: " << noBooks << "\n";
    std::cout << "TableOfContents: " << noTableOfContents << "\n";
    std::cout << "Sections: " << noSections << "\n";
    std::cout << "Images: " << noImages << "\n";
    std::cout << "Paragraphs: " << noParagraphs << "\n";
    std::cout << "Tables: " << noTables << "\n";
}

void BookStatistics::visitBook(const Book& param)
{
    noBooks++;
}

void BookStatistics::visitTable(const Table& param)
{
    noTables++;
}

void BookStatistics::visitTableOfContents(const TableOfContents& param)
{
    noTableOfContents++;
}

void BookStatistics::visitImage(const Image& param)
{
    noImages++;
}

void BookStatistics::visitParagraph(const Paragraph& param)
{
    noParagraphs++;
}

void BookStatistics::visitSection(const Section& param)
{
    noSections++;
}