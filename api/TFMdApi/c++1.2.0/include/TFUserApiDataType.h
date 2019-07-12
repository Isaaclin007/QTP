
#pragma once

#ifndef TF_USER_API_DATATYPE_H
#define TF_USER_API_DATATYPE_H

enum TFMarketDataTagType:int
{
/*------��Ʊ------*/
/// �������۸����������
    Stock_Tick_Tag = 100,                   
/// ���⼯�Ͼ��۸����������
    Virtual_Stock_Tick_Tag = 101,           
/// ���������������
    Repository_Stock_Tick_Tag = 109,        
/// ��ʳɽ�
    Stock_Transaction_Tag = 110,           
/// ���ί��
    Stock_Order_Tag = 120,                  
/// ί�ж���
    Stock_Order_Queue_Tag = 121,            

/*------ָ��------*/
/// ָ���������
    Index_Tick_Tag = 200,                   
/// ����ָ���������
    Repository_Index_Tick_Tag = 209,       

/*------��Ȩ------*/
/// ��Ȩ�������
    Option_Tick_Tag = 300,                  
/// ������Ȩ�������
    Repository_Option_Tick_Tag = 309,       
/// ȫ��ģ����Ȩ�������
    Simoption_Tick_Tag = 400,               
/// ����ȫ��ģ����Ȩ�������
    Repository_Simoption_Tick_Tag = 409,    

/*------�ڻ�------*/
/// �ڻ��������
    Futures_Tick_Tag = 500,                
/// �����ڻ��������
    Repository_Futures_Tick_Tag = 509,      
/// OTC��������
    OTCQuote_Tag = 600,                     
/// OTC������������
    Repository_OTCQuote_Tag = 609,     
/// OTC�ɽ�����
    OTCTransaction_Msg = 610                       
};
enum TFMDPSubscribeMode :int
{
	TFMDP_Quick = 0,
	TFMDP_Restart = 1
};
    
/////////////////////////////////////////////////////////////////////////
///MDPType��һ����������
/////////////////////////////////////////////////////////////////////////
enum TFMDPType:char
{
///ʵʱ���鶩��
    TFMDP_RMSSubscribe = '1', 
///ʵʱ�����鲥
    TFMDP_RMSMulticast = '2', 
///��ʷ���鶩��
    TFMDP_HMSSubscribe = '3', 
///ʵʱָ�궩��
    TFMDP_RISSubscribe = '4', 
///��ʷָ�궩��
    TFMDP_HISSubscribe = '5', 
///OTC���鶩��
    TFMDP_ORMSSubscribe = '6', 
///ʵʱ����ѹ������
    TFMDP_RMSCompressSubscribe = 'a' 
};
   
/////////////////////////////////////////////////////////////////////////
///IndicatorType��һ��ָ������
/////////////////////////////////////////////////////////////////////////
enum TFIndicatorType:char
{
///K��
    TFIndicator_KBAR = '1', 
///����
    TFIndicator_MA = '2' 
};
   
/////////////////////////////////////////////////////////////////////////
///CallOrPutType��һ���Ϲ��Ϲ�
/////////////////////////////////////////////////////////////////////////
enum TFCallOrPutType:char
{
///�Ϲ�
    TFCallOrPut_CALL = 'C', 
///�Ϲ�
    TFCallOrPut_PUT = 'P' 
};
   
/////////////////////////////////////////////////////////////////////////
///TFQuoteType��һ�����鶩������
/////////////////////////////////////////////////////////////////////////
enum TFQuoteType: int
{          
///ʵʱ������ʳɽ�
    TFQuote_RMSTransaction = 1000, 
///ʵʱ�����Ʊ����
    TFQuote_RMSStockTick = 1001, 
///ʵʱ����ָ������
    TFQuote_RMSIndexTick = 1002, 
///ʵʱ������Ȩ����
    TFQuote_RMSOptionTick = 1003, 
///ʵʱ�����ڻ�����
    TFQuote_RMSFutureTick = 1004, 
///ʵʱ�������ί��
    TFQuote_RMSTransactionOrder = 1005, 
///ʵʱ����ί�ж���
    TFQuote_RMSOrderQueue = 1006, 
///��ʷ������ʳɽ�
    TFQuote_HMSTransaction = 2000, 
///��ʷ�����Ʊ����
    TFQuote_HMSStockTick = 2001, 
///��ʷ����ָ������
    TFQuote_HMSIndexTick = 2002, 
///��ʷ������Ȩ����
    TFQuote_HMSOptionTick = 2003, 
///��ʷ�����ڻ�����
    TFQuote_HMSFutureTick = 2004, 
///ʵʱ����ָ��
    TFQuote_RISIndicator = 3000, 
///��ʷ����ָ��
    TFQuote_HISIndicator = 4000, 
///OTC����
    TFQuote_ORMS = 5000 
};
   
/////////////////////////////////////////////////////////////////////////
///TFPeriodType��һ�����ڳ���
/////////////////////////////////////////////////////////////////////////
enum TFPeriodType: int
{          
///1������
    TFPeriod_MIN1 = 1, 
///3������
    TFPeriod_MIN3 = 3, 
///5������
    TFPeriod_MIN5 = 5, 
///15������
    TFPeriod_MIN15 = 15, 
///30������
    TFPeriod_MIN30 = 30, 
///60������
    TFPeriod_MIN60 = 60, 
///����
    TFPeriod_DAY = 100, 
///����
    TFPeriod_WEEK = 110, 
///����
    TFPeriod_MONTH = 120, 
///����
    TFPeriod_QUARTER = 130, 
///����
    TFPeriod_YEAR = 140 
};
   
/////////////////////////////////////////////////////////////////////////
///TFSecurityType��һ������������
/////////////////////////////////////////////////////////////////////////
enum TFSecurityType: int
{          
///��Ʊ
    TFSecurity_STOCK = 10, 
///ծȯ
    TFSecurity_BOND = 11, 
///����
    TFSecurity_FUND = 12, 
///ָ��
    TFSecurity_INDEX = 13, 
///Ȩ֤
    TFSecurity_WARRANT = 14, 
///�ع�
    TFSecurity_REPURCHASE = 15, 
///�ڻ�
    TFSecurity_FUTURE = 16, 
///��Ȩ
    TFSecurity_OPTION = 17, 
///����
    TFSecurity_OTHERS = 18, 
///����
    TFSecurity_EXCHANGE = 19 
};
   
/////////////////////////////////////////////////////////////////////////
///TFExIDType ��һ���������������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFExIDType[8];
    
/////////////////////////////////////////////////////////////////////////
///TFSecIDType ��һ����Լ�������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFSecIDType[20];
    
/////////////////////////////////////////////////////////////////////////
///TFErrorMsgType ��һ��������Ϣ���Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFErrorMsgType[128];
    
/////////////////////////////////////////////////////////////////////////
///TFUserIDType ��һ����¼�˺����Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFUserIDType[12];
    
/////////////////////////////////////////////////////////////////////////
///TFUserPasswordType ��һ����¼�������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFUserPasswordType[40];
    
/////////////////////////////////////////////////////////////////////////
///TFVersionType ��һ���汾�����Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFVersionType[10];
    
/////////////////////////////////////////////////////////////////////////
///TFIPAddressType ��һ��IP��ַ���Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFIPAddressType[16];
    
/////////////////////////////////////////////////////////////////////////
///TFSecNameType ��һ��֤ȯ�������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFSecNameType[32];
    
/////////////////////////////////////////////////////////////////////////
///TFContractIDType ��һ����Ȩ��Լ�������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFContractIDType[32];
    
/////////////////////////////////////////////////////////////////////////
///TFUnderlyingSecIDType ��һ�����֤ȯ������Ͷ���
/////////////////////////////////////////////////////////////////////////
typedef char TFUnderlyingSecIDType[32];
    
#endif
  