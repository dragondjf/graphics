#include "graphicssence.h"

#include <QPixmap>
#include "desktopitem.h"
#include "pixmaptextitem.h"

GraphiceSence::GraphiceSence(QObject *parent) :
    QGraphicsScene(parent)
{


    QString pixmap = QString(":/images/fvoice.png");
    QString text = QString("Chrome");

    PixmapTextItem* pixmapItem = new PixmapTextItem(pixmap, text);
    pixmapItem->setPos(400, 400);


    addItem(pixmapItem);

}

GraphiceSence::~GraphiceSence()
{

}

