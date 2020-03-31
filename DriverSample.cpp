#include "DriverSample.h"
#include <QDebug>


DriverSample::DriverSample(QObject *parent) : LinkDriverCustom(parent)
{

}

void DriverSample::start(QVariantMap data)
{
    qDebug()<<data;
    //可以从data中获取board.json中对应interface的那一行数据。用户可在board.json中自由扩展数据，可用于辨识驱动对应第几个芯片或其他用途。
    //适合在这里执行驱动初始化的相关工作

}

QVariantMap DriverSample::getState()
{
    //LinkSDK会周期性调用该函数，用以查询驱动当前状态，请至少包含以下几个参数。
    QVariantMap state;
    state["avalible"]=true;//是否锁定了有效信号
    state["width"]=1280;
    state["height"]=720;
    state["framerate"]=60;
    state["interlace"]=false;//是否为隔行视频
    return state;
}

extern "C" LinkDriverCustom* create() {
    return new DriverSample();
}
