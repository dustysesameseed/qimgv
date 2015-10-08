#include "imagelib.h"

#include <QFile>

ImageLib::ImageLib() {

}

void ImageLib::scaleImage(QPixmap *dest, QPixmap* source, QSize destSize, bool smooth) {
    Qt::TransformationMode mode = smooth ? Qt::SmoothTransformation : Qt::FastTransformation;
    *dest = source->scaled(destSize.width(), destSize.height(), Qt::IgnoreAspectRatio, mode);
    delete source;
}
