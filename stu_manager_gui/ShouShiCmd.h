#pragma once
#include <QString>
#include <QPoint>
enum Direct
{
	enError = 0,
	enUp,
	enDown,
	enLeft,
	enRight,
};

enum
{
	MIN_MOVE = 100,
};
// ÷ ∆√¸¡Ó∑÷Œˆ
class ShouShiCmd
{
public:
	ShouShiCmd();
	~ShouShiCmd() {}
	void Move(QPoint* pMovePoint);
	void MoveEnd();
	int GetCmd();
private:
	void ClearShouShi();
private:
	Direct		m_nDirect[2];
	int			m_nCmdInfo;
	int			m_nCurrentDirIndex;
	QPoint		m_ptLastPos;
};


