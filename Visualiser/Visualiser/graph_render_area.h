#pragma once

#include <QWidget>
#include <QPen>
#include <QPainter>

class graph_render_area : public QWidget
{
	Q_OBJECT

	public:
		enum graph_object { vertex, edge };

		graph_render_area(QWidget *parent = 0);
		~graph_render_area();

		QSize minimumSizeHint() const override;
		QSize sizeHint() const override;

	protected:
		void paintEvent(QPaintEvent *event) override;

	private:
		graph_object _graph_obj;
		QPen _pen;
		QBrush _brush;
		bool _antialiased;
		bool _transformed;
		QPixmap _pixmap;
};
