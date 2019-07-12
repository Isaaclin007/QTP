
#pragma once

#ifndef TF_DATA_STRUCT_H
#define TF_DATA_STRUCT_H

#include "string.h"
#include "TFDataType.h"

namespace tfzq{ namespace stp{
 
    
///��������
struct TFTradeDateField
{
    ///����ͨ�����
    int ChannelID;
    ///������
    int TradingDay;
    ///��һ������
    int NextTradingDay;
    ///ϵͳ״̬
    char SystemStatus;
    ///�����ʼ��
    int Required;
      
    ///initialized to zero
    TFTradeDateField(){
        memset(this, 0 , sizeof(TFTradeDateField));
    }
};
    
///��Ȩ��Լ
struct TFInstrumentField
{
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///��Ʒ����
    char ProductID[TF_PRODUCTID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///֤ȯ���״���
    char InstrumentCode[TF_INSTRUMENTCODE_LEN]; 
    ///��Լ����
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///֤ȯ���
    char ProductClass;
    ///��Լ��������
    int VolumeMultiple;
    ///��С�䶯��λ
    double PriceTick;
    ///������
    int OpenDate;
    ///������
    int ExpireDate;
    ///��ǰ�Ƿ���
    int IsTrading;
    ///��Ȩִ�м۸�
    double ExecPrice;
    ///��Ȩ���ֱ�֤��
    double UnitMargin;
    ///������
    int TradingDay;
    ///��Ȩ��
    int ExerciseDay;
    ///��ʼ������
    int StartDeliveryDay;
    ///����������
    int EndDeliveryDay;
    ///�м�����µ���
    int MaxMarketOrderVolume;
    ///�м���С�µ���
    int MinMarketOrderVolume;
    ///�޼�����µ���
    int MaxLimitOrderVolume;
    ///�޼���С�µ���
    int MinLimitOrderVolume;
    ///��ͣ���
    double UpperLimitPrice;
    ///��ͣ���
    double LowerLimitPrice;
    ///��Ȩ����
    char OptionType;
    ///��С����䶯����
    int BuyVolumeTick;
    ///��С�����䶯����
    int SellVolumeTick;
    ///������Ʒ����
    char UnderlyingInstrumentID[TF_UNDERLYINGINSTRUMENTID_LEN]; 
    ///������Ʒ����
    int UnderlyingMultiple;
    ///�ر�֤ȯ��־
    char StockRealBack;
    ///�ر��ʽ��־
    char FundRealBack;
    ///��Ȩִ�з�ʽ
    char UnderlyingType;
    ///�����̼�
    double PreClosePrice;
    ///�ϴν����
    double PreSettlementPrice;
    ///�ٽ����ڱ�֤���ϸ�����
    double MarginRatioExpiring;
    ///����ͨ�����
    int ChannelID;
    ///֤ȯ�������
    char SubProductClass;
      
    ///initialized to zero
    TFInstrumentField(){
        memset(this, 0 , sizeof(TFInstrumentField));
    }
};
    
///��˾��Ϣ
struct TFCompanyField
{
    ///��˾���
    int CompanyID;
    ///��˾����
    char CompanyName[TF_COMPANYNAME_LEN]; 
    ///��˾����
    char CompanyType;
    ///��ϵ��
    char LinkMan[TF_LINKMAN_LEN]; 
    ///��ϵ��ַ
    char Address[TF_ADDRESS_LEN]; 
    ///��ϵ�绰
    char Tel[TF_TEL_LEN]; 
    ///��������
    char Email[TF_EMAIL_LEN]; 
      
    ///initialized to zero
    TFCompanyField(){
        memset(this, 0 , sizeof(TFCompanyField));
    }
};
    
///��˾����Ա��Ϣ
struct TFOperatorField
{
    ///����Ա����
    int OperatorID;
    ///��˾���
    int CompanyID;
    ///����Ա����
    char OperatorName[TF_OPERATORNAME_LEN]; 
    ///����
    char Password[TF_PASSWORD_LEN]; 
    ///����Ա��ɫ
    char OpRoles[TF_OPROLES_LEN]; 
    ///(�ѷϳ�)����Ա���Բ�ѯ���˻�����
    char QryAccountIDs[TF_QRYACCOUNTIDS_LEN]; 
    ///(�ѷϳ�)����Ա���Բ������˻�����
    char OpAccountIDs[TF_OPACCOUNTIDS_LEN]; 
    ///����Ա���Բ�ѯ����ϼ���
    char QryComboIDs[TF_QRYCOMBOIDS_LEN]; 
    ///����Ա���Բ�������ϼ���
    char OpComboIDs[TF_OPCOMBOIDS_LEN]; 
    ///����Ա�绰
    char OpTel[TF_OPTEL_LEN]; 
    ///����Ա����
    char OpEmail[TF_OPEMAIL_LEN]; 
    ///ע��ʱ��
    char RegiDate[TF_REGIDATE_LEN]; 
    ///״̬��־
    char EnbFlag;
    ///�޸�ʱ��
    char UptTime[TF_UPTTIME_LEN]; 
    ///��¼ʱ��
    char LogTime[TF_LOGTIME_LEN]; 
    ///�����޸�ʱ��
    char PwdUptTime[TF_PWDUPTTIME_LEN]; 
    ///��¼����ʱ��
    char LogErrTime[TF_LOGERRTIME_LEN]; 
    ///����������
    int PwdErrCnt;
    ///��ע
    char Remark[TF_REMARK_LEN]; 
    ///��˾����
    char CompanyType;
    ///MAC��ַ�б�
    char MacAddresses[TF_MACADDRESSES_LEN]; 
    ///�����ⲿ�����־
    bool EnbInternet;
      
    ///initialized to zero
    TFOperatorField(){
        memset(this, 0 , sizeof(TFOperatorField));
    }
};
    
///ϵͳȨ����Ϣ
struct TFAuthInfoField
{
    ///Ȩ��ID
    char AuthID[TF_AUTHID_LEN]; 
    ///Ȩ�޼���
    int AuthLevel;
    ///Ȩ������
    char AuthDesc[TF_AUTHDESC_LEN]; 
    ///��Ȩ��
    char ParentID[TF_PARENTID_LEN]; 
    ///�Ƿ����¼�Ȩ��
    int HaveSon;
    ///˳���
    int ID;
    ///״̬��־
    char EnbFlag;
    ///ȱʡ״̬
    int IsDefault;
    ///Ȩ���Ƿ���Ϊ������ʾ�ڿ�̨
    int IsDisplay;
    ///����
    char Action[TF_ACTION_LEN]; 
    ///����
    char Resv[TF_RESV_LEN]; 
    ///����ʱ��
    char CrtTime[TF_CRTTIME_LEN]; 
    ///���һ�θ���ʱ��
    char LastUptTime[TF_LASTUPTTIME_LEN]; 
    ///��������
    char ActionType;
    ///Ȩ������
    char AuthType;
      
    ///initialized to zero
    TFAuthInfoField(){
        memset(this, 0 , sizeof(TFAuthInfoField));
    }
};
    
///����ԱȨ����Ϣ
struct TFOpAuthInfoField
{
    ///����Ա����
    int OperatorID;
    ///Ȩ��ID
    char AuthID[TF_AUTHID_LEN]; 
    ///״̬��־
    char EnbFlag;
    ///���һ��ʹ��ʱ��
    char LastUsrTime[TF_LASTUSRTIME_LEN]; 
    ///ʹ�ô���
    int UsrCount;
    ///����
    char Resv[TF_RESV_LEN]; 
    ///����ʱ��
    char CrtTime[TF_CRTTIME_LEN]; 
    ///���һ�θ���ʱ��
    char LastUptTime[TF_LASTUPTTIME_LEN]; 
      
    ///initialized to zero
    TFOpAuthInfoField(){
        memset(this, 0 , sizeof(TFOpAuthInfoField));
    }
};
    
///�ӿ�Ȩ��
struct TFIntefAuthInfoField
{
    ///�ӿڱ�ʶ
    char CmdID[TF_CMDID_LEN]; 
    ///Ȩ��ID
    char AuthID[TF_AUTHID_LEN]; 
      
    ///initialized to zero
    TFIntefAuthInfoField(){
        memset(this, 0 , sizeof(TFIntefAuthInfoField));
    }
};
    
///����Ա��־
struct TFOpLogField
{
    ///ϵͳ����
    int SysDate;
    ///ϵͳʱ��
    int SysTime;
    ///����Ա����
    int OperatorID;
    ///����
    char Action[TF_ACTION_LEN]; 
    ///��������
    char ActionDesc[TF_ACTIONDESC_LEN]; 
      
    ///initialized to zero
    TFOpLogField(){
        memset(this, 0 , sizeof(TFOpLogField));
    }
};
    
///��ɫ��Ϣ
struct TFRoleField
{
    ///��ɫ��
    char RoleID[TF_ROLEID_LEN]; 
    ///��ɫ����
    char RoleName[TF_ROLENAME_LEN]; 
    ///��˾����
    char CompanyType;
      
    ///initialized to zero
    TFRoleField(){
        memset(this, 0 , sizeof(TFRoleField));
    }
};
    
///��ɫȨ����Ϣ
struct TFRoleAuthField
{
    ///��ɫ��
    char RoleID[TF_ROLEID_LEN]; 
    ///Ȩ��ID
    char AuthID[TF_AUTHID_LEN]; 
      
    ///initialized to zero
    TFRoleAuthField(){
        memset(this, 0 , sizeof(TFRoleAuthField));
    }
};
    
///�����ļ��б�
struct TFFileDownloadField
{
    ///ϵͳ����
    int SysDate;
    ///ϵͳ��ˮ
    char SysSeqID[TF_SYSSEQID_LEN]; 
    ///����Ա����
    int OperatorID;
    ///�ļ�����
    char FileName[TF_FILENAME_LEN]; 
    ///�ļ��洢·��
    char FileUrl[TF_FILEURL_LEN]; 
    ///�ļ���ѯ����
    char FileInfo[TF_FILEINFO_LEN]; 
    ///����ִ��״̬
    char FileFlag;
    ///��׺�ļ�����
    char FilePostFix[TF_FILEPOSTFIX_LEN]; 
    ///�ļ���������
    int CreateDate;
    ///�ļ�����ʱ��
    int CreateTime;
    ///��������
    int UpdateDate;
    ///����޸�ʱ��
    int UpdateTime;
      
    ///initialized to zero
    TFFileDownloadField(){
        memset(this, 0 , sizeof(TFFileDownloadField));
    }
};
    
///��̨���б�
struct TFCmdSequenceField
{
    ///��������
    char SeqName[TF_SEQNAME_LEN]; 
    ///��ǰ����ֵ
    int CurrentVal;
    ///��ǰ����ֵ
    int IncrementVal;
      
    ///initialized to zero
    TFCmdSequenceField(){
        memset(this, 0 , sizeof(TFCmdSequenceField));
    }
};
    
///����Ա����������Ϣ
struct TFOpMarketField
{
    ///��˾���
    int CompanyID;
    ///������������
    char MarketDataType;
    ///����Ա����
    int OperatorID;
    ///�������Ӹ���
    int LimitConNum;
    ///�����ĸ���
    int LimitSubNum;
    ///����IP��ַ������
    char IpAddress[TF_IPADDRESS_LEN]; 
      
    ///initialized to zero
    TFOpMarketField(){
        memset(this, 0 , sizeof(TFOpMarketField));
    }
};
    
///��˾����ɷ���Ϣ
struct TFMarketDataPayField
{
    ///��˾���
    int CompanyID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///�ɷѿ�Ŀ
    char PaySubject;
    ///����ɷ�ʱ��
    char LastPayTime[TF_LASTPAYTIME_LEN]; 
    ///�ɷѽ��
    double PayBalance;
    ///��ʼ����
    int StartDate;
    ///��������
    int EndDate;
      
    ///initialized to zero
    TFMarketDataPayField(){
        memset(this, 0 , sizeof(TFMarketDataPayField));
    }
};
    
///��˾����ɷ���ˮ
struct TFMarketDataPayFlowField
{
    ///��ˮ���
    int PayID;
    ///��˾���
    int CompanyID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///�ɷѿ�Ŀ
    char PaySubject;
    ///�ɷ�ʱ��
    char PayTime[TF_PAYTIME_LEN]; 
    ///�ɷѽ��
    double PayBalance;
    ///��ʼ����
    int StartDate;
    ///��������
    int EndDate;
      
    ///initialized to zero
    TFMarketDataPayFlowField(){
        memset(this, 0 , sizeof(TFMarketDataPayFlowField));
    }
};
    
///�˻���Ϣ
struct TFAccountField
{
    ///�˻����
    int AccountID;
    ///��˾���
    int CompanyID;
    ///�ʽ��˻�����
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///Ͷ���ߴ���
    int InvestorID;
    ///�˻�����
    char AccountType;
    ///״̬��־
    char EnbFlag;
    ///������
    int TradingDay;
    ///����ͨ�����
    int ChannelID;
    ///Ĭ�����
    int DefaultCombo;
    ///��Ȩ�˻���֤�𸡶���
    double MarginRatio;
      
    ///initialized to zero
    TFAccountField(){
        memset(this, 0 , sizeof(TFAccountField));
    }
};
    
///Ͷ�����
struct TFAccountComboField
{
    ///��ϱ��
    int ComboID;
    ///�˻����
    int AccountID;
    ///�������
    char ComboName[TF_COMBONAME_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///Ͷ����϶�Ӧ�ĺ�Լ����
    char KeyInstrumentID[TF_KEYINSTRUMENTID_LEN]; 
    ///�Ƿ��Ծ
    int IsActive;
    ///ȱʡ״̬
    int IsDefault;
    ///������
    int TradingDay;
    ///�������ڽ���
    bool DayTradeEnable;
      
    ///initialized to zero
    TFAccountComboField(){
        memset(this, 0 , sizeof(TFAccountComboField));
    }
};
    
///Ͷ������Ϣ
struct TFInvestorField
{
    ///Ͷ���ߴ���
    int InvestorID;
    ///������
    int TradingDay;
    ///���͹�˾����
    char BrokerID[TF_BROKERID_LEN]; 
    ///ĸ�˻�����
    char BrokerInvestorID[TF_BROKERINVESTORID_LEN]; 
    ///�û�����
    char UserID[TF_USERID_LEN]; 
    ///�ͻ���
    char ClientID[TF_CLIENTID_LEN]; 
    ///�ʽ��˻�����
    char AccountCode[TF_ACCOUNTCODE_LEN]; 
    ///����
    char Password[TF_PASSWORD_LEN]; 
    ///Ͷ��������
    char InvestorName[TF_INVESTORNAME_LEN]; 
    ///Ͷ��������
    char InvestorType;
    ///֤������
    char IDCardType;
    ///֤����
    char IDCardNo[TF_IDCARDNO_LEN]; 
    ///�Ƿ��Ծ
    int IsActive;
    ///������
    char GroupID[TF_GROUPID_LEN]; 
    ///O32����Ա����
    char O32OperatorNo[TF_O32OPERATORNO_LEN]; 
    ///O32����Ա����
    char O32OperatorPwd[TF_O32OPERATORPWD_LEN]; 
    ///O32�������
    char O32AccountCode[TF_O32ACCOUNTCODE_LEN]; 
    ///O32��ϱ��
    char O32CombiNo[TF_O32COMBINO_LEN]; 
    ///O32�ʲ���Ԫ���
    char O32AssetNo[TF_O32ASSETNO_LEN]; 
      
    ///initialized to zero
    TFInvestorField(){
        memset(this, 0 , sizeof(TFInvestorField));
    }
};
    
///Ͷ���߽��ױ���
struct TFTradingCodeField
{
    ///������
    int TradingDay;
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///���ױ�������
    char TradingCodeType;
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///Ӫҵ������
    char BranchID[TF_BRANCHID_LEN]; 
    ///ϯλ��
    char SeatID[TF_SEATID_LEN]; 
    ///Ͷ�����˻��ӱ���
    char OptClientID[TF_OPTCLIENTID_LEN]; 
    ///�Ƿ��Ծ
    int IsActive;
      
    ///initialized to zero
    TFTradingCodeField(){
        memset(this, 0 , sizeof(TFTradingCodeField));
    }
};
    
///����ͨ����Ϣ
struct TFTradeChannelField
{
    ///����ͨ�����
    int ChannelID;
    ///ͨ������
    char ChannelName[TF_CHANNELNAME_LEN]; 
    ///ͨ������
    char ChannelType;
    ///�ֲֽӿ�IP
    char SysIP[TF_SYSIP_LEN]; 
    ///�ֲֽӿڶ˿�
    char SysPort[TF_SYSPORT_LEN]; 
    ///�ֲ���������
    char ChannelConfig[TF_CHANNELCONFIG_LEN]; 
    ///������
    int TradingDay;
      
    ///initialized to zero
    TFTradeChannelField(){
        memset(this, 0 , sizeof(TFTradeChannelField));
    }
};
    
///�˻��ʽ���Ϣ
struct TFAccountAssetField
{
    ///������
    int TradingDay;
    ///�˻����
    int AccountID;
    ///���ִ���
    char CurrencyID[TF_CURRENCYID_LEN]; 
    ///�ϴδ���
    double PreDeposit;
    ///�ϴ�ռ�õı�֤��
    double PreMargin;
    ///�ϴν���׼����
    double PreBalance;
    ///��ǰ�ʽ�
    double Balance;
    ///�����
    double Deposit;
    ///����ı�֤��
    double FrozenMargin;
    ///�����������
    double FrozenCommission;
    ///������ʽ�
    double FrozenCash;
    ///�ֹ�������ʽ�
    double ManualFrozenCash;
    ///�˶Ե����ʽ�
    double CheckCash;
    ///��λռ�ñ�֤��
    double UseMargin;
    ///������
    double Commission;
    ///��ȡ�ʽ�
    double WithdrawQuota;
    ///��֤��������
    double Credit;
    ///�ֽ�
    double Available;
    ///ƽ��ӯ��
    double CloseProfit;
    ///�ֲ�ӯ��
    double PositionProfit;
    ///�ʽ���
    double CashIn;
    ///������
    double CashOut;
    ///ȱʡ״̬
    int IsDefault;
      
    ///initialized to zero
    TFAccountAssetField(){
        memset(this, 0 , sizeof(TFAccountAssetField));
    }
};
    
///��ѯ�˻��ʽ���Ϣ
struct TFUserAccountAssetField
{
    ///�˻����
    int AccountID;
    ///�ʽ��˻�����
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///��ǰ�ʽ�
    double Balance;
    ///�����ʽ�
    double EnableBalance;
    ///������ʽ�
    double FrozenCash;
    ///�ֹ�������ʽ�
    double ManualFrozenCash;
    ///�˶Ե����ʽ�
    double CheckCash;
    ///��λռ�ñ�֤��
    double UseMargin;
      
    ///initialized to zero
    TFUserAccountAssetField(){
        memset(this, 0 , sizeof(TFUserAccountAssetField));
    }
};
    
///�˻��ֲ���Ϣ
struct TFAccountPositionField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�ֲֶ�շ���
    char PosiDirection;
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///���ױ�������
    char TradingCodeType;
    ///������
    int TradingDay;
    ///��ֲ�
    double YdPosition;
    ///�ϴ�ռ�õı�֤��
    double PreMargin;
    ///��ֲ�
    double TodayPosition;
    ///�ֲܳ�
    double TotalPosition;
    ///��λռ�ñ�֤��
    double UseMargin;
    ///������
    double OpenVolume;
    ///ƽ����
    double CloseVolume;
    ///ƽ�����
    double CloseYdVolume;
    ///���ν����
    double SettlementPrice;
    ///�ϴν����
    double PreSettlementPrice;
    ///������
    double Commission;
    ///�����������
    double FrozenCommission;
    ///����ı�֤��
    double FrozenMargin;
    ///���ֳɱ�
    double OpenCost;
    ///�ֲֳɱ�
    double PositionCost;
    ///ƽ��ӯ��
    double CloseProfit;
    ///�ֲ�ӯ��
    double PositionProfit;
    ///���ֽ��
    double OpenAmount;
    ///ƽ�ֽ��
    double CloseAmount;
    ///ƽ��ֽ��
    double CloseYdAmount;
    ///��ͷ����
    double LongFrozen;
    ///���ֶ�����
    double LongFrozenAmount;
    ///��ͷ����
    double ShortFrozen;
    ///���ֶ�����
    double ShortFrozenAmount;
    ///��������
    double FrozenVolume;
    ///�ֹ���������
    double ManualFrozenVolume;
    ///�˶Ե�������
    double CheckVolume;
    ///��������
    double EnableVolume;
      
    ///initialized to zero
    TFAccountPositionField(){
        memset(this, 0 , sizeof(TFAccountPositionField));
    }
};
    
///��ѯ��ϳֲ���Ϣ
struct TFUserComboPositionField
{
    ///�˻����
    int AccountID;
    ///�ʽ��˻�����
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///��ϱ��
    int ComboID;
    ///�������
    char ComboName[TF_COMBONAME_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///��Լ����
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///��ֲ�
    double YdPosition;
    ///��ֲ�
    double TodayPosition;
    ///�ֲܳ�
    double TotalPosition;
    ///��ֶ�������
    double YdFrozenVolume;
    ///��ֶ�������
    double TodayFrozenVolume;
    ///��������
    double FrozenVolume;
    ///�ֹ���������
    double ManualFrozenVolume;
    ///�˶Ե�������
    double CheckVolume;
    ///��ֺ˶Ե�������
    double TodayCheckVolume;
    ///��ֺ˶Ե�������
    double YdCheckVolume;
    ///��ֿ�������
    double TodayEnableVolume;
    ///��ֿ�������
    double YdEnableVolume;
    ///��������
    double EnableVolume;
    ///�ֲֳɱ�
    double PositionCost;
    ///�ɱ���
    double CostPrice;
    ///���¼�
    double LastPrice;
    ///�ֲ���ֵ
    double OpenMarketValue;
    ///����ӯ��
    double FloatProfi;
    ///��ͷ����
    double LongFrozen;
    ///��ͷ����
    double ShortFrozen;
    ///���ڳ�ʼ����
    int DayTradeInitVolume;
    ///���ڿ�������
    int DayTradeAvailVolume;
    ///����ӯ��
    double DayTradeFloatProfitLoss;
    ///���ڳֲֳɱ����
    double DayTradePositionCost;
    ///����ƽ��ӯ��
    double DayTradeCloseProfit;
    ///��������
    double DayTradeAccumBuy;
    ///��������
    double DayTradeAccumSell;
    ///���ڳֲֶ�������
    int DayTradePosFrozen;
    ///�ֲֶ�շ���
    char PosiDirection;
    ///Ͷ���ױ���־
    char HedgeFlag;
    ///ƽ��ӯ��
    double CloseProfit;
    ///��λռ�ñ�֤��
    double UseMargin;
      
    ///initialized to zero
    TFUserComboPositionField(){
        memset(this, 0 , sizeof(TFUserComboPositionField));
    }
};
    
///��ϳֲ���Ϣ
struct TFComboPositionField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///��ϱ��
    int ComboID;
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�ֲֶ�շ���
    char PosiDirection;
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///���ױ�������
    char TradingCodeType;
    ///������
    int TradingDay;
    ///��ֲ�
    double YdPosition;
    ///�ϴ�ռ�õı�֤��
    double PreMargin;
    ///��ֲ�
    double TodayPosition;
    ///�ֲܳ�
    double TotalPosition;
    ///��λռ�ñ�֤��
    double UseMargin;
    ///������
    double OpenVolume;
    ///ƽ����
    double CloseVolume;
    ///ƽ�����
    double CloseYdVolume;
    ///���ν����
    double SettlementPrice;
    ///�ϴν����
    double PreSettlementPrice;
    ///������
    double Commission;
    ///�����������
    double FrozenCommission;
    ///����ı�֤��
    double FrozenMargin;
    ///���ֳɱ�
    double OpenCost;
    ///�ֲֳɱ�
    double PositionCost;
    ///ƽ��ӯ��
    double CloseProfit;
    ///�ֲ�ӯ��
    double PositionProfit;
    ///���ֽ��
    double OpenAmount;
    ///ƽ�ֽ��
    double CloseAmount;
    ///ƽ��ֽ��
    double CloseYdAmount;
    ///��ͷ����
    double LongFrozen;
    ///���ֶ�����
    double LongFrozenAmount;
    ///��ͷ����
    double ShortFrozen;
    ///���ֶ�����
    double ShortFrozenAmount;
    ///��ֶ�������
    double YdFrozenVolume;
    ///��ֶ�������
    double TodayFrozenVolume;
    ///��������
    double FrozenVolume;
    ///�ֹ���������
    double ManualFrozenVolume;
    ///�˶Ե�������
    double CheckVolume;
    ///��ֺ˶Ե�������
    double TodayCheckVolume;
    ///��ֺ˶Ե�������
    double YdCheckVolume;
    ///��������
    double EnableVolume;
    ///��ֿ�������
    double TodayEnableVolume;
    ///��ֿ�������
    double YdEnableVolume;
    ///���ڳ�ʼ����
    int DayTradeInitVolume;
    ///���ڿ�������
    int DayTradeAvailVolume;
    ///����ӯ��
    double DayTradeFloatProfitLoss;
    ///���ڳֲֳɱ����
    double DayTradePositionCost;
    ///����ƽ��ӯ��
    double DayTradeCloseProfit;
    ///��������
    double DayTradeAccumBuy;
    ///��������
    double DayTradeAccumSell;
    ///���ڳֲֶ�������
    int DayTradePosFrozen;
      
    ///initialized to zero
    TFComboPositionField(){
        memset(this, 0 , sizeof(TFComboPositionField));
    }
};
    
///�˻��ֲ���ϸ
struct TFAccountPositionDtlField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///��ϱ��
    int ComboID;
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�ֲֶ�շ���
    char PosiDirection;
    ///������
    int OpenDate;
    ///�ɽ����
    char TradeID[TF_TRADEID_LEN]; 
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///���ױ�������
    char TradingCodeType;
    ///������
    int TradingDay;
    ///�ɽ���
    int Volume;
    ///���ν����
    double SettlementPrice;
    ///�ϴν����
    double PreSettlementPrice;
    ///����
    double OpenPrice;
    ///Ͷ���߱�֤��
    double Margin;
    ///Ͷ���߱�֤����
    double MarginRate;
    ///ƽ����
    double CloseVolume;
    ///ƽ�ֽ��
    double CloseAmount;
      
    ///initialized to zero
    TFAccountPositionDtlField(){
        memset(this, 0 , sizeof(TFAccountPositionDtlField));
    }
};
    
///����������Ϣ
struct TFFeeSetField
{
    ///��˾���
    int CompanyID;
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///֤ȯ���
    char ProductClass;
    ///��Ʒ����
    char ProductID[TF_PRODUCTID_LEN]; 
    ///��������
    char Direction;
    ///��ƽ��־
    char OffsetFlag;
    ///���ұ�־
    char CoveredFlag;
    ///Ͷ���ױ���־
    char HedgeFlag;
    ///�������
    char FeeType;
    ///���ð��ɽ�������
    double BalanceRatio;
    ///���ð��ɽ���ֵ����
    double FaceValueRatio;
    ///���ð��ɽ���������
    double AmountRatio;
    ///����շ�
    double MaxFee;
    ///����շ�
    double MinFee;
    ///���ü���ģʽ
    char CalculateType;
    ///������
    int TradingDay;
      
    ///initialized to zero
    TFFeeSetField(){
        memset(this, 0 , sizeof(TFFeeSetField));
    }
};
    
///��֤����
struct TFMarginRateField
{
    ///������
    int TradingDay;
    ///�˻����
    int AccountID;
    ///Ͷ���߷�Χ
    char InvestorRange;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///Ͷ���ױ���־
    char HedgeFlag;
    ///��Ȩ����
    char OptionType;
    ///֤ȯ���
    char ProductClass;
    ///��Ʒ����
    char ProductID[TF_PRODUCTID_LEN]; 
    ///��ͷ��֤����
    double LongMarginRatioByMoney;
    ///��ͷ��֤���
    double LongMarginRatioByVolume;
    ///��ͷ��֤����
    double ShortMarginRatioByMoney;
    ///��ͷ��֤���
    double ShortMarginRatioByVolume;
    ///�Ƿ񰴱����ϸ�
    int IsFloat;
      
    ///initialized to zero
    TFMarginRateField(){
        memset(this, 0 , sizeof(TFMarginRateField));
    }
};
    
///����
struct TFOrderField
{
    ///������
    int TradingDay;
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///�Ự���
    int SessionID;
    ///ǰ�ñ��
    int FrontID;
    ///��������
    char OrderRef[TF_ORDERREF_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///ϯλ��
    char SeatID[TF_SEATID_LEN]; 
    ///���ر������
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///��������
    char Direction;
    ///����Ա����
    int OperatorID;
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///Ӫҵ������
    char BranchID[TF_BRANCHID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///�����۸�����
    char OrderPriceType;
    ///��ƽ��־
    char CombOffsetFlag[TF_COMBOFFSETFLAG_LEN]; 
    ///Ͷ���ױ���־
    char CombHedgeFlag[TF_COMBHEDGEFLAG_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�۸�
    double LimitPrice;
    ///ԭʼ����
    int VolumeTotalOriginal;
    ///��Ч������
    char TimeCondition;
    ///�ɽ�������
    char VolumeCondition;
    ///��С�ɽ���
    int MinVolume;
    ///��������
    char ContingentCondition;
    ///ֹ���
    double StopPrice;
    ///������
    int ORRequestID;
    ///�������
    char OrderSysID[TF_ORDERSYSID_LEN]; 
    ///����״̬
    char OrderStatus;
    ///��������
    char OrderType;
    ///��ɽ�����
    int VolumeTraded;
    ///��ɽ����
    double AmountTraded;
    ///ʣ������
    int VolumeRemain;
    ///��������
    int InsertDate;
    ///ί��ʱ��
    int InsertTime;
    ///����޸�ʱ��
    int UpdateTime;
    ///����ʱ��
    int CancelTime;
    ///����������
    char OrderActionRef[TF_ORDERACTIONREF_LEN]; 
    ///״̬��Ϣ
    char StatusMsg[TF_STATUSMSG_LEN]; 
    ///�����־
    char OwnerType;
    ///Ԥ���ֶ�1
    char ThirdReff1[TF_THIRDREFF1_LEN]; 
    ///Ԥ���ֶ�2
    char ThirdReff2[TF_THIRDREFF2_LEN]; 
    ///����\�ϵ�����
    int VolumeCanceled;
    ///��ע
    char Remark[TF_REMARK_LEN]; 
    ///������־
    char CancelFlag;
    ///����IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///����MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///����Ӳ�����к�
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///����������
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///��������ϵͳ
    char OrderOS[TF_ORDEROS_LEN]; 
    ///��ǰ�ʽ�
    double Balance;
    ///������
    double Commission;
    ///֤ȯ�������
    char SubProductClass;
      
    ///initialized to zero
    TFOrderField(){
        memset(this, 0 , sizeof(TFOrderField));
    }
};
    
///�ɽ�
struct TFTradeField
{
    ///������
    int TradingDay;
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///�ɽ����
    char TradeID[TF_TRADEID_LEN]; 
    ///��������
    char Direction;
    ///���ױ���
    char TradeCode[TF_TRADECODE_LEN]; 
    ///ϯλ��
    char SeatID[TF_SEATID_LEN]; 
    ///Ӫҵ������
    char BranchID[TF_BRANCHID_LEN]; 
    ///֤ȯ���״���
    char InstrumentCode[TF_INSTRUMENTCODE_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///����Ա����
    int OperatorID;
    ///������
    int ORRequestID;
    ///�������
    char OrderSysID[TF_ORDERSYSID_LEN]; 
    ///���ر������
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///��������
    char OrderRef[TF_ORDERREF_LEN]; 
    ///��ƽ��־
    char OffsetFlag;
    ///���ұ�־
    char CoveredFlag;
    ///Ͷ���ױ���־
    char HedgeFlag;
    ///�۸�
    double Price;
    ///�ɽ���
    int Volume;
    ///�ɽ����
    double TradeAmount;
    ///������
    int TradeDate;
    ///�ɽ�ʱ��
    int TradeTime;
    ///������
    double Commission;
    ///���
    int SequenceNo;
    ///�����־
    char OwnerType;
    ///֤ȯ�������
    char SubProductClass;
      
    ///initialized to zero
    TFTradeField(){
        memset(this, 0 , sizeof(TFTradeField));
    }
};
    
///��ع���
struct TFRiskRuleField
{
    ///������
    int TradingDay;
    ///����ID
    int RiskId;
    ///�������
    char RuleCode[TF_RULECODE_LEN]; 
    ///��˾���
    int CompanyID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ���뼯��
    char InstrumentIDs[TF_INSTRUMENTIDS_LEN]; 
    ///֤ȯ���Ʋ㼶
    char InstrumentControlLevel;
    ///֤ȯ��Χ
    char InstrumentRangeType;
    ///֤ȯ���Ϸ��
    bool InstrumentUnionFlag;
    ///�˻�����
    char AccountIDs[TF_ACCOUNTIDS_LEN]; 
    ///�˻����Ͽ��Ʋ㼶
    char AccountControlLevel;
    ///�˻����Ϸ�Χ
    char AccountRangeType;
    ///Ͷ���˻����Ϸ��
    bool AccountUnionFlag;
    ///��������
    char RuleName[TF_RULENAME_LEN]; 
    ///�Ƿ��Ծ
    int IsActive;
    ///�޸�������ϸ��json�ַ�����
    char Value[TF_VALUE_LEN]; 
      
    ///initialized to zero
    TFRiskRuleField(){
        memset(this, 0 , sizeof(TFRiskRuleField));
    }
};
    
///������ع�����־
struct TFRiskRuleLogField
{
    ///������
    int TradingDay;
    ///���
    int SequenceNo;
    ///��˾���
    int CompanyID;
    ///��¼�ɹ�ʱ��
    int ExecuteTime;
    ///����ID
    int RiskId;
    ///�������
    char RuleCode[TF_RULECODE_LEN]; 
    ///��������
    char RuleName[TF_RULENAME_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ���뼯��
    char InstrumentIDs[TF_INSTRUMENTIDS_LEN]; 
    ///�˻����
    int AccountID;
    ///��������
    char OrderRef[TF_ORDERREF_LEN]; 
    ///����ֵ
    double Threshold;
    ///����ָ��ֵ
    double CalcValue;
    ///������Ϣ
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFRiskRuleLogField(){
        memset(this, 0 , sizeof(TFRiskRuleLogField));
    }
};
    
///����Աָ��
struct TFAdminCommandField
{
    ///������
    int TradingDay;
    ///���
    int SequenceNo;
    ///����Ա����
    int OperatorID;
    ///ָ�����
    char AdminCode[TF_ADMINCODE_LEN]; 
    ///�޸�������ϸ��json�ַ�����
    char Value[TF_VALUE_LEN]; 
    ///�������
    int ErrorID;
    ///������Ϣ
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFAdminCommandField(){
        memset(this, 0 , sizeof(TFAdminCommandField));
    }
};
    
///ָ����־
struct TFOperationLogField
{
    ///������
    int TradingDay;
    ///����Ա����
    int OperatorID;
    ///Ͷ���ߴ���
    int InvestorID;
    ///��¼�ɹ�ʱ��
    int ExecuteTime;
    ///ָ�����
    char AdminCode[TF_ADMINCODE_LEN]; 
    ///�޸�������ϸ��json�ַ�����
    char Value[TF_VALUE_LEN]; 
    ///�������
    int ErrorID;
    ///������Ϣ
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFOperationLogField(){
        memset(this, 0 , sizeof(TFOperationLogField));
    }
};
    
///�ֱֲ䶯��־
struct TFPosChangeLogField
{
    ///������
    int TradingDay;
    ///����Ա����
    int OperatorID;
    ///��������
    char OperationType;
    ///�䶯����
    char ChangeType;
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�ֲֶ�շ���
    char PosiDirection;
    ///Ͷ���ױ���־
    char HedgeFlag;
    ///��¼�ɹ�ʱ��
    int ExecuteTime;
    ///ԭʼֵ
    double OriginValue;
    ///����ֵ
    double NewValue;
    ///��ע
    char Memo[TF_MEMO_LEN]; 
      
    ///initialized to zero
    TFPosChangeLogField(){
        memset(this, 0 , sizeof(TFPosChangeLogField));
    }
};
    
///�ʽ�䶯��־
struct TFActChangeLogField
{
    ///������
    int TradingDay;
    ///����Ա����
    int OperatorID;
    ///��������
    char OperationType;
    ///�䶯����
    char ChangeType;
    ///�˻����
    int AccountID;
    ///��¼�ɹ�ʱ��
    int ExecuteTime;
    ///ԭʼֵ
    double OriginValue;
    ///����ֵ
    double NewValue;
    ///��ע
    char Memo[TF_MEMO_LEN]; 
      
    ///initialized to zero
    TFActChangeLogField(){
        memset(this, 0 , sizeof(TFActChangeLogField));
    }
};
    
///������Ϣ
struct TFRspInfoField
{
    ///�������
    int ErrorID;
    ///������־
    int IsLast;
    ///������Ϣ
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFRspInfoField(){
        memset(this, 0 , sizeof(TFRspInfoField));
    }
};
    
///��¼����
struct TFUserLoginReqField
{
    ///����Ա����
    int OperatorID;
    ///����
    char Password[TF_PASSWORD_LEN]; 
    ///�ͻ���������
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
      
    ///initialized to zero
    TFUserLoginReqField(){
        memset(this, 0 , sizeof(TFUserLoginReqField));
    }
};
    
///��¼����
struct TFLoginReqField
{
    ///����Ա����
    int OperatorID;
    ///����
    char Password[TF_PASSWORD_LEN]; 
    ///����IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///����MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///����Ӳ�����к�
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///����������
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///��������ϵͳ
    char OrderOS[TF_ORDEROS_LEN]; 
    ///�ͻ���������
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
      
    ///initialized to zero
    TFLoginReqField(){
        memset(this, 0 , sizeof(TFLoginReqField));
    }
};
    
///ע������
struct TFLogoutReqField
{
    ///����Ա����
    int OperatorID;
      
    ///initialized to zero
    TFLogoutReqField(){
        memset(this, 0 , sizeof(TFLogoutReqField));
    }
};
    
///����������Ӧ
struct TFRspLoginField
{
    ///������
    int TradingDay;
    ///��¼�ɹ�ʱ��
    int LoginTime;
    ///����Ա����
    int OperatorID;
    ///ǰ�ñ��
    int FrontID;
    ///�Ự���
    int SessionID;
    ///��󱨵�����
    int MaxOrderRef;
      
    ///initialized to zero
    TFRspLoginField(){
        memset(this, 0 , sizeof(TFRspLoginField));
    }
};
    
///����¼������
struct TFOrderReqField
{
    ///�˻����
    int AccountID;
    ///����Ա����
    int OperatorID;
    ///��ϱ��
    int ComboID;
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///��������
    char OrderRef[TF_ORDERREF_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///�����۸�����
    char OrderPriceType;
    ///��������
    char Direction;
    ///��ƽ��־
    char CombOffsetFlag[TF_COMBOFFSETFLAG_LEN]; 
    ///Ͷ���ױ���־
    char CombHedgeFlag[TF_COMBHEDGEFLAG_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///�۸�
    double LimitPrice;
    ///ԭʼ����
    int VolumeTotalOriginal;
    ///��Ч������
    char TimeCondition;
    ///�ɽ�������
    char VolumeCondition;
    ///Ԥ���ֶ�1
    char ThirdReff1[TF_THIRDREFF1_LEN]; 
    ///Ԥ���ֶ�2
    char ThirdReff2[TF_THIRDREFF2_LEN]; 
    ///����IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///����MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///����Ӳ�����к�
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///����������
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///��������ϵͳ
    char OrderOS[TF_ORDEROS_LEN]; 
      
    ///initialized to zero
    TFOrderReqField(){
        memset(this, 0 , sizeof(TFOrderReqField));
    }
};
    
///ȡ����������
struct TFOrderCancelReqField
{
    ///�˻����
    int AccountID;
    ///����Ա����
    int OperatorID;
    ///��ϱ��
    int ComboID;
    ///����������
    char OrderActionRef[TF_ORDERACTIONREF_LEN]; 
    ///���ر������
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///����IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///����MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///����Ӳ�����к�
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///����������
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///��������ϵͳ
    char OrderOS[TF_ORDEROS_LEN]; 
      
    ///initialized to zero
    TFOrderCancelReqField(){
        memset(this, 0 , sizeof(TFOrderCancelReqField));
    }
};
    
///��ѯ�������
struct TFQryRiskRuleField
{
    ///����ID
    int RiskId;
    ///�������
    char RuleCode[TF_RULECODE_LEN]; 
      
    ///initialized to zero
    TFQryRiskRuleField(){
        memset(this, 0 , sizeof(TFQryRiskRuleField));
    }
};
    
///��ѯ��Ʒ��Ϣ
struct TFQryInstrumentField
{
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryInstrumentField(){
        memset(this, 0 , sizeof(TFQryInstrumentField));
    }
};
    
///��ѯ��Ʒ��������Ϣ
struct TFQryCommissionRateField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///��������
    char Direction;
    ///��ƽ��־
    char OffsetFlag;
    ///���ұ�־
    char CoveredFlag;
    ///Ͷ���ױ���־
    char HedgeFlag;
      
    ///initialized to zero
    TFQryCommissionRateField(){
        memset(this, 0 , sizeof(TFQryCommissionRateField));
    }
};
    
///��ѯ��Ʒ��֤������Ϣ
struct TFQryMarginRateField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ұ�־
    char CoveredFlag;
    ///Ͷ���ױ���־
    char HedgeFlag;
      
    ///initialized to zero
    TFQryMarginRateField(){
        memset(this, 0 , sizeof(TFQryMarginRateField));
    }
};
    
///��ѯ����
struct TFQryOrderField
{
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///���ر������
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
      
    ///initialized to zero
    TFQryOrderField(){
        memset(this, 0 , sizeof(TFQryOrderField));
    }
};
    
///��ѯ�ɽ�
struct TFQryTradeField
{
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///�ɽ����
    char TradeID[TF_TRADEID_LEN]; 
    ///���ر������
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
      
    ///initialized to zero
    TFQryTradeField(){
        memset(this, 0 , sizeof(TFQryTradeField));
    }
};
    
///��ѯ�˻��ʽ�
struct TFQryAccountAssetField
{
    ///�˻����
    int AccountID;
      
    ///initialized to zero
    TFQryAccountAssetField(){
        memset(this, 0 , sizeof(TFQryAccountAssetField));
    }
};
    
///��ѯ�˻�������Ϣ
struct TFQryAccountField
{
    ///�˻����
    int AccountID;
    ///��ѯ�˻�����
    char QryAccountType;
      
    ///initialized to zero
    TFQryAccountField(){
        memset(this, 0 , sizeof(TFQryAccountField));
    }
};
    
///��ѯͶ���ֲ߳�
struct TFQryPositionField
{
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryPositionField(){
        memset(this, 0 , sizeof(TFQryPositionField));
    }
};
    
///��ѯͶ�����
struct TFQryComboField
{
    ///�˻����
    int AccountID;
    ///��ϱ��
    int ComboID;
      
    ///initialized to zero
    TFQryComboField(){
        memset(this, 0 , sizeof(TFQryComboField));
    }
};
    
///�ն�������
struct TFTerminalFeatureCodeField
{
    ///�ն˰汾��
    char TerminalVeresion[TF_TERMINALVERESION_LEN]; 
    ///�ն�������
    char FeatureCode[TF_FEATURECODE_LEN]; 
    ///��˾���
    int CompanyID;
    ///�ն�����
    char ProgramName[TF_PROGRAMNAME_LEN]; 
      
    ///initialized to zero
    TFTerminalFeatureCodeField(){
        memset(this, 0 , sizeof(TFTerminalFeatureCodeField));
    }
};
    
///ϵͳ���������
struct TFSystemConfigField
{
    ///������ʶ
    char SystemConfigKey[TF_SYSTEMCONFIGKEY_LEN]; 
    ///����������
    char SystemConfigName[TF_SYSTEMCONFIGNAME_LEN]; 
    ///��������
    char SystemConfigType[TF_SYSTEMCONFIGTYPE_LEN]; 
    ///����ֵ
    char SystemConfigValue[TF_SYSTEMCONFIGVALUE_LEN]; 
    ///��ʾ˳��
    int SystemConfigOrder;
      
    ///initialized to zero
    TFSystemConfigField(){
        memset(this, 0 , sizeof(TFSystemConfigField));
    }
};
    
///��������
struct TFTradeCalendarField
{
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///������
    int TradeDate;
    ///��һ������
    int LastTradeDate;
      
    ///initialized to zero
    TFTradeCalendarField(){
        memset(this, 0 , sizeof(TFTradeCalendarField));
    }
};
    
///�깺�¹ɻ�������
struct TFIpoInstrumentField
{
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///��Լ����
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///���м۸�
    double IpoPrice;
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///��������
    int IssueVolume;
    ///��С�ɽ���
    int MinVolume;
    ///����깺����
    int MaxVolume;
    ///�깺��
    int SubDate;
    ///�깺�ʽ�������
    int FundVerificationDate;
    ///�����깺�ɿ���
    int PaymentDate;
    ///֤ȯ���
    char ProductClass;
    ///֤ȯ�������
    char SubProductClass;
      
    ///initialized to zero
    TFIpoInstrumentField(){
        memset(this, 0 , sizeof(TFIpoInstrumentField));
    }
};
    
///�˻��깺�����Ϣ
struct TFIpoLimitField
{
    ///�˻����
    int AccountID;
    ///Ͷ���ߴ���
    int InvestorID;
    ///�ʽ��˻�����
    char AccountCode[TF_ACCOUNTCODE_LEN]; 
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///�깺���
    int LimitVolume;
    ///�ƴ����깺���
    int LimitKC;
      
    ///initialized to zero
    TFIpoLimitField(){
        memset(this, 0 , sizeof(TFIpoLimitField));
    }
};
    
///��ѯ�¹��깺��Ʒ��Ϣ
struct TFQryIpoInstrumentField
{
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///֤ȯ����
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryIpoInstrumentField(){
        memset(this, 0 , sizeof(TFQryIpoInstrumentField));
    }
};
    
///��ѯ�¹��깺�����Ϣ
struct TFQryIpoLimitField
{
    ///�˻����
    int AccountID;
    ///����������
    char ExchangeID[TF_EXCHANGEID_LEN]; 
      
    ///initialized to zero
    TFQryIpoLimitField(){
        memset(this, 0 , sizeof(TFQryIpoLimitField));
    }
};
    
///����Ա��¼��־
struct TFLoginLogField
{
    ///������
    int TradingDay;
    ///����Ա����
    int OperatorID;
    ///�Ự���
    int SessionID;
    ///��¼/�ǳ�
    char LoginType;
    ///���뷽ʽ
    char LoginFrom;
    ///����IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///����MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///����Ӳ�����к�
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///����������
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///��������ϵͳ
    char OrderOS[TF_ORDEROS_LEN]; 
    ///�ͻ���������
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
    ///�ļ�����ʱ��
    int CreateTime;
      
    ///initialized to zero
    TFLoginLogField(){
        memset(this, 0 , sizeof(TFLoginLogField));
    }
};
    
}}
#endif
  