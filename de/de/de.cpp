#include "de.h"
#include <QLocale>

de::de(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}
void de::tirage()
{

	n = rand() % 6 + 1;
	
}

void de::score()
{

	ui.score->setText(QLocale().toString(n));
}