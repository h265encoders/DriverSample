#ifndef DRIVERSAMPLE_H
#define DRIVERSAMPLE_H

#include "driversample_global.h"
#include "LinkDriverCustom.h"

class DRIVERSAMPLESHARED_EXPORT DriverSample : public LinkDriverCustom
{
    Q_OBJECT
public:
    explicit DriverSample(QObject *parent = 0);
    void start(QVariantMap data=QVariantMap());
    QVariantMap getState();
};

#endif // DRIVERSAMPLE_H
