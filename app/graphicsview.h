#ifndef GRAPHICEVIEW_H
#define GRAPHICEVIEW_H

#include <QGraphicsView>
#include <QKeyEvent>
#include "widgets/dgraphicsview.h"
#include "graphicssence.h"

class GraphiceView : public DGraphicsView
{
    Q_OBJECT

public:
    GraphiceView(QWidget *parent = 0);
    ~GraphiceView();

    GraphiceSence* sence;

    void initData();
    void initUI();
    void initConnect();

protected:
    void keyPressEvent(QKeyEvent* event);
};

#endif // GRAPHICEVIEW_H
