#ifndef TF_QUERY_API_H
#define TF_QUERY_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define QUERY_API_EXPORT __declspec(dllexport)
#else
#define QUERY_API_EXPORT __declspec(dllimport)
#endif
#else
#define QUERY_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
        class TFQuerySpi;
        class QUERY_API_EXPORT TFQueryApi
        {
        public:
            ///���캯��������UserApi�����
            static TFQueryApi *createTFQueryApi(const char *pszFlowPath, char providerType);
            ///ɾ���ӿڶ�����
            ///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
            virtual void release() = 0;
            ///��ʼ������
            //ret -1: ��ʼ��ʧ��
            //ret -2: �����ļ�����ʧ��
            //ret -3: �ڲ����ݳ�ʼ���쳣
            virtual int init() = 0;
            ///ע��SPI����
            virtual void registerSpi(TFQuerySpi *pSpi) = 0;
            ///ע��ǰ�û������ַ
            ///@param pszFrontAddress��ǰ�û������ַ��
            ///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
            ///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
            virtual void registerFront(const char *pszFrontAddress) = 0;
            ///�û���¼����
            //ret  0: �ɹ�
            //ret -1: δ��������
            //ret -2: �����������ʧ��
            //ret <0������ֵ : ����δ֪����
			virtual int login(TFUserLoginReqField *pLogin) = 0;
            ///�ǳ�����
            virtual int logout() = 0;
            /////////////////////////////////////////////////////////////////////////////////
            /// ��ѯ�ӿڶ���
            /////////////////////////////////////////////////////////////////////////////////
            ///�����ѯ��Լ
			virtual int qryInstrument(TFQryInstrumentField *qryInstrument) = 0;
			///�����ѯ�˻���Ϣ
			virtual int qryAccount(TFQryAccountField *qryAccount) = 0;
            ///�����ѯ�ʽ��˻�
			virtual int qryAccountAsset(TFQryAccountAssetField *qryAccountAsset) = 0;
            ///�����ѯͶ���ֲ߳�
			virtual int qryPosition(TFQryPositionField *qryPosition) = 0;
            ///�����ѯ��֤����(�ڻ����ã�
            virtual int qryMarginRate(TFQryMarginRateField *qryMarginRate) = 0;
            ///�����ѯ��������(�ڻ����ã�
            //virtual int qryCommissionRate(TFQryCommissionRateField *qryCommissionRate) = 0;
            ///�����ѯ����
			virtual int qryOrder(TFQryOrderField *qryOrder) = 0;
            ///�����ѯ�ɽ�
			virtual int qryTrade(TFQryTradeField *qryTrade) = 0;
			///����combo���
			virtual int qryCombo(TFQryComboField *qryCombo) = 0;
			///�����ѯ�¹��깺��Լ
			virtual int qryIpoInstrument(TFQryIpoInstrumentField *qryIpoInstrument) = 0;
			///�����ѯ�¹��깺���
			virtual int qryIpoLimit(TFQryIpoLimitField *qryIpoLimit) = 0;

		protected:
            virtual ~TFQueryApi(){};
        };

        class TFQuerySpi
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
            /////////////////////////////////////////////////////////////////////////////////
            /// ��ѯ�ӿڶ���
            /////////////////////////////////////////////////////////////////////////////////
            ///�����ѯ��Լ��Ӧ
			virtual void onQryInstrument(TFInstrumentField  *pInstrument, TFRspInfoField *pRspInfo) {};
			///�����ѯ�˻���Ϣ��Ӧ
			virtual void onQryAccount(TFAccountField *pAccount, TFRspInfoField *pRspInfo){};
            ///�����ѯ�ʽ��˻���Ӧ
			virtual void onQryAccountAsset(TFUserAccountAssetField *pAccount, TFRspInfoField *pRspInfo) {};
            ///�����ѯͶ���ֲ߳���Ӧ
			virtual void onQryPosition(TFUserComboPositionField *pPosition, TFRspInfoField *pRspInfo) {};
            ///�����ѯ��֤������Ӧ(�ڻ����ã�
            virtual void onQryMarginRate(TFMarginRateField *pMarginRate, TFRspInfoField *pRspInfo) {};
            ///�����ѯ����������Ӧ(�ڻ����ã�
            virtual void onQryCommissionRate(TFFeeSetField *pCommissionRate, TFRspInfoField *pRspInfo) {};
            ///�����ѯ������Ӧ
			virtual void onQryOrder(TFOrderField *pOrder, TFRspInfoField *pRspInfo) {};
            ///�����ѯ�ɽ���Ӧ
			virtual void onQryTrade(TFTradeField *pTrade, TFRspInfoField *pRspInfo) {};
			///�����ѯcombo��Ӧ
			virtual void onQryCombo(TFAccountComboField *pCombo, TFRspInfoField *pRspInfo) {};
			///�����ѯ��Լ��Ӧ
			virtual void onQryIpoInstrument(TFIpoInstrumentField  *pIpoInstrument, TFRspInfoField *pRspInfo) {};
			///�����ѯ��Լ��Ӧ
			virtual void onQryIpoLimit(TFIpoLimitField  *pIpoLimit, TFRspInfoField *pRspInfo) {};
        };
    }
}
#endif