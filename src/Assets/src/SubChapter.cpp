/**
 * @file SubChapter.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the subchapter class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <ChapterContents/SubChapter.hpp>

SubChapter::~SubChapter()
{
    for(auto el : elements)
    {
        delete el;
    }
}

SubChapter::SubChapter(const std::string& subChapterName)
{
    this->name = subChapterName;
}

int SubChapter::createImage(const std::string& imageName)
{
    elements.push_back(new Image(imageName));

    return elements.size() - 1;
}

int SubChapter::createParagraph(const std::string& paragraphName)
{
    elements.push_back(new Paragraph(paragraphName));

    return elements.size() - 1;
}

int SubChapter::createTable(const std::string& tableName)
{
    elements.push_back(new Table(tableName));

    return elements.size() - 1;
}

Image* SubChapter::getImage(const unsigned& index)
{
    if(index >= elements.size())
        return nullptr;

    return dynamic_cast<Image*>(elements.at(index));
}

Table* SubChapter::getTable(const unsigned& index)
{
    if(index >= elements.size())
        return nullptr;

    return dynamic_cast<Table*>(elements.at(index));
}

Paragraph* SubChapter::getParagraph(const unsigned& index)
{
    if(index >= elements.size())
        return nullptr;

    return dynamic_cast<Paragraph*>(elements.at(index));
}

void SubChapter::print() const
{
    std::cout << name << "\n";

    for(unsigned i = 0; i < name.length(); i++)
        std::cout << "-";
    std::cout << "\n\n";

    for(auto el : elements)
    {
        el->print();
    }
}