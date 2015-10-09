#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QSettings>
#include <QApplication>
#include <QDebug>
#include <QImageReader>
#include <QStringList>
#include <QColor>
#include <QTemporaryDir>

enum PanelPosition {
    BOTTOM,
    TOP,
    LEFT,
    RIGHT
};

class Settings : public QObject
{
    Q_OBJECT
public:
    static Settings* getInstance();
    static void validate();
    QStringList supportedFormats();
    QString supportedFormatsString();
    QString tempDir();

    // General Settings
    int imageFitMode();
    void setImageFitMode(int mode);
    bool useFastScale();
    void setUseFastScale(bool mode);
    int sortingMode();
    void setSortingMode(int);
    bool fullscreenMode();
    void setFullscreenMode(bool mode);
    bool infiniteScrolling();
    void setInfiniteScrolling(bool mode);
    bool playVideos();
    void setPlayVideos(bool mode);
    bool playVideoSounds();
    void setPlayVideoSounds(bool mode);
    QString ffmpegExecutable();
    void setFfmpegExecutable(QString path);

    // Loader
    bool usePreloader();
    void setUsePreloader(bool mode);
    bool reduceRamUsage();
    void setReduceRamUsage(bool mode);

    // Appearance
    QColor backgroundColor();
    void setBackgroundColor(QColor color);
    QColor accentColor();
    void setAccentColor(QColor color);
    unsigned int thumbnailSize();
    void setThumbnailSize(unsigned int size);
    PanelPosition panelPosition();
    void setPanelPosition(PanelPosition);
    bool showThumbnailLabels();
    void setShowThumbnailLabels(bool mode);

    // Internal
    QString lastDirectory();
    void setLastDirectory(QString path);
    unsigned int lastFilePosition();
    void setLastFilePosition(unsigned int pos);

    bool menuBarHidden();
    void setMenuBarHidden(bool mode);

    QByteArray windowGeometry();
    void setWindowGeometry(QByteArray geometry);

    ~Settings();

private:
    explicit Settings(QObject *parent = 0);
    const int thumbnailSizeDefault = 135;
    QSettings s;
    QTemporaryDir *tempDirectory;

signals:
    void settingsChanged();

public slots:
    void sendChangeNotification();

};

extern Settings *globalSettings;

#endif // SETTINGS_H
