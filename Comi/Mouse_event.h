#ifndef MOUSE_EVENT_H
#define MOUSE_EVENT_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "Cities.h"

class QGraphicsSceneMouseEvent;
class QPointF;
class QColor;

class myGraphicsScene :  public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myGraphicsScene(QObject *parent = 0);
    bool choosing_cities;

signals:
    void city_chosen(city*);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) override;

private:
    QPen* pen;
    QBrush* brush;
};

#endif // MOUSE_EVENT_H
