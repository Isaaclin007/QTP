#ifndef TF_CMD_API_H
#define TF_CMD_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define CMD_API_EXPORT __declspec(dllexport)
#else
#define CMD_API_EXPORT __declspec(dllimport)
#endif
#else
#define CMD_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
		class TFCommandSpi;
        class CMD_API_EXPORT TFCommandApi
        {
        public:
            ///���캯��������UserApi�����
            static TFCommandApi *createTFCmdApi(const char *pszFlowPath, char providerType);
            ///ɾ���ӿڶ�����
            ///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
            virtual void release() = 0;
            ///��ʼ������
            //ret -1: ��ʼ��ʧ��
            //ret -2: �����ļ�����ʧ��
            //ret -3: �ڲ����ݳ�ʼ���쳣
            virtual int init() = 0;
            ///ע��SPI����
            virtual void registerSpi(TFCommandSpi *pSpi) = 0;
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
            /// ��������ӿڶ���
            /////////////////////////////////////////////////////////////////////////////////
            /// ����command
			virtual int sendCommand(TFAdminCommandField *pCmd) = 0;
			///�����ѯ���Rule
			virtual int qryRiskRule(TFQryRiskRuleField *qryRiskRule) = 0;
        protected:
            virtual ~TFCommandApi(){};
        };
        class TFCommandSpi
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
            /////////////////////////////////////////////////////////////////////////////////
            /// ��ѯ�ӿڶ���
            /////////////////////////////////////////////////////////////////////////////////
			///����Command��Ӧ
			virtual void onCommandSend(TFAdminCommandField *pCmd, TFRspInfoField *pRspInfo) {};
			///command֪ͨ
			virtual void onRtnCommand(TFAdminCommandField *pOrder) {};
			///�����ѯ��ع�����Ӧ
			virtual void onQryRiskRule(TFRiskRuleField  *riskRule, TFRspInfoField *pRspInfo) {};
        };
    }
}
#endif