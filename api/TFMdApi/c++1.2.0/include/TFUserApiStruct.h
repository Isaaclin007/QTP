


#ifndef TF_USER_API_DATA_STRUCT_H
#define TF_USER_API_DATA_STRUCT_H
#pragma once
#include <cstring>
#include "TFUserApiDataType.h"
#include <stdint.h>



#pragma pack(1)
#pragma warning (disable: 4200)//�����㳤����warning

 struct TFStockTickDataField{
    int Type;               // ��������
    uint32_t Seq;             // ��Ϣ���
    char ExID[6];           // ����������
    char SecID[8];          // ֤ȯ����
    //char SecName[8];      // ֤ȯ���� 
    int ExTime;             // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;          // ����ʱ��
    int TradeDate;          // ��������
    int64_t PreClosePx;       // ǰ����
    int64_t OpenPx;           // ���տ��̼�
    int64_t HighPx;           // ������߼�
    int64_t LowPx;            // ������ͼ�
    int64_t LastPx;           // ���¼�
    int64_t UpLimitPx;        // ��ͣ
    int64_t DownLimitPx;      // ��ͣ
    int64_t BidPx[10];        // ί���
    int64_t BidVol[10];       // ί����
    int64_t OfferPx[10];      // ί����
    int64_t OfferVol[10];     // ί����
    int64_t Volume;           // �ɽ���
    double Turnover;        // �ɽ����
    int64_t IOPV;             // ����ֵ

    int64_t TotalBidVol;      // ί������
    int64_t TotalOfferVol;    // ί������

    int TotalBidNumber;     // �����ܱ���
    int TotalOfferNumber;   // �����ܱ���
    int WithdrawBuyNumber;  // ���볷������
    int64_t WithdrawBuyVol;   // ���볷������
    int WithdrawSellNumber; // ������������
    int64_t WithdrawSellVol;  // ������������
    int NumBidOrders;   // ��ί�м�λ��
    int NumOfferOrders; // ����ί�м�λ��

    int64_t WAvgBidPx;       //��Ȩƽ��ί��۸�
    int64_t WAvgOfferPx;     //��Ȩƽ��ί���۸�

	/*For SZ, ��0λ��S=����(����ǰ)��
	O=����ǰ���Ͼ���
	T=��������
	B=����
	C=���̼��Ͼ���
	E=�ѱ���
	H=��ʱͣ��
	A=�̺���
	V=�������ж�
	��1λ��0=����״̬
	1=ȫ��ͣ��
	For SH, ��0λ��S=����������ǰ��ʱ��
	T=��ʾ��������ʱ��
	B=����ʱ��
	C=���Ͼ���ʱ��
	E=����ʱ��
	P=��Ʒͣ��
	M=�ɻָ����׵��۶�ʱ�Σ����м��Ͼ��ۣ�
	N=��ʾ���ɻָ����׵��۶�ʱ�Σ���ͣ���������У�
	D=���̼��Ͼ��۽׶ν������������۽׶ο�ʼ֮ǰ��ʱ�Σ����У�
	��1λ��0=�˲�Ʒ�����������ף�
	1=��Ʒ���������ף�
	�ո�=������
	��2λ��0=δ����
	1=������
	��3λ��0=�˲�Ʒ�ڵ�ǰʱ�β����ܽ����¶����걨
	1=�˲�Ʒ�ڵ�ǰʱ�οɽ��ܽ����¶����걨
	�ո�=������
	*/
	unsigned char SecStatus;

    TFStockTickDataField()
    {
        memset(this, 0, sizeof(TFStockTickDataField));
    }
};

struct TFIndexDataField{
    int Type;               // ��������
    uint32_t Seq;             // ��Ϣ���
    char ExID[6];           // ����������
    char SecID[8];          // ֤ȯ����
    //char SecName[8];      // ֤ȯ���� 
    int ExTime;             // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;          // ����ʱ��
    int TradeDate;          // ��������
    int64_t PreClosePx;       // ǰ����ָ��
    int64_t OpenPx;           // ����ָ��
    int64_t HighPx;           // ���ָ��
    int64_t LowPx;            // ���ָ��
    int64_t LastPx;           // ����ָ��
    int TradeTime;          // �ɽ�ʱ��
    double Turnover;        // ���������Ӧָ���ĳɽ����
    int64_t Volume;           // ���������Ӧָ���Ľ�������
    int64_t ClosePx;          // ��������ָ��������0Ϊ��Чֵ��
    unsigned char Currency; // ���� - 0�������; 1���۱�; 2����Ԫ; 3��̨��; 4����Ԫ

    TFIndexDataField()
    {
        memset(this, 0, sizeof(TFIndexDataField));
    }
};

struct TFTransactionDataField{
    int Type;               // ��������
    uint32_t Seq;             // ��Ϣ���
    char ExID[6];           // ����������
    char SecID[8];          // ֤ȯ����
    int ExTime;             // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;          // ����ʱ��
    int TradeTime;          // �ɽ�ʱ��,Int��ʽ: 14:30:25.060 = 143025060
    int64_t TradePx;       // �ɽ��۸�
    int64_t Volume;           // �ɽ���
    double Turnover;        // �ɽ����

    int64_t TradeBuyNo;         // �Ͻ����򷽶����ţ������ί������
    int64_t TradeSellNo;        // �Ͻ������������ţ��������ί������

    /*
    ��ʳɽ�ִ�б�־
    �Ͻ���:
    B:      ����,������,
    S:      ����,������,
    N:     δ֪

    ���:
    4:       �������Զ�����ִ��
    F:     �ɽ�ִ��
    */
    char TradeFlag;
    int TradeDate;               // ��������

    TFTransactionDataField()
    {
        memset(this, 0, sizeof(TFTransactionDataField));
    }
};

struct TFOrderDataField{
    int Type;               // ��������
    uint32_t Seq;             // ��Ϣ���
    char ExID[6];           // ����������
    char SecID[8];          // ֤ȯ����
    int ExTime;             // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;          // ����ʱ��

    int64_t OrderPx;                //ί�м۸�
    int64_t OrderVol;         //  ί������
    char  OrderSide;               //��������,1=��2=��G=����F=���
    char OrderType;           //�������1=�м�2=�޼�U=��������
    int OrderTime;      // ί��ʱ�䣨�ٷ�֮һ�룩,14302506��ʾ 14:30:25.06
	int64_t TradeNo;		// ���ί������
    int TradeDate;               // ��������

    TFOrderDataField()
    {
        memset(this, 0, sizeof(TFOrderDataField));
    }
};


struct TFOptionDataField{
    int Type;                    // ��������
    uint32_t Seq;                  // ��Ϣ���
    char ExID[6];                // ����������
    char SecID[10];              // ��Ȩ����
    int ExTime;                  // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;               // ����ʱ��
    int TradeDate;               // ��������
    int64_t PreSettlementPx;           // ���ս����
    int64_t ClosePx;               // ���̼�
    int64_t OpenPx;                // ���̼�
    int64_t HighPx;                // ��߼�
    int64_t LowPx;                 // ��ͼ�
    int64_t LastPx;                // �ּ�
    int64_t AuctionPx;          // �������жϲο���
    int64_t AuctionVol;            // �������жϼ��Ͼ�������ƥ����
    int64_t TotalLongPosition;     // �ֲܳ���
    int64_t BidPx[5];              // ί���
    int64_t BidVol[5];             // ί����
    int64_t OfferPx[5];            // ί����
    int64_t OfferVol[5];           // ί����
    int64_t Volume;                // �ɽ���
    double Turnover;             // �ɽ���

    /* ���ֶ�Ϊ8λ�ַ���������ÿλ��ʾ�ض��ĺ��壬�޶�������ո�
    ��1λ��    ��S����ʾ����������ǰ��ʱ��
    ��C����ʾ���Ͼ���ʱ��
    ��T����ʾ��������ʱ��
    ��B����ʾ����ʱ��
    ��E����ʾ����ʱ��
    ��V����ʾ�������ж�
    ��P����ʾ��ʱͣ��
    ��U����ʾ���̼��Ͼ���
    ��M����ʾ�ɻָ����׵��۶ϣ����м��Ͼ��ۣ�
    ��N����ʾ���ɻָ����׵��۶ϣ���ͣ���������У�
    ��2λ��    ��0����ʾδ����ͣ��
    ��1����ʾ����ͣ�ơ����������ݲ�ʹ�ã���ʱ��ո�
    ��3λ��    ��0����ʾ�����ƿ���
    ��1����ʾ���Ʊ��ҿ���
    ��2����ʾ������������
    ��3����ʾ�����������֡����ҿ���
    ��4����ʾ�������뿪��
    ��5����ʾ�������뿪�֡����ҿ���
    ��6����ʾ�������뿪�֡���������
    ��7����ʾ�������뿪�֡��������֡����ҿ��֡�
    ��4λ��    ��0����ʾ�˲�Ʒ�ڵ�ǰʱ�β����ܽ����¶����걨
    ��1�� ��ʾ�˲�Ʒ�ڵ�ǰʱ�οɽ��ܽ����¶����걨��
    ��5 - 8λ�������� */
    char TradingPhaseCode[10];    // ״̬λ 

    int OrigTime;

    int64_t SettlementPx;              // ���ս����
    int64_t PreClosePx;            // �������̼�

    TFOptionDataField()
    {
        memset(this, 0, sizeof(TFOptionDataField));
    }
};

// �й������ڻ������� [5/26/2016 nidalei]
struct TFFuturesTickDataField
{
    int Type;                  // ��������
    uint32_t Seq;                // ��Ϣ���
    char ExID[6];              // ����������
    char SecID[32];            // ֤ȯ����
    int ExTime;                // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;             // ����ʱ��
    int TradeDate;             // ��������
    char SettlementGroupID[9]; // ���������
    int SettlementID;          // ������
    int64_t PreSettlementPx;     // �����
    int64_t PreClosePx;          // ǰ����
    int64_t PreOpenInterest;     // ��ֲ���
    double PreDelta;           // ����ʵ��
    int64_t OpenPx;              // ���տ��̼�
    int64_t HighPx;              // ������߼�
    int64_t LowPx;               // ������ͼ�
    int64_t ClosePx;             // �������̼�
    int64_t UpLimitPx;           // ��ͣ
    int64_t DownLimitPx;         // ��ͣ
    int64_t SettlementPx;        // �����
    double CurrDelta;          // ����ʵ
    int64_t LastPx;              // ���¼�
    int64_t Volume;              // �ɽ���
    double Turnover;           // �ɽ����
    int64_t OpenInterest;        // �ֲ���

    int64_t BidPx[5];            // ί���
    int64_t BidVol[5];           // ί����
    int64_t OfferPx[5];          // ί����
    int64_t OfferVol[5];         // ί����
    char TFlag;                //��ҹ�̱�־
    /*
    ��ҹ���̱�־
    0:      ҹ��,
    1:      ����,
    */
    int LocalDate;             //��������
    TFFuturesTickDataField()
    {
        memset(this, 0, sizeof(TFFuturesTickDataField));
    }
};

/* Note: A complete "OrderQueueData" consists of "OrderQueueDataHead" and "OrderQueueDataBody" likes following:
| OrderQueueDataHead | int64_t,int64_t,int64_t,...
Each "int64_t" denotes the Vol of one order. The count of "int64_t" is specified by "OrderCount" of OrderQueueDataHead
*/
struct TFOrderQueueDataHeadField
{
    int Type;               // ��������
    uint32_t Seq;             // ��Ϣ���
    char ExID[6];           // ����������
    char SecID[8];          // ֤ȯ����
    //char SecName[8];      // ֤ȯ���� 
    int ExTime;             // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;          // ����ʱ��
    int TradeDate;          // ��������
    int64_t LastPx;           // ί�м۸�
    /*
    �����̱�־
    B:      ����,
    S:      ����,
    */
    char TradeFlag;
    int OrderCount;         // ί�б���
    int64_t OrderQueue[];    //�������ݣ�������չ   
    TFOrderQueueDataHeadField()
    {
        memset(this, 0, sizeof(TFOrderQueueDataHeadField));
    }
};

struct TFOTCQuoteDataField
{
    int Type;               // ��������
    uint32_t Seq;             // ���
    char ExID[32];          // ���������룬����150016.IB�е�IB
    char SecID[32];         // ծȯ���룬����150016.IB�е�150016
    char SecName[32];       // ծȯ����
    int ExTime;             // ������ʱ��
    int LocalTime;          // ����ʱ��
    int TradeDate;        // �����գ���ʽΪ20160810   
    char SettleType;        // �������ͣ���0��:T+0,��1��:T+1

    /* ��������:
    0�������ʣ����������������Ҫ��BidYield,OfferYield�������������
    1�����ۣ�����Ǿ�����ô��Ҫ��дBidPx,OfferPx������ */
    char PxType;
    int64_t UpLimitPx;    // ��ͣ��
    int64_t DownLimitPx;  // ��ͣ��
    int64_t LastPx;       // �����г��ɽ���
    int64_t Turnover;     // �ɽ�����(���)

    int64_t BidPx[10];     // ����
    int64_t BidYield[10];     // ������
    int64_t BidVol[10];       // ������
    char BidInstitute[10][32];  // ������
    char BidTrader[10][32];     // ������
    /* ͨ��������д�Ͷ�Ӧ����������:
    "CFIC"�����ʾ���
    "TPSC"����������
    "CBBJ"��BGC����
    "PATR"��ƽ������
    "TJXT"�����ƾ���
    "CFETS"����㽻������ */
    char BidBroker[10][32];
    char BidText[10][32];       // ������Ϣ

    int64_t OfferPx[10];       // ����
    int64_t OfferYield[10];       // ������
    int64_t OfferVol[10];         // ������
    char OfferInstitute[10][32];    // ������
    char OfferTrader[10][32];       // ������
    char OfferBroker[10][32];       // �н�
    char OfferText[10][32];         // ������Ϣ

    TFOTCQuoteDataField()
    {
        memset(this, 0, sizeof(TFOTCQuoteDataField));
    }
};

struct TFOTCTransactionDataField
{
    int Type;               // ��������
    uint32_t Seq;         // ��Ϣ���
    int GatewayID;      // ����ID��1-CMDS, 2-Wind, 3-Sumscope
    char SecID[16];     // ֤ȯ����
    char SecName[32];   // ֤ȯ����   
    char ExID[16];      // ����������
    int ExTime;         // ������ʱ��
    int LocalTime;      // ����ʱ��
    int TradeDate;      // ��������
    char TransID[40];   // �ɽ�������

    char Side;          // �ɽ�����'x'-taken,'y'-given,'z'-trade
    char TransStatus;   // �ɽ�״̬��'0'-New,'4'-Canceled,'5'-Replace,'7'-Stopped,'8'-Rejected,'F'-Trade,'H'-Trade Cancel
    char TransType;     // �������ͣ�'0'-ָ�����У�'1'-�����У�'2'-ȫ��(����)��'3'-�������У�'4'-�����У�'5'-�������� 
    int64_t Price;        // ����
    int64_t Yield;        // ������
    int64_t Volume;          // �ɽ���
    char dealStatus;    // ����״̬��'0'-��˫��ȷ�� '1'-������ȷ�� '2'-˫������ȷ�� '3'-����� '4'-������ '5'-��ȡ��

    TFOTCTransactionDataField()
    {
        memset(this, 0, sizeof(TFOTCTransactionDataField));
    }
};

//K��ָ�����ݽṹ�嶨��
struct TFMarketIndicatorField
{
    TFSecurityType   Type;               // ����������
    char  ExID[6];             // ����������
    char  SecID[32];           // ֤ȯ����
    int   KSeq;                // k�����к�
    int64_t KScore;              // k��Ψһ������
    TFPeriodType   KType;               // K�����ͣ�1��3��5��15��30��60��100Ϊ����
    int   TradeDate;           // ��������
    //int64_t UpLimitPx;           // ��ͣ
    //int64_t LowLimitPx;          // ��ͣ
    //int64_t PreSettlementPx;     // �����
    //int64_t PreClosePx;          // ǰ����
    int64_t OpenPx;              // ���̼�
    int64_t HighPx;              // ��߼�
    int64_t LowPx;               // ��ͼ�
    int64_t LastPx;              // ���¼�
    //int64_t ClosePx;             // ���̼�
    //int64_t SettlementPx;        // �����
    int64_t Volume;              // �ɽ���
    double Turnover;           // �ɽ����

    TFMarketIndicatorField()
    {
        memset(this, 0, sizeof(TFMarketIndicatorField));
    }
};

//�ز�ר��K��ָ�����ݽṹ�嶨��
struct TFBTIndicatorField
{
    int Type;                  // ��������
    uint32_t Seq;              // ��Ϣ���
    char  ExID[6];             // ����������
    char  SecID[32];           // ֤ȯ����
    int   TradeDate;           // ��������
    int ExTime;                // ������ʱ��,Int��ʽ: 10:01:02 000 = 100102000
    int LocalTime;             // ����ʱ��
    int64_t OpenPx;              // ���̼�
    int64_t HighPx;              // ��߼�
    int64_t LowPx;               // ��ͼ�
    int64_t LastPx;              // ���¼�
    int64_t Volume;              // �ɽ���
    double Turnover;           // �ɽ����
    int64_t BidPx;            // ί���
    int64_t BidVol;           // ί����
    int64_t OfferPx;          // ί����
    int64_t OfferVol;         // ί����
    int LocalDate;             //��������
    TFBTIndicatorField()
    {
        memset(this, 0, sizeof(TFBTIndicatorField));
    }
};

    
///���ĺ�Լ
struct TFQuoteSubField
{
    ///���鶩������
    TFQuoteType Quote;
    ///����������
    TFExIDType ExID; 
    ///��Լ����
    TFSecIDType SecID; 
    ///��ʼ����
    int BeginDate;
    ///��������
    int EndDate;
    ///���ڳ���
    TFPeriodType Period;
    ///Ԥ���ֶ�
    int ThirdReff;
      
    ///initialized to zero
    TFQuoteSubField(){
        memset(this, 0 , sizeof(TFQuoteSubField));
    }
};
    
///��Լ����
struct TFCodeKeyField
{
    ///����������
    TFExIDType ExID; 
    ///��Լ����
    TFSecIDType SecID; 
      
    ///initialized to zero
    TFCodeKeyField(){
        memset(this, 0 , sizeof(TFCodeKeyField));
    }
};
    
///��Լ������Ϣ
struct TFCodeInfoField
{
    ///����������
    TFExIDType ExID; 
    ///��Լ����
    TFSecIDType SecID; 
    ///֤ȯ����
    int SecType;
    ///֤ȯ����
    TFSecNameType SecName; 
    ///��С�䶯�۵�λ
    double MinPriceFluction;
    ///��Լ����
    int Multiplie;
    ///��Ȩ��Լ����
    TFContractIDType ContractID; 
    ///���֤ȯ���
    TFUnderlyingSecIDType UnderlyingSecID; 
    ///�Ϲ��Ϲ�
    TFCallOrPutType CallOrPut;
    ///��Ȩ��Ȩ��
    int ExerciseDate;
    ///��Ȩ�׸�������
    int StartDate;
    ///��������
    int EndDate;
    ///��Ȩ������
    int ExpireDate;
      
    ///initialized to zero
    TFCodeInfoField(){
        memset(this, 0 , sizeof(TFCodeInfoField));
    }
};
    
///����״̬
struct TFErrorInfoField
{
    ///�������
    int ErrorID;
    ///������Ϣ
    TFErrorMsgType ErrorMsg; 
      
    ///initialized to zero
    TFErrorInfoField(){
        memset(this, 0 , sizeof(TFErrorInfoField));
    }
};
    
///��¼��Ϣ
struct TFLoginInfoField
{
    ///��¼�˺�
    TFUserIDType UserID; 
    ///��¼����
    TFUserPasswordType UserPassword; 
    ///�汾��
    TFVersionType Version; 
    ///IP��ַ
    TFIPAddressType IPAddress; 
      
    ///initialized to zero
    TFLoginInfoField(){
        memset(this, 0 , sizeof(TFLoginInfoField));
    }
};
    
#pragma pack()
    
#endif
  