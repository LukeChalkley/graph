#include "graph_render_area.h"

graph_render_area::graph_render_area(QWidget *parent): QWidget(parent)
{
	_graph_obj = vertex;
	_antialiased = false;
	_transformed = false;

	//	Define the brush from the widgets palette that is used to render the background.	
	setBackgroundRole(QPalette::Base);	//	QPalette::Base is typically white.
	
	setAutoFillBackground(true);
}

graph_render_area::~graph_render_area()
{
}

QSize graph_render_area::minimumSizeHint() const
{
	return QSize(100, 100);
}

/*
	We inherit from QWidgets sizeHint property, which holds the recommended size for the widget.
*/
QSize graph_render_area::sizeHint() const
{
	return QSize(400, 200);
}

void graph_render_area::paintEvent(QPaintEvent * event)
{
	QRect vertRect(10, 20, 80, 60);

	QPainter painter(this);
	painter.setPen(_pen);
	painter.setBrush(_brush);

	painter.drawRect(vertRect);
}

