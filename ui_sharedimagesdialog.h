/********************************************************************************
** Form generated from reading UI file 'sharedimagesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDIMAGESDIALOG_H
#define UI_SHAREDIMAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SharedImagesDialog {
public:
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout_2;
  QLabel *lbl_user;
  QSpacerItem *horizontalSpacer;
  QPushButton *push_back;
  QListWidget *listWidget;
  QHBoxLayout *horizontalLayout;
  QSpacerItem *horizontalSpacer_2;
  QPushButton *push_request;
  QSpacerItem *horizontalSpacer_5;
  QLineEdit *line_reqviews;
  QSpacerItem *horizontalSpacer_6;
  QPushButton *push_view;
  QSpacerItem *horizontalSpacer_7;
  QLabel *lbl_rem;
  QSpacerItem *horizontalSpacer_9;

  void setupUi(QDialog *SharedImagesDialog) {
    if (SharedImagesDialog->objectName().isEmpty())
      SharedImagesDialog->setObjectName(QStringLiteral("SharedImagesDialog"));
    SharedImagesDialog->resize(500, 500);
    verticalLayout = new QVBoxLayout(SharedImagesDialog);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
    lbl_user = new QLabel(SharedImagesDialog);
    lbl_user->setObjectName(QStringLiteral("lbl_user"));

    horizontalLayout_2->addWidget(lbl_user);

    horizontalSpacer =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_2->addItem(horizontalSpacer);

    push_back = new QPushButton(SharedImagesDialog);
    push_back->setObjectName(QStringLiteral("push_back"));

    horizontalLayout_2->addWidget(push_back);

    verticalLayout->addLayout(horizontalLayout_2);

    listWidget = new QListWidget(SharedImagesDialog);
    listWidget->setObjectName(QStringLiteral("listWidget"));

    verticalLayout->addWidget(listWidget);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
    horizontalSpacer_2 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_2);

    push_request = new QPushButton(SharedImagesDialog);
    push_request->setObjectName(QStringLiteral("push_request"));

    horizontalLayout->addWidget(push_request);

    horizontalSpacer_5 =
        new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_5);

    line_reqviews = new QLineEdit(SharedImagesDialog);
    line_reqviews->setObjectName(QStringLiteral("line_reqviews"));

    horizontalLayout->addWidget(line_reqviews);

    horizontalSpacer_6 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_6);

    push_view = new QPushButton(SharedImagesDialog);
    push_view->setObjectName(QStringLiteral("push_view"));

    horizontalLayout->addWidget(push_view);

    horizontalSpacer_7 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_7);

    lbl_rem = new QLabel(SharedImagesDialog);
    lbl_rem->setObjectName(QStringLiteral("lbl_rem"));

    horizontalLayout->addWidget(lbl_rem);

    horizontalSpacer_9 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_9);

    verticalLayout->addLayout(horizontalLayout);

    QWidget::setTabOrder(listWidget, push_request);
    QWidget::setTabOrder(push_request, push_back);

    retranslateUi(SharedImagesDialog);
    QObject::connect(push_back, SIGNAL(clicked()), SharedImagesDialog,
                     SLOT(close()));

    QMetaObject::connectSlotsByName(SharedImagesDialog);
  } // setupUi

  void retranslateUi(QDialog *SharedImagesDialog) {
    SharedImagesDialog->setWindowTitle(
        QApplication::translate("SharedImagesDialog", "DistImage", nullptr));
    lbl_user->setText(QApplication::translate("SharedImagesDialog",
                                              "Shared Images", nullptr));
    push_back->setText(
        QApplication::translate("SharedImagesDialog", "Back", nullptr));
    push_request->setText(
        QApplication::translate("SharedImagesDialog", "Request", nullptr));
    push_view->setText(
        QApplication::translate("SharedImagesDialog", "View", nullptr));
    lbl_rem->setText(
        QApplication::translate("SharedImagesDialog", "0", nullptr));
  } // retranslateUi
};

namespace Ui {
class SharedImagesDialog : public Ui_SharedImagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDIMAGESDIALOG_H
