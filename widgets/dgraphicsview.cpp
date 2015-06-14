#include "dgraphicsview.h"

DGraphicsView::DGraphicsView(QWidget* parent):
    QGraphicsView(parent)
{

}

//void DGraphicsView::mousePressEvent(QMouseEvent *event)
//{
//    if(event->button() & Qt::LeftButton)
//    {
//            dragPosition = event->globalPos() - frameGeometry().topLeft();
//            leftMousePressed = true;
//    }
//    QGraphicsView::mousePressEvent(event);
//}

//void DGraphicsView::mouseReleaseEvent(QMouseEvent *event)
//{
//    leftMousePressed = false;
//    QGraphicsView::mouseReleaseEvent(event);
//}

//void DGraphicsView::mouseMoveEvent(QMouseEvent *event)
//{
//    if(leftMousePressed)
//    {
//        move(event->globalPos() - dragPosition);
//    }
//    QGraphicsView::mouseMoveEvent(event);
//}


DGraphicsView::~DGraphicsView()
{

}

