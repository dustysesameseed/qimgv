/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "customWidgets/clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QPushButton *Cancel;
    QPushButton *OK;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *fitModeLabel;
    QComboBox *fitModeComboBox;
    QLabel *scalingQualityLabel;
    QComboBox *scalingQualityComboBox;
    QCheckBox *fullscreenCheckBox;
    QLabel *sortingLabel;
    QComboBox *sortingComboBox;
    QCheckBox *playVideosCheckBox;
    QCheckBox *playSoundsCheckBox;
    QLabel *ffmpegLabel;
    QLineEdit *ffmpegLineEdit;
    QLabel *label;
    QCheckBox *infiniteScrollingCheckBox;
    QWidget *tab_2;
    QSlider *cacheSlider;
    QCheckBox *preloaderCheckBox;
    QLabel *cacheLabel2;
    QLabel *cacheLabel1;
    QCheckBox *reduceRamCheckBox;
    QWidget *tab_3;
    ClickableLabel *bgColorLabel;
    QLabel *bgColorTextLabel;
    QLabel *thumbSizeTextLabel;
    QComboBox *thumbSizeComboBox;
    ClickableLabel *accentColorLabel;
    QLabel *accentColorTextLabel;
    QCheckBox *thumbnailLabelsCheckBox;
    QLabel *panelPositionLabel;
    QComboBox *panelPositionComboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->setWindowModality(Qt::ApplicationModal);
        SettingsDialog->resize(590, 357);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialog->sizePolicy().hasHeightForWidth());
        SettingsDialog->setSizePolicy(sizePolicy);
        SettingsDialog->setMinimumSize(QSize(322, 221));
        SettingsDialog->setBaseSize(QSize(322, 221));
        SettingsDialog->setFocusPolicy(Qt::TabFocus);
        Cancel = new QPushButton(SettingsDialog);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(510, 320, 71, 28));
        OK = new QPushButton(SettingsDialog);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(350, 320, 71, 28));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 571, 301));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        fitModeLabel = new QLabel(tab);
        fitModeLabel->setObjectName(QStringLiteral("fitModeLabel"));
        fitModeLabel->setGeometry(QRect(10, 20, 151, 21));
        fitModeComboBox = new QComboBox(tab);
        fitModeComboBox->setObjectName(QStringLiteral("fitModeComboBox"));
        fitModeComboBox->setGeometry(QRect(170, 20, 121, 28));
        scalingQualityLabel = new QLabel(tab);
        scalingQualityLabel->setObjectName(QStringLiteral("scalingQualityLabel"));
        scalingQualityLabel->setGeometry(QRect(10, 60, 151, 21));
        scalingQualityComboBox = new QComboBox(tab);
        scalingQualityComboBox->setObjectName(QStringLiteral("scalingQualityComboBox"));
        scalingQualityComboBox->setEnabled(false);
        scalingQualityComboBox->setGeometry(QRect(170, 60, 121, 28));
        fullscreenCheckBox = new QCheckBox(tab);
        fullscreenCheckBox->setObjectName(QStringLiteral("fullscreenCheckBox"));
        fullscreenCheckBox->setGeometry(QRect(10, 138, 171, 21));
        sortingLabel = new QLabel(tab);
        sortingLabel->setObjectName(QStringLiteral("sortingLabel"));
        sortingLabel->setGeometry(QRect(10, 100, 151, 21));
        sortingComboBox = new QComboBox(tab);
        sortingComboBox->setObjectName(QStringLiteral("sortingComboBox"));
        sortingComboBox->setGeometry(QRect(170, 100, 121, 28));
        playVideosCheckBox = new QCheckBox(tab);
        playVideosCheckBox->setObjectName(QStringLiteral("playVideosCheckBox"));
        playVideosCheckBox->setGeometry(QRect(320, 20, 211, 21));
        playSoundsCheckBox = new QCheckBox(tab);
        playSoundsCheckBox->setObjectName(QStringLiteral("playSoundsCheckBox"));
        playSoundsCheckBox->setGeometry(QRect(320, 50, 181, 21));
        ffmpegLabel = new QLabel(tab);
        ffmpegLabel->setObjectName(QStringLiteral("ffmpegLabel"));
        ffmpegLabel->setGeometry(QRect(10, 210, 151, 21));
        ffmpegLineEdit = new QLineEdit(tab);
        ffmpegLineEdit->setObjectName(QStringLiteral("ffmpegLineEdit"));
        ffmpegLineEdit->setGeometry(QRect(170, 210, 381, 21));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 230, 521, 41));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        label->setOpenExternalLinks(true);
        infiniteScrollingCheckBox = new QCheckBox(tab);
        infiniteScrollingCheckBox->setObjectName(QStringLiteral("infiniteScrollingCheckBox"));
        infiniteScrollingCheckBox->setGeometry(QRect(10, 170, 171, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setEnabled(true);
        cacheSlider = new QSlider(tab_2);
        cacheSlider->setObjectName(QStringLiteral("cacheSlider"));
        cacheSlider->setEnabled(false);
        cacheSlider->setGeometry(QRect(160, 80, 131, 22));
        cacheSlider->setMinimum(32);
        cacheSlider->setMaximum(512);
        cacheSlider->setSingleStep(2);
        cacheSlider->setValue(64);
        cacheSlider->setOrientation(Qt::Horizontal);
        preloaderCheckBox = new QCheckBox(tab_2);
        preloaderCheckBox->setObjectName(QStringLiteral("preloaderCheckBox"));
        preloaderCheckBox->setEnabled(true);
        preloaderCheckBox->setGeometry(QRect(10, 20, 171, 21));
        cacheLabel2 = new QLabel(tab_2);
        cacheLabel2->setObjectName(QStringLiteral("cacheLabel2"));
        cacheLabel2->setEnabled(false);
        cacheLabel2->setGeometry(QRect(120, 80, 31, 21));
        cacheLabel1 = new QLabel(tab_2);
        cacheLabel1->setObjectName(QStringLiteral("cacheLabel1"));
        cacheLabel1->setEnabled(false);
        cacheLabel1->setGeometry(QRect(10, 80, 101, 21));
        reduceRamCheckBox = new QCheckBox(tab_2);
        reduceRamCheckBox->setObjectName(QStringLiteral("reduceRamCheckBox"));
        reduceRamCheckBox->setEnabled(false);
        reduceRamCheckBox->setGeometry(QRect(10, 50, 171, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        bgColorLabel = new ClickableLabel(tab_3);
        bgColorLabel->setObjectName(QStringLiteral("bgColorLabel"));
        bgColorLabel->setGeometry(QRect(160, 20, 31, 21));
        bgColorLabel->setFrameShape(QFrame::Box);
        bgColorTextLabel = new QLabel(tab_3);
        bgColorTextLabel->setObjectName(QStringLiteral("bgColorTextLabel"));
        bgColorTextLabel->setGeometry(QRect(10, 20, 141, 21));
        thumbSizeTextLabel = new QLabel(tab_3);
        thumbSizeTextLabel->setObjectName(QStringLiteral("thumbSizeTextLabel"));
        thumbSizeTextLabel->setGeometry(QRect(10, 80, 141, 31));
        thumbSizeComboBox = new QComboBox(tab_3);
        thumbSizeComboBox->setObjectName(QStringLiteral("thumbSizeComboBox"));
        thumbSizeComboBox->setGeometry(QRect(160, 80, 101, 28));
        accentColorLabel = new ClickableLabel(tab_3);
        accentColorLabel->setObjectName(QStringLiteral("accentColorLabel"));
        accentColorLabel->setGeometry(QRect(160, 50, 31, 21));
        accentColorLabel->setFrameShape(QFrame::Box);
        accentColorTextLabel = new QLabel(tab_3);
        accentColorTextLabel->setObjectName(QStringLiteral("accentColorTextLabel"));
        accentColorTextLabel->setGeometry(QRect(10, 50, 141, 21));
        thumbnailLabelsCheckBox = new QCheckBox(tab_3);
        thumbnailLabelsCheckBox->setObjectName(QStringLiteral("thumbnailLabelsCheckBox"));
        thumbnailLabelsCheckBox->setGeometry(QRect(10, 160, 271, 21));
        thumbnailLabelsCheckBox->setChecked(false);
        panelPositionLabel = new QLabel(tab_3);
        panelPositionLabel->setObjectName(QStringLiteral("panelPositionLabel"));
        panelPositionLabel->setGeometry(QRect(10, 120, 141, 31));
        panelPositionComboBox = new QComboBox(tab_3);
        panelPositionComboBox->setObjectName(QStringLiteral("panelPositionComboBox"));
        panelPositionComboBox->setGeometry(QRect(160, 120, 101, 28));
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(SettingsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 320, 71, 28));
        QWidget::setTabOrder(tabWidget, fitModeComboBox);
        QWidget::setTabOrder(fitModeComboBox, scalingQualityComboBox);
        QWidget::setTabOrder(scalingQualityComboBox, sortingComboBox);
        QWidget::setTabOrder(sortingComboBox, fullscreenCheckBox);
        QWidget::setTabOrder(fullscreenCheckBox, OK);
        QWidget::setTabOrder(OK, pushButton);
        QWidget::setTabOrder(pushButton, Cancel);
        QWidget::setTabOrder(Cancel, preloaderCheckBox);
        QWidget::setTabOrder(preloaderCheckBox, reduceRamCheckBox);
        QWidget::setTabOrder(reduceRamCheckBox, cacheSlider);
        QWidget::setTabOrder(cacheSlider, thumbSizeComboBox);

        retranslateUi(SettingsDialog);
        QObject::connect(Cancel, SIGNAL(clicked()), SettingsDialog, SLOT(close()));
        QObject::connect(OK, SIGNAL(clicked()), SettingsDialog, SLOT(applySettingsAndClose()));
        QObject::connect(pushButton, SIGNAL(clicked()), SettingsDialog, SLOT(applySettings()));
        QObject::connect(cacheSlider, SIGNAL(valueChanged(int)), cacheLabel2, SLOT(setNum(int)));
        QObject::connect(bgColorLabel, SIGNAL(clicked()), SettingsDialog, SLOT(bgColorDialog()));
        QObject::connect(accentColorLabel, SIGNAL(clicked()), SettingsDialog, SLOT(accentColorDialog()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Preferences", 0));
        Cancel->setText(QApplication::translate("SettingsDialog", "Cancel", 0));
        OK->setText(QApplication::translate("SettingsDialog", "OK", 0));
        fitModeLabel->setText(QApplication::translate("SettingsDialog", "Default fit mode:", 0));
        fitModeComboBox->clear();
        fitModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "ALL", 0)
         << QApplication::translate("SettingsDialog", "WIDTH", 0)
         << QApplication::translate("SettingsDialog", "NORMAL", 0)
        );
        scalingQualityLabel->setText(QApplication::translate("SettingsDialog", "Scaling quality: ", 0));
        scalingQualityComboBox->clear();
        scalingQualityComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Better quality", 0)
         << QApplication::translate("SettingsDialog", "Better speed", 0)
        );
        fullscreenCheckBox->setText(QApplication::translate("SettingsDialog", "Open in fullscreen", 0));
        sortingLabel->setText(QApplication::translate("SettingsDialog", "Sorting:", 0));
        sortingComboBox->clear();
        sortingComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Name", 0)
         << QApplication::translate("SettingsDialog", "Name (desc)", 0)
         << QApplication::translate("SettingsDialog", "Date", 0)
         << QApplication::translate("SettingsDialog", "Date (desc)", 0)
        );
        playVideosCheckBox->setText(QApplication::translate("SettingsDialog", "Webm support (experimental)", 0));
        playSoundsCheckBox->setText(QApplication::translate("SettingsDialog", "Play video sounds", 0));
        ffmpegLabel->setText(QApplication::translate("SettingsDialog", "FFmpeg executable:", 0));
        label->setText(QApplication::translate("SettingsDialog", "<html><head/><body><p>FFmpeg is required for webm thumbnail generation. If you are on windows, get it <a href=\"http://ffmpeg.zeranoe.com/builds/\"><span style=\" text-decoration: underline; color:#2980b9;\">here</span></a>.<br>Alternative: avconv.</p></body></html>", 0));
        infiniteScrollingCheckBox->setText(QApplication::translate("SettingsDialog", "Infinite scrolling", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "General", 0));
#ifndef QT_NO_TOOLTIP
        preloaderCheckBox->setToolTip(QApplication::translate("SettingsDialog", "Preloads next image in directory for faster scrolling.", 0));
#endif // QT_NO_TOOLTIP
        preloaderCheckBox->setText(QApplication::translate("SettingsDialog", "Enable preloader", 0));
        cacheLabel2->setText(QString());
#ifndef QT_NO_TOOLTIP
        cacheLabel1->setToolTip(QApplication::translate("SettingsDialog", "When preloader used, ram usege may exceed this setting.", 0));
#endif // QT_NO_TOOLTIP
        cacheLabel1->setText(QApplication::translate("SettingsDialog", "Cache size, MB:", 0));
#ifndef QT_NO_TOOLTIP
        reduceRamCheckBox->setToolTip(QApplication::translate("SettingsDialog", "Checking this will make the program keep in memory only currently displayed image (except the preloaded one).", 0));
#endif // QT_NO_TOOLTIP
        reduceRamCheckBox->setText(QApplication::translate("SettingsDialog", "Reduce RAM usage", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Loader", 0));
        bgColorLabel->setText(QString());
        bgColorTextLabel->setText(QApplication::translate("SettingsDialog", "Background color:", 0));
        thumbSizeTextLabel->setText(QApplication::translate("SettingsDialog", "Thumbnail size:", 0));
        thumbSizeComboBox->clear();
        thumbSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Small", 0)
         << QApplication::translate("SettingsDialog", "Medium", 0)
         << QApplication::translate("SettingsDialog", "Large", 0)
         << QApplication::translate("SettingsDialog", "Very large", 0)
        );
        accentColorLabel->setText(QString());
        accentColorTextLabel->setText(QApplication::translate("SettingsDialog", "Accent color:", 0));
        thumbnailLabelsCheckBox->setText(QApplication::translate("SettingsDialog", "Show thumbnail labels", 0));
        panelPositionLabel->setText(QApplication::translate("SettingsDialog", "Panel position:", 0));
        panelPositionComboBox->clear();
        panelPositionComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Bottom", 0)
         << QApplication::translate("SettingsDialog", "Top", 0)
         << QApplication::translate("SettingsDialog", "Left", 0)
         << QApplication::translate("SettingsDialog", "Right", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsDialog", "Appearance", 0));
        pushButton->setText(QApplication::translate("SettingsDialog", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
