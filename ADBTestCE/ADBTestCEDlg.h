// ADBTestCEDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "resource.h"

// CADBTestCEDlg �Ի���
class CADBTestCEDlg : public CDialog
{
// ����
public:
	CADBTestCEDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ADBTESTCE_DIALOG };


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	afx_msg void OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/);
#endif
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_displayInfo;
	CString m_logBuffer;
	void logcat(TCHAR* log);
};