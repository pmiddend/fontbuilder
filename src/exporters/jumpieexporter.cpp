#include "jumpieexporter.h"
#include "../fontconfig.h"

JumpieExporter::JumpieExporter(QObject *parent) :
    AbstractExporter(parent)
{
    setExtension("txt");
}

bool JumpieExporter::Export(QByteArray &out)
{
    foreach(const Symbol& c , symbols()) {
        // x=left,top,right,bottom
        out.append(c.id);
        out.append('=');
        out.append(QString::number(c.placeX).toUtf8()).append(',');
        out.append(QString::number(c.placeY).toUtf8()).append(',');
        out.append(QString::number(c.placeX+c.placeW).toUtf8()).append(',');
        out.append(QString::number(c.placeY+c.placeH).toUtf8());
        out.append('\n');
    }

    return true;
}

AbstractExporter* JumpieExporterFactoryFunc (QObject* parent) {
    return new JumpieExporter(parent);
}
