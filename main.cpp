#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

// Add 1st line from branch3. will be commited to local git.
// Add 2st line from branch3. commited. then push to origin/branch3.
// Add 3rd line from branch3 in StockServer24. commited.synced.
