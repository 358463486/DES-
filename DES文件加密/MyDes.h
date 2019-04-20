// MyDes.h: interface for the CDes class.
//2014.4 �޸�Ϊ��C�ӿڣ��������ڿ���̨����

#if !defined _MyDes_H_
#define _MyDes_H_


class CMyDes  
{
public:
//	CMyDes(CString strin, CString strkey, bool mode);
	CMyDes(char* pIn, int len, char*pKey, bool mode);	//20140.4�޸�Ϊ��C�ӿ�
	virtual ~CMyDes();
//	void DoDes(CString& strout);     
	int DoDes(unsigned char *);							//20140.4�޸�Ϊ��C�ӿ�
private:
	unsigned char *m_src;
	unsigned char *m_des;
	unsigned char *m_key;
	int m_len;
	bool m_mode;
	void des(unsigned char *source,unsigned char * dest,unsigned char * inkey, bool flg);
};

#endif // !defined(_MyDes_H_)
