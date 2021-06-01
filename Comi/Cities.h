#ifndef CITIES_H
#define CITIES_H

#include <QGraphicsItem>
#include <string>
#include <vector>
#include <QPainter>
#include <QFontMetrics>

class city : public QGraphicsItem
{

public:
    city(QGraphicsItem* parent = nullptr);
    city(QString, int, int, QGraphicsItem* parent = nullptr);
    city(const city&);
    QString name;
    friend bool operator == (const city&, const city&);

protected:
    void paint(QPainter *p, const QStyleOptionGraphicsItem *s, QWidget *w = nullptr) override;
    QRectF boundingRect() const override;

private: 
    int pos_x;
    int pos_y;
    QColor color;
};


#endif // CITIES_H
