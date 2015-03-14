#include "choose.h"
#include <QApplication>
#include <QtCore>
#include <QtXml>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestPlatform w;
    w.show();

    return a.exec();
}

int XmlParse()
{
    QXmlSimpleReader reader;
    QTextStream::setCodec("UTF-8");
    QString str;
    QFile input("test.xml");
    QFile output("out.txt");
    QXmlInputSource source(&input);

    if (output.open(QFile::WriteOnly bitor QFile::Truncate))
      {
        QTextStream out(&output);
        CContentHandler handler(out);

        out << "Привет мир!!!\n";
        reader.setContentHandler(&handler);
        reader.parse(source);
      }
    return 0;
    }
