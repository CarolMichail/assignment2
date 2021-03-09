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
     QLineF*arm1;
     QLineF*arm2;
     QLineF*leg2;
     QLineF*leg1;
     QLineF*body;
     QLineF*line1;
     QLineF*line2;
     QLineF*line3;
     QLineF*line4;
     QLineF*l;
     int count=1;
     QGraphicsEllipseItem *face;





};
#endif // DIALOG_H
