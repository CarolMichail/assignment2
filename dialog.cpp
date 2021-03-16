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
    Blackpen.setWidth(5);

    line1 = new QLineF(QPoint(50,550), QPoint(150,550));
    line2 = new QLineF(QPoint(50,550), QPoint(50,150));
    line3 = new QLineF(QPoint(50,150), QPoint(250,150));
    line4 = new QLineF(QPoint(250,150), QPoint(250,250));

     face = new QGraphicsEllipseItem(200,250,100,100);
     face->setPen(Blackpen);
     body = new QLineF(QPoint(250,350), QPoint(250,450));
     righthand =  new QLineF(QPoint(250,400), QPoint(300,350));
     lefthand = new QLineF(QPoint(250,400), QPoint(200,350));
     rightleg = new QLineF(QPoint(250,450), QPoint(300,500));
     leftleg = new QLineF(QPoint(250,450), QPoint(200,500));
     QString x = ui -> lineEdit -> text();

}

Dialog::~Dialog()
{
    delete ui;
}
QString word = "hang";


void Dialog::on_pushButton_clicked()
{
    QString userInput = ui->lineEdit->text();
    QChar userChar = userInput[0];
int flag=0;


QString label= ui->label_1->text();
    for(int i=0; i<test.length();i++)
    {

        if (userChar==test[i])
        {
          label[i]=userChar;

           ui->label_1->setText(label);

           flag++;


        }

    }
            if (flag==0)
                count++;
            if(test==label)
 ui->label_1->setText("YouWin");


    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    QPen Bluepen(Qt::blue);
switch(count)
{
case 1 :
   scene->addLine(*line1); break;
case 2:
    scene->addLine(*line2); break;
case 3:
    scene->addLine(*line3); break;
case 4:
    scene->addLine(*line4); break;
case 5:
    scene->addEllipse(230, 290,60, 60, Blackpen, RedBrush); break;
case 6:
    scene->addLine(*body); break;
case 7:
    scene->addLine(*righthand); break;
case 8:
    scene->addLine(*lefthand); break;
case 9:
    scene->addLine(*rightleg); break;
case 10:
    scene->addLine(*leftleg);  ui->label_1->setText("You Lose");break;
}
}



void Dialog::on_lineEdit_returnPressed()
{
         QString x = ui -> lineEdit -> text();


    connect(ui->lineEdit, SIGNAL(textChanged(Qstring)), this, SLOT(checkInput(Qstring)));

}

void Dialog::on_label_1_linkActivated(const QString &link)
{

}


