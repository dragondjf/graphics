#ifndef DGRAPHICEVIEW_H
#define DGRAPHICEVIEW_H

#include<QGraphicsView>
#include<QPoint>
#include<QMouseEvent>

class DGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    DGraphicsView(QWidget *parent = 0);
    ~DGraphicsView();

protected:
//    void mouseMoveEvent(QMouseEvent *event);
//    void mousePressEvent(QMouseEvent *event);
//    void mouseReleaseEvent(QMouseEvent *event);

private:
    QPoint dragPosition;
    bool leftMousePressed;
};

#endif // DGRAPHICEVIEW_H
