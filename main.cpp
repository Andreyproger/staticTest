
#include <QApplication>
#include "staticTest.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    StaticTest checkBlock;

    // create and show your widgets here

    return app.exec();
}
