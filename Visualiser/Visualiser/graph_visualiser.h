#pragma once

#include <QWidget>
#include "ui_graph_visualiser.h"

class graph_visualiser : public QWidget
{
	Q_OBJECT

public:
	graph_visualiser(QWidget *parent = Q_NULLPTR);
	~graph_visualiser();

private:
	Ui::graph_visualiser ui;
};
