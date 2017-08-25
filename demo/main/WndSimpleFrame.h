#pragma once

/************************************************************************/
/*
	SimpleFrame����
*/
/************************************************************************/

class CWndSimpleFrame
	: public CWindowWnd
	, public INotifyUI
{
public:
	CWndSimpleFrame(void);
	virtual ~CWndSimpleFrame(void);
	  
	LPCTSTR GetWindowClassName() const { return _T("UISimpleFrame"); }
	UINT GetClassStyle() const{ return UI_CLASSSTYLE_DIALOG; }
	void OnFinalMessage(HWND /*hWnd*/);

	void Init();
	void OnPrepare();
	void Notify(TNotifyUI& msg);

	void OnBtnMin();
	void OnBtnClose();

	//������Ϣ
	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcHitTest(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	
	//��Ϣ���ɴ�������
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	CPaintManagerUI	m_pm; 
};

	