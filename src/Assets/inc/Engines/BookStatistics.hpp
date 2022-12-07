/**
 * @file BookStatistics.hpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the render engine
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// Including dependencies
#include <Engines/Visitor.hpp>
#include <iostream>

class BookStatistics : public Visitor
{
private:
    unsigned noBooks, noSections, noParagraphs, noTableOfContents, noImages, noTables;

public:
    virtual ~BookStatistics() = default;

    BookStatistics() : noBooks(0), noSections(0), noParagraphs(0), noTableOfContents(0), noImages(0), noTables(0) {}

    void visitBook(const Book& param);
    void visitSection(const Section& param);
    void visitTableOfContents(const TableOfContents& param);
    void visitParagraph(const Paragraph& param);
    void visitImage(const Image& param);
    void visitTable(const Table& param);

    void print();
};