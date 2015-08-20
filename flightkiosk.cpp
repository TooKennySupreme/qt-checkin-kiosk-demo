#include "flightkiosk.h"
#include "ui_flightkiosk.h"

flightKiosk::flightKiosk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::flightKiosk)
{
    ui->setupUi(this);

    QPixmap clouds("/usr/bin/trdx-resources/clouds-gray.jpg");
    QPixmap whiteLabel("/usr/bin/trdx-resources/white-bar.png");
    QPixmap topBar("/usr/bin/trdx-resources/top-bar.png");
    QPixmap trdxLogo("/usr/bin/trdx-resources/toradex-logo-white-small.png");
    QPixmap txtLabel("/usr/bin/trdx-resources/top-text.png");
    QPixmap seats("/usr/bin/trdx-resources/seats-plane.png");
    QPixmap btnGreen("/usr/bin/trdx-resources/btn-toradex.png");
    QPixmap flightInfo("/usr/bin/trdx-resources/flight-info-trdx.png");
    QPixmap welcome("/usr/bin/trdx-resources/welcome-screen-toradex.png");
    QPixmap map("/usr/bin/trdx-resources/banner3.png");
    QPixmap banner("/usr/bin/trdx-resources/banner.png");

//    QPixmap clouds("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/clouds-gray.jpg");
//    QPixmap whiteLabel("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/white-bar.png");
//    QPixmap topBar("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/top-bar.png");
//    QPixmap trdxLogo("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/toradex-logo-white-small.png");
//    QPixmap txtLabel("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/top-text.png");
//    QPixmap seats("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/seats-plane.png");
//    QPixmap btnGreen("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/btn-toradex.png");
//    QPixmap flightInfo("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/flight-info-trdx.png");
//    QPixmap welcome("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/welcome-screen-toradex.png");
//    QPixmap map("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/banner3.png");
//    QPixmap banner("/home/prjs/Qtworkspace/flightKioskToradex/trdx-resources/banner.png");

    ui->backgroundLb->setPixmap(clouds);
    ui->whiteLabel->setPixmap(whiteLabel);
    ui->topBar->setPixmap(topBar);
    ui->trdxLogo->setPixmap(trdxLogo);
    ui->txtLabel->setPixmap(txtLabel);
    ui->label_7->setPixmap(seats);
    ui->label_9->setPixmap(flightInfo);
    ui->startBtn->setIcon(btnGreen);
    ui->label_6->setPixmap(welcome);
    ui->label_8->setPixmap(map);
    ui->label_3->setPixmap(banner);

    ui->widgetStart->show();
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");

}

flightKiosk::~flightKiosk()
{
    delete ui;
}

void flightKiosk::on_pushBtn1_clicked()
{
    ui->widget1->show();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_startBtn_clicked()
{
    ui->widget1->show();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();
    ui->widgetStart->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn2_clicked()
{
    ui->widget1->hide();
    ui->widget2->show();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn3_clicked()
{
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->show();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn4_clicked()
{
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->show();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
}

void flightKiosk::on_closeBtn_clicked()
{
    ui->widgetStart->show();
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();
}
