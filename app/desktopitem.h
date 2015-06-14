#ifndef DESKTOPITEM_H
#define DESKTOPITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>


class DesktopItem : public QGraphicsItem, QObject
{

public:
    explicit DesktopItem(QGraphicsItem *parent = 0);
    ~DesktopItem();

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;

signals:

public slots:
};






#endif // DESKTOPITEM_H
