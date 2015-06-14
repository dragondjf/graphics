#include "desktopitem.h"
#include <QPainter>
#include <QPen>
#include <QColor>
DesktopItem::DesktopItem(QGraphicsItem *parent) :
    QGraphicsItem(parent)
{

}

QRectF DesktopItem::boundingRect() const
{
    return QRectF(0, 0, 100, 100);
}
//! [1]

//! [2]
void DesktopItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(painter);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

DesktopItem::~DesktopItem()
{

}

