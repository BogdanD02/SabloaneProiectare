/**
 * @file Visitor.hpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Definition of the visitor interface
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

class Book;
class Section;
class TableOfContents;
class Paragraph;
class Table;
class Image;

class Visitor
{
public:
    virtual ~Visitor() = default;

    virtual void visitBook(const Book& param) = 0;
    virtual void visitSection(const Section& param) = 0;
    virtual void visitTableOfContents(const TableOfContents& param) = 0;
    virtual void visitParagraph(const Paragraph& param) = 0;
    virtual void visitImage(const Image& param) = 0;
    virtual void visitTable(const Table& param) = 0;
};