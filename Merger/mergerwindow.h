#ifndef MERGERWINDOW_H
#define MERGERWINDOW_H

#include <QMainWindow>
#include <opencv/cv.h>

namespace Ui {
class MergerWindow;
}

class MergerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MergerWindow(QWidget *parent = 0);
    ~MergerWindow();

private:
    Ui::MergerWindow *ui;
    IplImage*   imageTest;
};

#endif // MERGERWINDOW_H
