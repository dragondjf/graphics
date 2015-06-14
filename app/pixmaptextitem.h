#ifndef PIXMAPITEM_H
#define PIXMAPITEM_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QStyleOptionGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>

class PixmapTextItem : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    PixmapTextItem();
    PixmapTextItem(QString &file,QString &text,int imagesize=80);

    //setup function
    void setMyPixmap(QString &file,int size);
    void setMyText(QString &text);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
    QString getMyText();
    //virtual function
    QRectF boundingRect() const;
    QPainterPath shape() const;
signals:
    void itemIsMoving(QPointF &pos);
    void itemIsPressed();


protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:
    //QString myImage;
    QString myText;

};

#endif // PIXMAPITEM_H
