#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_f_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    void mousePressEvent(QMouseEvent *mouse);
    unsigned int w_height = 1000, w_width = 1200; // ширина/высота окна
    unsigned int pos_map_x = 180, pos_map_y = 0; // позиция карты
    unsigned int size_map_x = 1000, size_map_y = 800;
    unsigned int pos_point_x = 250, pos_point_y = 250;
    double tx_power = 23; //мощность передатчика в милливатах
    double ant_power = 6; //коэф усиления
    double val_f = 1.5;
    void draw();
    void draw_gradient();
    QPixmap *map;
    QGraphicsScene* scene;
    QGraphicsView *view;

    QLabel *label_;
    QGroupBox *gradientGroupBox;
};



#endif // MAINWINDOW_H
