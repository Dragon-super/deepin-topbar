#ifndef networkPLUGIN_H
#define networkPLUGIN_H

#include "../interfaces/pluginsiteminterface.h"
#include "networkwidget.h"
#include "networkmanager.h"
#include "item/deviceitem.h"
#include "item/wireditem.h"
#include "item/wirelessitem.h"

#include <QObject>

namespace dtb {
namespace network {

class NetworkPlugin : public QObject, public PluginsItemInterface
{
    Q_OBJECT
public:
    NetworkPlugin();

    const QString pluginName() const Q_DECL_OVERRIDE;
    void init(PluginProxyInterface *proxyInter) Q_DECL_OVERRIDE;

    QWidget *itemWidget(const QString &itemKey) Q_DECL_OVERRIDE;
    QWidget* itemContextMenu(const QString &itemKey) Q_DECL_OVERRIDE;

    void setDefaultColor(PluginProxyInterface::DefaultColor color) Q_DECL_OVERRIDE;

private slots:
    void deviceAdded(const NetworkDevice &device);
    void deviceRemoved(const NetworkDevice &device);

private:
    PluginProxyInterface *m_proxyInter;
    NetworkWidget *m_network;
    NetworkManager *m_networkManager;
    QList<DeviceItem *> m_deviceItemList;
    QTimer *m_refershTimer;
};
}
}

#endif // networkPLUGIN_H
