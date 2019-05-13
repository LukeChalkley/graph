#pragma once

#include <QtWidgets/QMainWindow>

#include "graph_visualiser.h"
#include "ui_main_window.h"


class main_window : public QMainWindow
{
	Q_OBJECT

	public:
		main_window(QWidget *parent = Q_NULLPTR);

	private:
		Ui::graph_visualiserClass ui;
		graph_visualiser *graph_widget;
};
