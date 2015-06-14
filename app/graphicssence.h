#ifndef GRAPHICESENCE_H
#define GRAPHICESENCE_H

#include <QObject>
#include <QGraphicsScene>

class GraphiceSence : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphiceSence(QObject *parent = 0);
    ~GraphiceSence();

    void initData();
    void initUI();
    void initConnect();

signals:

public slots:
};

#endif // GRAPHICESENCE_H
