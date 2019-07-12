#pragma once

#include <vector>
#include "TFUserApiStruct.h"

#if defined(_WIN32)

#ifdef DLL_MarketDataApiExport
#define DLL_MarketDataAPI __declspec(dllexport)
#else
#define DLL_MarketDataAPI __declspec(dllimport)
#endif

#else

#define DLL_MarketDataAPI __attribute__ ((visibility("default")))

#endif

class TFMarketDataSPI
{
public:
	//�ͻ������̨�������Ӻ󣬸÷���������
	virtual void onConnect(){};

	//�ͻ������̨�Ͽ����Ӻ󣬸÷���������
	virtual void onDisConnect(TFErrorInfoField* errorID){};

	//�����׼������
	virtual void onCodeTableReady(TFErrorInfoField* errorID) {};

	//������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	//@param timeLapse �����ϴν��ձ��ĵ�ʱ��
	virtual void onHeartBeatWarning(int timeLapse){};

	//�û���¼Ӧ��
	virtual void onRspLogin(TFErrorInfoField* errorID, int sessionID) {};


	//�û��ǳ�Ӧ��
	virtual void onRspLogout(TFErrorInfoField* errorID, int sessionID){};

	///����Ӧ��
	virtual void onRspError(TFErrorInfoField* errorID, int sessionID) {};

	//���ĺ�ԼӦ��
	virtual void onRspSubMarketData(const TFQuoteSubField* quote, TFErrorInfoField* errorID, int sessionID){};

	//�˶���ԼӦ��
	virtual void onRspUnSubMarketData(const TFQuoteSubField* quote, TFErrorInfoField* errorID, int sessionID){};

	//�������Ӧ��
	//@param isLast ֻ������ʷ����ĵ�����Լ������־
	virtual void onRtnDepthMarketData(const TFQuoteType dataType, const void* data, bool isLast = true) {};

};

class DLL_MarketDataAPI TFMarketDataAPI
{
public:
	//����MarketDataApi
	//@return ��������UserApi
	static TFMarketDataAPI *createMarketDataApi(TFMDPType serverType, const char *initPath = "");
	virtual void subscribeMarketDataTopic(TFMDPSubscribeMode subscribemode) = 0;

	//��ȡAPI�İ汾��Ϣ
	//@retrun ��ȡ���İ汾��
	virtual const char * getApiVersion() = 0;

	//ע��ص��ӿ�
	//@param pSpi �����Իص��ӿ����ʵ��
	virtual void registerSpi(TFMarketDataSPI *spi) = 0;

	//ɾ���ӿڶ�����
	//@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void release() = 0;

	//��ʼ��
	//@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual bool init() = 0;

	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int join() = 0;

	//��ȡָ���г������
	virtual bool getCodeTable(TFCodeKeyField* reqCodeKey, TFCodeInfoField ** rspCodeinfo, int* num) = 0;

	//ϵͳ�û���¼����
	virtual void reqLogin(TFLoginInfoField* reqLoginItem, int sessionID) = 0;

	//ϵͳ�û��ǳ�����
	virtual void reqLogout(TFLoginInfoField* reqLoginItem, int sessionID) = 0;

	//���鶩������
	virtual void subscribeQuote(TFQuoteSubField* item, int num) = 0;

	//�����˶�����
	virtual void unSubscribeQuote(TFQuoteSubField* item, int num) = 0;

protected:
	~TFMarketDataAPI(){};
};
