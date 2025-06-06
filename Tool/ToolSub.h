﻿#pragma once
#include <QWidget>
#include "ToolBase.h"

class StrokeCtrl;
class ColorCtrl;
class ToolSub : public ToolBase
{
	Q_OBJECT

public:
	ToolSub(QWidget* parent = nullptr);
	~ToolSub();
	bool getSelectState(const QString& btnName);
    QColor getColor();
    int getStrokeWidth();
public:
protected:
	void paintEvent(QPaintEvent* event) override;
	void closeEvent(QCloseEvent* event) override;
private:
	void initPos();
private:
	StrokeCtrl* strokeCtrl;
	ColorCtrl* colorCtrl;
	int triangleX{ 0 };
};
