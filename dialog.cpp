#include "dialog.h"
#include "ui_dialog.h"
#include "qmessagebox.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    QPen Bluepen(Qt::blue);

    Blackpen.setWidth(2);
    ellipse = scene->addEllipse(-230, -200,60, 60, Blackpen, RedBrush);

   arm1=scene->addLine( -200, -100,  -200, 100, Blackpen);
   arm2=scene->addLine(QLineF(-10, -10, 20, 20));
   leg1=scene->addLine(QLineF(-10, -10, 20, 20));
   leg2=scene->addLine(QLineF(-10, -10, 20, 20));
   body=scene->addLine(QLineF(-120, -100, 100, 100));
   line1=scene->addLine (0, 60, -20, 5,Bluepen);
   line2=scene->addLine(QLineF(-10, -10, 20, 20));
   line3=scene->addLine(QLineF(-10, -10, 20, 20));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
   QString x = ui -> lineEdit -> text();

   if(x== 'a')
   {
      QMessageBox::information(this,"a","The letter is a");
   }

  QString word = "hang";
  for(int i=0; i<word.length();i++)
  {
      if (word[i]== x);
      {
      QMessageBox::information(this,"a","This letter is correct");

    
      {
          void QGraphicsScene::removeItem(QGraphicsItem *arm1)

            }

      }
  }
}

