#include "ShouShiCmd.h"
#include <QtAlgorithms>

ShouShiCmd::ShouShiCmd()
	: m_nCmdInfo(0)
	, m_nCurrentDirIndex(0)
{
	memset(m_nDirect, 0, sizeof(m_nDirect));
	m_ptLastPos = QPoint(0, 0);
}

void ShouShiCmd::Move(QPoint* pMovePoint)
{
	if (m_nCurrentDirIndex > 1 || m_nCurrentDirIndex < 0)
	{
		return;
	}

	if (m_ptLastPos == QPoint(0, 0))
	{
		m_ptLastPos = *pMovePoint;
	}

	if (m_nCurrentDirIndex == 1)
	{
		int a = 0;
	}

	int nHDel = (*pMovePoint).y()-m_ptLastPos.y() ;
	int nWDel = (*pMovePoint).x()-m_ptLastPos.x() ;
	int nMaxMove = qMax(qAbs(nHDel), qAbs(nWDel));
	if (nMaxMove < MIN_MOVE)
	{
		return;
	}

	//ˮƽ
	if (qAbs(nWDel) >= qAbs(nHDel))
	{
		if (nWDel > 0)
		{
			m_nDirect[m_nCurrentDirIndex] = enRight;
		}
		else
		{
			m_nDirect[m_nCurrentDirIndex] = enLeft;
		}
	}
	else
	{
		if (nHDel > 0)
		{
			m_nDirect[m_nCurrentDirIndex] = enDown;
		}
		else
		{
			m_nDirect[m_nCurrentDirIndex] = enUp;
		}
	}
	m_nCurrentDirIndex++;
	m_ptLastPos = *pMovePoint;
}

void ShouShiCmd::ClearShouShi()
{
	m_nCurrentDirIndex = 0;
	memset(m_nDirect, 0, sizeof(m_nDirect));
	m_ptLastPos = QPoint(0, 0);
}
void ShouShiCmd::MoveEnd()
{
	if (enError == m_nDirect[0] || enError == m_nDirect[1])
	{
		m_nCmdInfo = 0;
	}
	else if (enDown == m_nDirect[0] && enRight == m_nDirect[1])
	{
		m_nCmdInfo = 1;
	}
	else
	{
		m_nCmdInfo = 2;
	}
}

int ShouShiCmd::GetCmd()
{
	return m_nCmdInfo;
}
