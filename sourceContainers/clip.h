#ifndef CLIP_H
#define CLIP_H

#include <QString>
#include <QRect>
#include <QTransform>
#include <QProcess>
#include "../settings.h"

class Clip {
public:
    Clip();
    Clip(const QString &fileName, const char* format);
    ~Clip();

    // functions which mimic those found in other underlying
    // image types such as QImage
    void load(const QString &fileName, const char* format);
    void save(const QString &fileName, const char* format, int quality);
    int height();
    int width();
    QSize size();

    void rotate(qreal angle);
    void setFrame(QRect newFrame);

    // functions intended to be used by videoplayer
    QString getPath();
    QRect getFrame();
    QTransform getTransform();

private:
    QString path;
    const char* extension;
    QRect frame;
    QTransform transform;
    int grad;
    uint srcWidth;
    uint srcHeight;

};


#endif // CLIP_H
