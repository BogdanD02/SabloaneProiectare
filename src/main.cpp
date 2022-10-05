#include <Book.hpp>

int main()
{
    Book* discoTitanic = new Book("Disco Titanic");

    discoTitanic->createNewParagraph("Paragraph1");
    discoTitanic->createNewParagraph("Paragraph2");
    discoTitanic->createNewParagraph("Paragraph3");
    discoTitanic->createNewImage("Image1");
    discoTitanic->createNewParagraph("Paragraph4");
    discoTitanic->createNewTable("Table1");
    discoTitanic->createNewParagraph("Paragraph5");

    discoTitanic->print();

    return 0;
}