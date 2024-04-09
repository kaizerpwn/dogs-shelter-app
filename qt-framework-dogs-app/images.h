#ifndef IMAGES_H
#define IMAGES_H

#include <QPixmap>

void initializeImages(Ui::MainWindow *ui)
{
    QPixmap dogHeaderImage("../resources/images/dog-header.png");
    ui->dogHeaderImage->setPixmap(dogHeaderImage);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap allIcons("../resources/images/all-icons.png");
    ui->allIcons->setPixmap(allIcons);

    QPixmap dogDescHeaderInfo("../resources/images/dog-desc-header.png");
    ui->dogHeaderImageInfo->setPixmap(dogDescHeaderInfo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge->setPixmap(pawIconOnTheEdge);
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);
}

#endif
