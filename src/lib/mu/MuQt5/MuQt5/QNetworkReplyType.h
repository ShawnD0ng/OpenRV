//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QNetworkReplyType__h__
#define __MuQt5__QNetworkReplyType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QNetworkReplyType : public Class
{
  public:

    typedef QNetworkReply MuQt_QNetworkReply;
    typedef MuQt_QNetworkReply MuQtType;
    typedef QNetworkReply QtType;

    //
    //  Constructors
    //

    QNetworkReplyType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QNetworkReplyType();

    static bool isInheritable() { return false; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[14];
};


inline ClassInstance* QNetworkReplyType::cachedInstance(const QNetworkReplyType::MuQtType* obj) { return 0; }

} // Mu

#endif // __MuQt__QNetworkReplyType__h__