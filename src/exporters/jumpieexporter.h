#ifndef JUMPIEEXPORTER_H
#define JUMPIEEXPORTER_H

#include "../abstractexporter.h"

class JumpieExporter : public AbstractExporter
{
    Q_OBJECT
public:
    explicit JumpieExporter(QObject *parent = 0);

    virtual bool Export(QByteArray& out);
signals:

public slots:

};

#endif // JUMPIEEXPORTER_H
