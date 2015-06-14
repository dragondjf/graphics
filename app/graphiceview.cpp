#include "app/graphicsview.h"
#include<QDesktopWidget>
#include<QApplication>
#include<QScrollBar>
#include<QBrush>
#include<QRect>
#include<QDebug>
GraphiceView::GraphiceView(QWidget *parent)
    : DGraphicsView(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    initUI();

}

void GraphiceView::initUI(){
    showFullScreen();
    sence = new GraphiceSence;

    int width = QApplication::desktop()->geometry().width();
    int height = QApplication::desktop()->geometry().height();
    sence->setSceneRect(QRect(0, 0, width, height));
    sence->setBackgroundBrush(QBrush(Qt::darkGray));
    setScene(sence);
}


void GraphiceView::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Escape){
        this->close();
    }else if(event->key() == Qt::Key_F11){
        if (isFullScreen()){
            showNormal();
        }else{
            showFullScreen();
        }
    }
}


GraphiceView::~GraphiceView()
{

}
