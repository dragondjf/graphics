#include "pixmaptextitem.h"
#include <QDebug>

PixmapTextItem::PixmapTextItem()
{
}
/*note: imagesize = 80 is in the PixmapTextItem.h*/
PixmapTextItem::PixmapTextItem(QString &file,QString &text,int imagesize)
{

    setFlags(PixmapTextItem::ItemIsMovable| PixmapTextItem::ItemIsSelectable);
    setMyText(text);
    setMyPixmap(file,imagesize);
}

void PixmapTextItem::setMyText(QString &text)
{
    myText = text;
}

void PixmapTextItem::setMyPixmap(QString &file,int size)
{
    //myImage = file;
    QPixmap pixmap;
    pixmap.load(file);
    pixmap= pixmap.scaled(size,size,Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    setPixmap(pixmap);
}
QRectF PixmapTextItem::boundingRect() const
{
    QRect rect = this->pixmap().rect();
    //return QRectF(rect);
    return QRectF(0,0,rect.width(),rect.width()+15);
}

void PixmapTextItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
           QWidget *widget)
{
    Q_UNUSED(widget)
    QPixmap pixmap = this->pixmap();
    QRect rect = pixmap.rect();

    painter->drawPixmap(rect,pixmap);


    //print name,calculate the text's heigh & width for center layout
    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->setRenderHint(QPainter::Antialiasing);
    QFont font("Verdana",8, QFont::Normal);
    painter->setFont(font);
    painter->drawText(QRectF(0,rect.height(),rect.width(),15),Qt::AlignCenter,myText);

    if (option->state & QStyle::State_Sunken)
    {
        QRectF rect1 = boundingRect();
        //QPen pen(Qt::darkGreen);
        painter->setPen(QPen(Qt::darkGreen));
    }else
    {

    }
}
QPainterPath PixmapTextItem::shape() const
{
    QRectF rect = boundingRect();

    QPainterPath path;
    path.addRoundRect(rect, 5,5);
    return path;
}

void PixmapTextItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit itemIsPressed();
    qDebug()<<"pressed";
    QGraphicsItem::mousePressEvent(event);
}
void PixmapTextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update(boundingRect());
    QGraphicsItem::mouseReleaseEvent(event);
}
QString PixmapTextItem::getMyText()
{
    return myText;
}

