/**
 * @file Chapter.cpp
 * @author David Bogdan (bogdan.david02@e-uvt.ro)
 * @brief Implementation of the chapter class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <BookContents/Chapter.hpp>

Chapter::Chapter(const std::string& chapterName)
{
    this->name = chapterName;
}

int Chapter::createSubChapter(const std::string& subChapterName)
{
    subChapters.push_back(new SubChapter(subChapterName));

    return subChapters.size() - 1;
}

SubChapter* Chapter::getSubChapter(const unsigned& index)
{
    if(index < subChapters.size())
        return subChapters.at(index);

    return nullptr;
}

void Chapter::print() const
{
    std::cout << name << "\n";

    for(const SubChapter* const sub : subChapters)
    {
        sub->print();
    }
}