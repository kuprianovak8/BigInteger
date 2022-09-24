#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#include <iostream>
#include <string>

using namespace std;

/*template <typename T, typename T2>
class BigInteger
{
public:
   T a;
   T2 b;

   T Sum(T a, T2 b);



};
*/




