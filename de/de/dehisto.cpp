#include "dehisto.h"
#include <QLocale>

dehisto::dehisto(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void dehisto :: historque()
{
	ui.historique->setVisible(true);
	ui.nb2jets->setVisible(true);
	ui.nbrDeJets->setVisible(true);
	ui.remiszero->setVisible(true);
	ui.score->setVisible(true);
	ui.scoretotal->setVisible(true);
	ui.tableWidget->setVisible(true);
	ui.tirageDe->setVisible(true);
	ui.totaldestour->setVisible(true);
	

}