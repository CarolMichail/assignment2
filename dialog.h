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



    void on_lineEdit_returnPressed();

    void on_label_1_linkActivated(const QString &link);



private:
    Ui::Dialog *ui;
    // QGraphicsEllipseItem* ellipse;
     QGraphicsScene* scene;
     QLineF  *body, *righthand, *lefthand, *rightleg, *leftleg;
     QLineF*line1;
     QLineF*line2;
     QLineF*line3;
     QLineF*line4;

     int count=0;
     QGraphicsEllipseItem *face;
     QString test = "hang";


};
#endif // DIALOG_H
