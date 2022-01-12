// This file is generated by kconfig_compiler_kf5 from badgesettings.kcfg.
// All changes you do to this file will be lost.
#ifndef NOTIFICATIONMANAGER_BADGESETTINGS_H
#define NOTIFICATIONMANAGER_BADGESETTINGS_H

#include "notificationmanager_export.h"

#include <qglobal.h>
#include <kconfigskeleton.h>
#include <QCoreApplication>
#include <QDebug>

namespace NotificationManager {

class NOTIFICATIONMANAGER_EXPORT BadgeSettings : public KConfigSkeleton
{
  Q_OBJECT
  public:

    BadgeSettings( QObject *parent = nullptr );
    ~BadgeSettings() override;

    /**
      Set InTaskManager
    */
    void setInTaskManager( bool v )
    {
      if (v != mInTaskManager && !isInTaskManagerImmutable()) {
        mInTaskManager = v;
        Q_EMIT InTaskManagerChanged();
      }
    }

    Q_PROPERTY(bool inTaskManager READ inTaskManager WRITE setInTaskManager NOTIFY InTaskManagerChanged)
    Q_PROPERTY(bool isInTaskManagerImmutable READ isInTaskManagerImmutable CONSTANT)
    /**
      Get InTaskManager
    */
    bool inTaskManager() const
    {
      return mInTaskManager;
    }

    /**
      Is InTaskManager Immutable
    */
    bool isInTaskManagerImmutable() const
    {
      return isImmutable( QStringLiteral( "InTaskManager" ) );
    }

    /**
      Get InTaskManager default value
    */
    bool defaultInTaskManagerValue() const
    {
        return defaultInTaskManagerValue_helper();
    }


    enum {
      signalInTaskManagerChanged = 0x1
    };

  Q_SIGNALS:
    void InTaskManagerChanged();

  private:
    void itemChanged(quint64 flags);

  protected:

    // Badges
    bool mInTaskManager;
    bool defaultInTaskManagerValue_helper() const;

  private:
};

}

#endif

