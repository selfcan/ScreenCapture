#pragma once
#include "WinBase.h"


class CutMask;
class PixelInfo;
class WinFull : public WinBase
{
	Q_OBJECT
public:
	WinFull(QWidget* parent = nullptr);
	~WinFull();
	void pin();
public:
	PixelInfo* pixelInfo;
	CutMask* cutMask;
protected:
	void paintEvent(QPaintEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;
	void mouseReleaseEvent(QMouseEvent* event) override;
	void closeEvent(QCloseEvent* event) override;
	QImage getTargetImg() override;
private:
	void initWindow();
private:
};

