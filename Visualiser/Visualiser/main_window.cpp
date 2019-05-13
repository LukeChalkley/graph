#include "main_window.h"

main_window::main_window(QWidget *parent)	: QMainWindow(parent)
{
	ui.setupUi(this);

	graph_widget = new graph_visualiser();


	setCentralWidget(graph_widget);	
}
