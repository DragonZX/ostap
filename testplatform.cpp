#include "testplatform.h"
#include "ui_testplatform.h"

TestPlatform::TestPlatform(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestPlatform)
{
    ui->setupUi(this);
}

TestPlatform::~TestPlatform()
{
    delete ui;
}
