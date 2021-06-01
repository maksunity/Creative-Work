#include "Mouse_event.h"

myGraphicsScene::myGraphicsScene(QObject *parent) : QGraphicsScene(parent)
{
    choosing_cities = false;
}

void myGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::update();
    QGraphicsScene::mouseMoveEvent(mouseEvent);
}

void myGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::mousePressEvent(mouseEvent);
    if (choosing_cities) {
        if (QGraphicsScene::focusItem())
        {
            QGraphicsItem* item = QGraphicsScene::focusItem();
            city* c = dynamic_cast<city*>(item);
            if (c) {
                emit city_chosen(c);
            }
        }
    }
    QGraphicsScene::update();
}
