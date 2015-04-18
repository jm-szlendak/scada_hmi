#ifndef SENSORWIDGET_H
#define SENSORWIDGET_H
#include "widgets/scadadevicewidget.h"
#include "qcustomplot.h"

class SensorWidget : public ScadaDeviceWigdet
{
    Q_OBJECT
public:
    SensorWidget(QObject* parent);
    ~SensorWidget();
    QCustomPlot *plot;

};

#endif // SENSORWIDGET_H
