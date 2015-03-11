#ifndef TESTPLATFORM_H
#define TESTPLATFORM_H

#include <QMainWindow>

namespace Ui {
class TestPlatform;
}

class TestPlatform : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestPlatform(QWidget *parent = 0);
    ~TestPlatform();

private:
    Ui::TestPlatform *ui;
};

#endif // TESTPLATFORM_H
