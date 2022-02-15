
#include <QApplication>
#include "staticTest.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    StaticTest::instance()->finish();

    // create and show your widgets here
    
    StaticTest::finish();

    return app.exec();
}
