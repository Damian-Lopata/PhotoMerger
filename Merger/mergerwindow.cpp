#include "mergerwindow.h"
#include "ui_mergerwindow.h"

MergerWindow::MergerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MergerWindow)
{
    ui->setupUi(this);
}

MergerWindow::~MergerWindow()
{
    delete ui;
}
