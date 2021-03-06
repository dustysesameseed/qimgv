#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QFileDialog>
#include <QAction>
#include <QBoxLayout>
#include "core.h"
#include "overlays/infooverlay.h"
#include "overlays/controlsoverlay.h"
#include "settingsdialog.h"
#include "viewers/imageviewer.h"
#include "viewers/videoplayer.h"
#include "settings.h"
#include "actionmanager.h"
#include "thumbnailPanel/thumbnailstrip.h"
#include <time.h>

QT_BEGIN_NAMESPACE
    class QAction;
    class QLabel;
    class QMenu;
    class QScrollArea;
    class QScrollBar;
QT_END_NAMESPACE

class Core;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void slotFullscreen();
    void slotTriggerFullscreen();
    void slotMinimize();
    void slotAbout();
    void setInfoString(QString);
    void readSettings();
    void enableImageViewer();
    void enableVideoPlayer();
    void disableImageViewer();
    void disableVideoPlayer();
    void slotCrop();

signals:
    void signalFitAll();
    void signalFitWidth();
    void signalFitNormal();
    void signalNextImage();
    void signalPrevImage();
    void signalZoomIn();
    void signalZoomOut();
    void signalFullscreenEnabled(bool);
    void fileOpened(QString);
    void fileSaved(QString);
    void resized(QSize);

public:
    MainWindow();
    ~MainWindow();    
    ImageViewer *imageViewer;
    VideoPlayer *videoPlayer;

    void open(QString path);
    void showMenuBar();
    void updateOverlays();

private slots:
    void triggerMenuBar();
    void slotOpenDialog();
    void slotFitAll();
    void slotFitWidth();
    void slotFitNormal();
    void switchFitMode();
    void slotRotateLeft();
    void slotRotateRight();
    void slotSaveDialog();


    void slotShowControls(bool);
    void slotShowInfo(bool x);
    void openVideo(Clip *clip);
    void openImage(QPixmap *pixmap);
    void showSettings();

    void slotSelectWallpaper();
private:
    Core *core;
    textOverlay *infoOverlay, *messageOverlay;
    ControlsOverlay *controlsOverlay;
    ThumbnailStrip *panel;
    int currentViewer; // 0 = none; 1 = imageViewer; 2 = VideoPlayer;
    QBoxLayout *layout;
    PanelPosition panelPosition;
    QRect panelArea;
    void init();
    void createActions();
    void createMenus();
    void saveWindowGeometry();
    void restoreWindowGeometry();
    
    QAction *openAct;
    QAction *saveAct;
    QAction *settingsAct;
    QAction *rotateLeftAct;
    QAction *rotateRightAct;
    QAction *cropAct;
    QAction *selectWallpaperAct;
    QAction *nextAct;
    QAction *prevAct;
    QAction *exitAct;
    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *modeFitNormal;
    QAction *modeFitAll;
    QAction *modeFitWidth;
    QAction *fullscreenEnabledAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *navigationMenu;
    QMenu *helpMenu;

    void readSettingsInitial();
    void calculatePanelTriggerArea();
    bool borderlessEnabled;
protected:
    bool event(QEvent *event);
    void resizeEvent(QResizeEvent *event);
    void closeEvent(QCloseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    void dragEnterEvent(QDragEnterEvent *e);
    void dropEvent(QDropEvent *event);
};

#endif // MAINWINDOW_H
