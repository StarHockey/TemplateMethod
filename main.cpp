#include <QCoreApplication>
#include "tea.h"
#include "coffee.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Tea *tea = new Tea();
    //tea->prepareRecipe();

    Coffee *coffee = new Coffee();
    coffee->prepareRecipe();

    return a.exec();
}
