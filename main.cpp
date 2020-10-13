#include <QCoreApplication>
#include "tea.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Tea *tea = new Tea();
    tea->prepareRecipe();

    return a.exec();
}
