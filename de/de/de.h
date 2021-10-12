#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_de.h"




class de : public QMainWindow
{
    Q_OBJECT

public:
    de(QWidget *parent = Q_NULLPTR);

private:
    Ui::deClass ui;
	int n;

public slots:

	void tirage();
	void score();
};
