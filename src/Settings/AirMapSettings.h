/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include "SettingsGroup.h"
#include "QGCMAVLink.h"

class AirMapSettings : public SettingsGroup
{
    Q_OBJECT
public:
    AirMapSettings(QObject* parent = NULL);

    DEFINE_SETTINGGROUP(AirMap)

    DEFINE_SETTINGFACT(apiKey)
    DEFINE_SETTINGFACT(clientID)
    DEFINE_SETTINGFACT(userName)
    DEFINE_SETTINGFACT(password)
    DEFINE_SETTINGFACT(sitaUavReg)
    DEFINE_SETTINGFACT(sitaUserReg)

};
