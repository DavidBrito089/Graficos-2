#include "principal.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator t;
    QStringList langs;
    langs<< "Español"<<"English";
    const QString lang =QInputDialog::getItem(NULL,"Language","Select a language",langs);
    if(lang =="English"){
       t.load(":/ingles.qm");
     }

    if (lang!="Español"){
        a.installTranslator(&t);
    }
    a.setStyle("fusion");
    Principal w;
    w.show();
    return a.exec();
}
