#define _USE_MATH_DEFINES
#include "Drawline_city.h"
#include <cmath>
#include "Cities.h"

road::road(city* fc, city* sc, double l, QGraphicsItem* parent) : QGraphicsItem(parent)
{
    first_city = fc;
    second_city = sc;
    length = l;
    setFlag(QGraphicsItem::ItemIsFocusable);
}

road::road(const road& r){
    first_city = r.first_city;
    second_city = r.second_city;
    length = r.length;
    setFlag(QGraphicsItem::ItemIsFocusable);
}

QString road::double_to_str(double i){
    QString result = QString::number(i);
   return result;
}

QRectF road::boundingRect() const {
    return QRectF(0, 0, 40, 40);
}

void road::paint(QPainter *painter, const QStyleOptionGraphicsItem *s, QWidget *w) {
    qreal first_city_x = first_city->pos().x() + 25;
    qreal first_city_y = first_city->pos().y() + 25;
    qreal second_city_x = second_city->pos().x() + 25;
    qreal second_city_y = second_city->pos().y() + 25;
    qreal angle = -atan(abs(second_city_y - first_city_y) / abs(second_city_x - first_city_x));
    if (second_city_x - first_city_x < 0) {
        if (second_city_y - first_city_y < 0) {
            angle += M_PI;
        }
        else
        {
            angle = M_PI - angle;
        }
    } else
        if (second_city_y - first_city_y < 0)
        {
        angle = -angle;
    }
    qreal new_x, new_y;
    new_x = 8 * sin(angle);
    new_y = 8 * cos(angle);
    QLineF line = QLineF(first_city_x - new_x, first_city_y - new_y, second_city_x - new_x, second_city_y - new_y);
    QLineF vector = line.unitVector();
    vector.setLength(20);
    QPointF point1 = vector.p2();
    vector.setLength(line.length() - 20);
    QPointF point2 = vector.p2();
    painter->drawLine(QLineF(point1, point2));
    vector.setLength(line.length() - 35);
    QLineF arrow_1 = QLineF(point2, vector.p2());
    QLineF arrow_2 = QLineF(point2, vector.p2());
    arrow_1.setAngle(arrow_1.angle() - 20);
    arrow_2.setAngle(arrow_2.angle() + 20);
    painter->drawLine(arrow_1);
    painter->drawLine(arrow_2);
    QFontMetrics fm(painter->font());
    QString ln = double_to_str(length);
    int q = fm.horizontalAdvance(ln);
    qreal rotate_angle = -line.angle();
    QPointF center = line.center();
    qreal text_x = center.x() * cos(M_PI * rotate_angle / 180) + center.y() * sin(M_PI * rotate_angle / 180);
    qreal text_y = -center.x() * sin(M_PI * rotate_angle / 180) + center.y() * cos(M_PI * rotate_angle / 180);
    painter->rotate(rotate_angle);
    painter->drawText(text_x - q/2, text_y - 5, ln);
    painter->rotate(-rotate_angle);
}

