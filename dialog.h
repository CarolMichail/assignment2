#ifndef DIALOG_H
#define DIALOG_H
#include<QPainter>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
     QGraphicsEllipseItem* ellipse;
     QGraphicsScene* scene;
     QGraphicsLineItem*arm1;
     QGraphicsLineItem*arm2;
     QGraphicsLineItem*leg2;
     QGraphicsLineItem*leg1;
     QGraphicsLineItem*body;
     QGraphicsLineItem*line1;
     QGraphicsLineItem*line2;
     QGraphicsLineItem*line3;





};
#endif // DIALOG_H
