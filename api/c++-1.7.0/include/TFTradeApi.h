#ifndef TF_TRADE_API_H
#define TF_TRADE_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
		class TFTradeSpi;
        class TRADER_API_EXPORT TFTradeApi
        {
        public:
            ///���캯��������UserApi�����
			static TFTradeApi *createTFTradeApi(const char *pszFlowPath, char providerType);
            ///ɾ���ӿڶ�����
            ///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
            virtual void release() = 0;
            ///��ʼ������
            //ret -1: ��ʼ��ʧ��
            //ret -2: �����ļ�����ʧ��
            //ret -3: �ڲ����ݳ�ʼ���쳣
            virtual int init() = 0;
            ///ע��SPI����
            virtual void registerSpi(TFTradeSpi *pSpi) = 0;
            ///����˽������
            ///@param nResumeType ˽�����ش���ʽ  
            ///              TERT_RESTART:�ӱ������տ�ʼ�ش�
            ///              TERT_RESUME:���ϴ��յ������� 
            ///              TERT_QUICK:ֻ���͵�¼��˽����������
            ///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
            virtual void subscribePrivateTopic(TF_RESUME_TYPE nResumeType) = 0;
            ///ע��ǰ�û������ַ
            ///@param pszFrontAddress��ǰ�û������ַ��
            ///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
            ///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
            virtual void registerFront(const char *pszFrontAddress) = 0;
            ///�û���¼����
            virtual int login(TFUserLoginReqField *pLogin) = 0;
            ///�ǳ�����
            virtual int logout() = 0;
            ///����¼������
			virtual int sendOrder(TFOrderReqField *pOrder) = 0;
            ///������������
			virtual int cancelOrder(TFOrderCancelReqField *pOrderCancel) = 0;

       	protected:
            virtual ~TFTradeApi(){};
        };

		class TRADER_API_EXPORT TFHelperApi
		{
		public:
			static TFLoginReqField getLoginInfo();
		};
		
    	class TFTradeSpi
        {
        public:
            ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
            virtual void onConnected(){};
            //��¼������Ӧ
			virtual void onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo){};
            //ע��������Ӧ
			virtual void onLogout(TFRspInfoField *pRspInfo) {};
            ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
            virtual void onDisconnected(int nReason){};
            ///����Ӧ��
			virtual void onError(TFRspInfoField *pRspInfo) {};
            ///����֪ͨ
			virtual void onRtnOrder(TFOrderField *pOrder) {};
            ///�ɽ�֪ͨ
			virtual void onRtnTrade(TFTradeField *pTrade) {};
            ///��������ظ����Ự��
			virtual void onOrderSend(TFOrderReqField *pOrderReq, TFRspInfoField *pRspInfo) {};
            ///��������ظ����Ự��
			virtual void onOrderCancel(TFOrderCancelReqField *pOrderCancelReq, TFRspInfoField *pRspInfo) {};
            ///��������ر�
			virtual void onErrRtnOrderSend(TFOrderReqField *pInputOrder, TFRspInfoField *pRspInfo) {};
            ///��������ر�
			virtual void onErrRtnOrderCancel(TFOrderCancelReqField *pOrderAction, TFRspInfoField *pRspInfo) {};
			///�ֲ�����
			virtual void onRtnPositionChanged(TFUserComboPositionField *pPosition) {};
			
        };
    }
}
#endif