
#pragma once

#ifndef TF_DATA_TYPE_H
#define TF_DATA_TYPE_H

namespace tfzq{ namespace stp{

enum TF_RESUME_TYPE
{
	TF_TERT_RESTART = 0,
	TF_TERT_RESUME,
	TF_TERT_QUICK
};

    
      
/////////////////////////////////////////////////////////////////////////
///ProductClassType��һ��֤ȯ�������
/////////////////////////////////////////////////////////////////////////
///�ڻ�
const char TF_PC_Futures = '1'; 
///��Ȩ
const char TF_PC_Options = '2'; 
///��Ʊ
const char TF_PC_Stock = '3'; 
///ծȯ
const char TF_PC_Bond = '4'; 
///����
const char TF_PC_Fund = '5'; 
///ָ��
const char TF_PC_Index = '6'; 
///Ȩ֤
const char TF_PC_Warrant = '7'; 
///�ع�
const char TF_PC_Repo = '8'; 
///����
const char TF_PC_Other = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorRangeType��һ��Ͷ���߷�Χ����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_IR_All = '1'; 
///Ͷ������
const char TF_IR_Group = '2'; 
///��һͶ����
const char TF_IR_Single = '3'; 
///����Ͷ�ʵ�Ԫ
const char TF_IR_AllInvestUnit = '4'; 
///��һͶ�ʵ�Ԫ
const char TF_IR_SingleInvestUnit = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///ProviderTypeType��һ����̨��������
/////////////////////////////////////////////////////////////////////////
///ctp�ڻ�����
const char TF_PT_CtpFutureTd = '0'; 
///ctp�ڻ�����
const char TF_PT_CtpFutureMd = '1'; 
///ctp�ڻ���ѯ
const char TF_PT_CtpFutureQry = '2'; 
///Stp����Ȩ����
const char TF_PT_STPOptionTd = '3'; 
///Stp����Ȩ��ѯ
const char TF_PT_STPOptionQry = '4'; 
///Stp�Ĺ�Ʊ����
const char TF_PT_STPStockTd = '5'; 
///Stp�Ĺ�Ʊ��ѯ
const char TF_PT_STPStockQry = '6'; 
///Femas�ڻ�����
const char TF_PT_FemasFutureTd = '7'; 
///Femas�ڻ�����
const char TF_PT_FemasFutureMd = '8'; 
///Femas�ڻ���ѯ
const char TF_PT_FemasFutureQry = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///DirectionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///��
const char TF_D_Buy = '0'; 
///��
const char TF_D_Sell = '1'; 
///ETF�깺
const char TF_D_ETFPur = '2'; 
///ETF���
const char TF_D_ETFRed = '3'; 
///�ֽ������ֻ�����ر�
const char TF_D_CashIn = '4'; 
///ծȯ���
const char TF_D_PledgeBondIn = '5'; 
///ծȯ����
const char TF_D_PledgeBondOut = '6'; 
///���
const char TF_D_Doublened = '7'; 
///ת�й�
const char TF_D_DepositoryTransfer = '8'; 
///�����˻����
const char TF_D_CreditDoublened = '9'; 
///����Ʒ����
const char TF_D_BuyCollateral = 'A'; 
///����Ʒ����
const char TF_D_SellCollateral = 'B'; 
///����Ʒת��
const char TF_D_CollateralTransferIn = 'C'; 
///����Ʒת��
const char TF_D_CollateralTransferOut = 'D'; 
///��������
const char TF_D_MarginTrade = 'E'; 
///��ȯ����
const char TF_D_ShortSell = 'F'; 
///��ȯ����
const char TF_D_RepayMargin = 'G'; 
///��ȯ��ȯ
const char TF_D_RepayStock = 'H'; 
///ֱ�ӻ���
const char TF_D_DirectRepayMargin = 'I'; 
///ֱ�ӻ�ȯ
const char TF_D_DirectRepayStock = 'J'; 
///��ȯ��ת
const char TF_D_ExcessStockTransfer = 'K'; 
///OF�깺
const char TF_D_OFPur = 'L'; 
///OF���
const char TF_D_OFRed = 'M'; 
///SF���
const char TF_D_SFSplit = 'N'; 
///SF�ϲ�
const char TF_D_SFMerge = 'O'; 
///����
const char TF_D_Covered = 'P'; 
///֤ȯ����(��)/�ⶳ(ƽ)
const char TF_D_Freeze = 'Q'; 
///��Ȩ
const char TF_D_Execute = 'R'; 
///CB����
const char TF_D_CBRed = 'S'; 
///CBת��
const char TF_D_CBConv = 'T'; 
///OF�Ϲ�
const char TF_D_OFSub = 'U'; 
      
/////////////////////////////////////////////////////////////////////////
///QryAccountTypeType��һ����ѯ�˻���������
/////////////////////////////////////////////////////////////////////////
///����
const char TF_QAT_Operate = '0'; 
///��ѯ
const char TF_QAT_Query = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///HedgeFlagType��һ��Ͷ���ױ���־����
/////////////////////////////////////////////////////////////////////////
///Ͷ��
const char TF_HF_Speculation = '1'; 
///����
const char TF_HF_Arbitrage = '2'; 
///�ױ�
const char TF_HF_Hedge = '3'; 
///������
const char TF_HF_MarketMaker = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///UserTypeType��һ���û���������
/////////////////////////////////////////////////////////////////////////
///Ͷ����
const char TF_UT_Investor = '0'; 
///����Ա
const char TF_UT_Operator = '1'; 
///����Ա
const char TF_UT_SuperUser = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CoveredFlagType��һ�����ұ�־����
/////////////////////////////////////////////////////////////////////////
///�Ǳ���
const char TF_CF_Uncovered = '\0'; 
///����
const char TF_CF_Covered = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///OwnerTypeType��һ�������־����
/////////////////////////////////////////////////////////////////////////
///����Ͷ����
const char TF_OT_0 = '0'; 
///����������
const char TF_OT_1 = '1'; 
///��Ȩ��Ӫ����
const char TF_OT_2 = '2'; 
///����Ͷ���߷���
const char TF_OT_3 = '3'; 
///��Ӫ���׷���
const char TF_OT_4 = '4'; 
///�����Է����ṩ�̷���
const char TF_OT_5 = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorLevelType��һ��Ͷ���߽��׵ȼ�����
/////////////////////////////////////////////////////////////////////////
///һ��
const char TF_IL_1 = '0'; 
///����
const char TF_IL_2 = '1'; 
///����
const char TF_IL_3 = '2'; 
///�ǽ��׼��𣬴˼���investor���ɽ���
const char TF_IL_9 = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///OffsetFlagType��һ����ƽ��־����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_OF_Open = '0'; 
///ƽ��
const char TF_OF_Close = '1'; 
///ǿƽ
const char TF_OF_ForceClose = '2'; 
///ƽ��
const char TF_OF_CloseToday = '3'; 
///ƽ��
const char TF_OF_CloseYesterday = '4'; 
///ǿ��
const char TF_OF_ForceOff = '5'; 
///����ǿƽ
const char TF_OF_LocalForceClose = '6'; 
///�Զ�����ƽ��ƽ���ж�(�ݲ�֧�֣�
const char TF_OF_Auto = '7'; 
///�Ϲ�
const char TF_OF_Call = '8'; 
///�Ϲ�
const char TF_OF_Put = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderPriceTypeType��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
///�����
const char TF_OPT_AnyPrice = '1'; 
///�޼�
const char TF_OPT_LimitPrice = '2'; 
///���ż�
const char TF_OPT_BestPrice = '3'; 
///���¼�
const char TF_OPT_LastPrice = '4'; 
///�������¼�
const char TF_OPT_LocalBestPrice = '5'; 
///�嵵���ż�
const char TF_OPT_FiveLevelPrice = '6'; 
///ETF�깺
const char TF_OPT_PurchasesETF  = 'd'; 
///ETF���
const char TF_OPT_RedeemETF = 'e'; 
      
/////////////////////////////////////////////////////////////////////////
///TimeConditionType��һ����Ч����������
/////////////////////////////////////////////////////////////////////////
///������ɣ�������
const char TF_TC_IOC = '1'; 
///������Ч
const char TF_TC_GFS = '2'; 
///������Ч
const char TF_TC_GFD = '3'; 
///ָ������ǰ��Ч
const char TF_TC_GTD = '4'; 
///����ǰ��Ч
const char TF_TC_GTC = '5'; 
///���Ͼ�����Ч
const char TF_TC_GFA = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///VolumeConditionType��һ���ɽ�����������
/////////////////////////////////////////////////////////////////////////
///�κ�����
const char TF_VC_AV = '1'; 
///��С����
const char TF_VC_MV = '2'; 
///ȫ������
const char TF_VC_CV = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///ContingentConditionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
const char TF_CC_Immediately = '1'; 
///ֹ��
const char TF_CC_Touch = '2'; 
///ֹӮ
const char TF_CC_TouchProfit = '3'; 
///Ԥ��
const char TF_CC_ParkedOrder = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_OST_Unknown = '0'; 
///����
const char TF_OST_PendingNew = '1'; 
///�ѱ�
const char TF_OST_New = '2'; 
///����
const char TF_OST_PartilyFilled = '3'; 
///�ѳ�
const char TF_OST_Filled = '4'; 
///����
const char TF_OST_PartilyCanceled = '5'; 
///�ѳ�
const char TF_OST_Canceled = '6'; 
///�ϵ�
const char TF_OST_Rejected = '7'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
const char TF_ORDT_Normal = '0'; 
///��������
const char TF_ORDT_DeriveFromQuote = '1'; 
///�������
const char TF_ORDT_DeriveFromCombination = '2'; 
///��ϱ���
const char TF_ORDT_Combination = '3'; 
///������
const char TF_ORDT_ConditionalOrder = '4'; 
///������
const char TF_ORDT_Swap = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///PosiDirectionType��һ���ֲֶ�շ�������
/////////////////////////////////////////////////////////////////////////
///��ͷ
const char TF_PD_Short = '1'; 
///��ͷ
const char TF_PD_Long = '0'; 
      
/////////////////////////////////////////////////////////////////////////
///ChangeTypeType��һ���䶯��������
/////////////////////////////////////////////////////////////////////////
///�˶�ֵ
const char TF_CGT_check = '1'; 
///���Ṧ��
const char TF_CGT_fronzen = '2'; 
///��ǰֵ
const char TF_CGT_current = '3'; 
///�ֲֳɱ�
const char TF_CGT_cost = '4'; 
///��֤��ռ��
const char TF_CGT_useMargin = '5'; 
///��˶�ֵ
const char TF_CGT_Todaycheck = '6'; 
///��˶�ֵ
const char TF_CGT_Ydcheck = '7'; 
///��ǰֵ
const char TF_CGT_Todaycurrent = '8'; 
///��ǰֵ
const char TF_CGT_Ydcurrent = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///CapitalDirectionType��һ���ʽ�仯��������
/////////////////////////////////////////////////////////////////////////
///����
const char TF_CPD_Nochange = '0'; 
///����
const char TF_CPD_Increase = '1'; 
///����
const char TF_CPD_Decrease = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDirectionType��һ���ֱֲ仯��������
/////////////////////////////////////////////////////////////////////////
///����
const char TF_PSD_Nochange = '0'; 
///����
const char TF_PSD_Increase = '1'; 
///����
const char TF_PSD_Decrease = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDateType��һ���ֲ����ڱ�־����
/////////////////////////////////////////////////////////////////////////
///���ճֲ�
const char TF_PSD_Today = '1'; 
///��ʷ�ֲ�
const char TF_PSD_History = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///TradingPhaseType��һ�����׽׶�����
/////////////////////////////////////////////////////////////////////////
///�ǽ���ʱ��
const char TF_TP_NonTrade = '0'; 
///���Ͼ���ʱ��
const char TF_TP_Bidding = '1'; 
///��������ʱ��
const char TF_TP_Continuous = '2'; 
///ͣ��ʱ��
const char TF_TP_Suspension = '3'; 
///�۶�ʱ��
const char TF_TP_Fuse = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OpenRestrictionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///�޿�������
const char TF_OR_None = '0'; 
///���Ʊ��ҿ���
const char TF_OR_NoCoverOpen = '1'; 
///������������
const char TF_OR_NoSellOpen = '2'; 
///�����������֡����ҿ���
const char TF_OR_NoSellAndCoverOpen = '3'; 
///�������뿪��
const char TF_OR_NoBuyOpen = '4'; 
///�������뿪�֡����ҿ���
const char TF_OR_NoBuyAndCoverOpen = '5'; 
///�������뿪�֡���������
const char TF_OR_NoBuyAndSellOpen = '6'; 
///�������뿪�֡��������֡����ҿ���
const char TF_OR_NoBuySellAndCoverOpen = '7'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionTypeType��һ���ֲ���������
/////////////////////////////////////////////////////////////////////////
///���ֲ�
const char TF_PT_Net = '1'; 
///�ۺϳֲ�
const char TF_PT_Gross = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDateTypeType��һ���ֲ�������������
/////////////////////////////////////////////////////////////////////////
///ʹ����ʷ�ֲ�
const char TF__UseHistory = '1'; 
///��ʹ����ʷ�ֲ�
const char TF__NoUseHistory = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorTypeType��һ��Ͷ������������
/////////////////////////////////////////////////////////////////////////
///��Ȼ��
const char TF_IT_Person = '1'; 
///����
const char TF_IT_Company = '2'; 
///Ͷ�ʻ���
const char TF_IT_Fund = '3'; 
///���ⷨ��
const char TF_IT_SpecialOrgan = '4'; 
///�ʹܻ�
const char TF_IT_Asset = '5'; 
///ϵͳ����Ա
const char TF_IT_Admin = 'a'; 
      
/////////////////////////////////////////////////////////////////////////
///IDCardTypeType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
///��֯��������
const char TF_DCT_EID = '0'; 
///�й��������֤
const char TF_DCT_IDCard = '1'; 
///����֤
const char TF_DCT_OfficerIDCard = '2'; 
///����֤
const char TF_DCT_PoliceIDCard = '3'; 
///ʿ��֤
const char TF_DCT_SoldierIDCard = '4'; 
///���ڲ�
const char TF_DCT_HouseholdRegister  = '5'; 
///����
const char TF_DCT_Passport = '6'; 
///̨��֤
const char TF_DCT_TaiwanCompatriotIDCard  = '7'; 
///����֤
const char TF_DCT_HomeComingCard = '8'; 
///Ӫҵִ�պ�
const char TF_DCT_LicenseNo = '9'; 
///˰��ǼǺ�/������˰ID
const char TF_DCT_TaxNo = 'A'; 
///�۰ľ��������ڵ�ͨ��֤
const char TF_DCT_HMMainlandTravelPermit  = 'B'; 
///̨�����������½ͨ��֤
const char TF_DCT_TwMainlandTravelPermit = 'C'; 
///����
const char TF_DCT_DrivingLicense = 'D'; 
///�����籣ID
const char TF_DCT_SocialID = 'F'; 
///�������֤
const char TF_DCT_LocalID = 'G'; 
///��ҵ�Ǽ�֤
const char TF_DCT_BusinessRegistration  = 'H'; 
///�۰������Ծ������֤
const char TF_DCT_HKMCIDCard  = 'I'; 
///���п������֤
const char TF_DCT_AccountsPermits = 'J'; 
///��������þ���֤
const char TF_DCT_PermanantResidence = 'K'; 
///�ʹܲ�Ʒ������
const char TF_DCT_AssetProductRecord = 'L'; 
///����֤��
const char TF_DCT_OtherCard = 'x'; 
      
/////////////////////////////////////////////////////////////////////////
///TradingCodeTypeType��һ�����ױ�����������
/////////////////////////////////////////////////////////////////////////
///Ͷ��
const char TF_TC_Speculation = '1'; 
///����
const char TF_TC_Arbitrage = '2'; 
///�ױ�
const char TF_TC_Hedge = '3'; 
///������
const char TF_TC_MarketMaker = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OptCommissionTypeType��һ����Ȩ������������
/////////////////////////////////////////////////////////////////////////
///��Ȩ��
const char TF_OPT_CT_StrikeFee = '1'; 
///����Ȩ��
const char TF_OPT_CT_BeStrikeDFee = '2'; 
///��Ȩ������
const char TF_OPT_CT_TransferFee = '3'; 
///���ַ�
const char TF_OPT_CT_Brokerage = '4'; 
///���׷�
const char TF_OPT_CT_TradeFee = '5'; 
///�����
const char TF_OPT_CT_SettleFee = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///CommDirectionType��һ��ί�з�������
/////////////////////////////////////////////////////////////////////////
///��
const char TF_CD_BuyOpen = '1'; 
///��ƽ
const char TF_CD_BuyClose = '2'; 
///����
const char TF_CD_SellOpen = '3'; 
///��ƽ
const char TF_CD_SellClose = '4'; 
///��Ȩ�Ϲ�
const char TF_CD_CallStrike = '5'; 
///��Ȩ�Ϲ�
const char TF_CD_PutStrike = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///RateTypeType��һ�����㷽ʽ����
/////////////////////////////////////////////////////////////////////////
///������
const char TF_RT_ByVolume = '1'; 
///�����
const char TF_RT_ByMoney = '2'; 
///����ֵ
const char TF_RT_ByFace = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///OperationTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///�ճ�ͬ������
const char TF_OPNT_Sync = '1'; 
///����ָ�����
const char TF_OPNT_Admin = '2'; 
///�����ֲֵ�������
const char TF_OPNT_Settle = '3'; 
///�ֲ�ռ�ñ�֤��
const char TF_OPNT_Margin = '4'; 
///��������
const char TF_OPNT_Other = '0'; 
      
/////////////////////////////////////////////////////////////////////////
///OptionTypeType��һ����Ȩ��������
/////////////////////////////////////////////////////////////////////////
///�Ϲ�
const char TF_OPT_TY_Call = 'C'; 
///�Ϲ�
const char TF_OPT_TY_Put = 'P'; 
      
/////////////////////////////////////////////////////////////////////////
///SystemStatusType��һ��ϵͳ״̬����
/////////////////////////////////////////////////////////////////////////
///�����������
const char TF_STS_SyncDone = '1'; 
///���н���״̬
const char TF_STS_Trading = '2'; 
///�������
const char TF_STS_Closed = '3'; 
///�������
const char TF_STS_Settled = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentRangeType��һ����Լ��Χ����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_INSTR_ALL = '1'; 
///֤ȯ���
const char TF_INSTR_PRODUCT_CLASS = '2'; 
///��һ��Լ
const char TF_INSTR_SINGLE = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///SeatTypeType��һ��ϯλ��������
/////////////////////////////////////////////////////////////////////////
///�Ͻ�����Ȩ
const char TF_ST_SHOPT = '1'; 
///�Ͻ�����Ʊ
const char TF_ST_SHSTK = '2'; 
///�����Ȩ
const char TF_ST_SZOPT = '3'; 
///�����Ʊ
const char TF_ST_SZSTK = '4'; 
///����
const char TF_ST_FEMAS = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///ResumeTypeType��һ��˽�����ش���ʽ����
/////////////////////////////////////////////////////////////////////////
///�ش�
const char TF_RT_Restart = '0'; 
///����
const char TF_RT_Resume = '1'; 
///��ǰ��ʼ
const char TF_RT_Quick = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CompanyTypeType��һ����˾��������
/////////////////////////////////////////////////////////////////////////
///�ڲ�����
const char TF_CT_INSIDE = '1'; 
///�����ͻ�
const char TF_CT_ORGAN = '2'; 
///���˿ͻ�
const char TF_CT_USER = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///EnbFlagType��һ��״̬��־����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_EF_NORMAL = 'N'; 
///���ر�
const char TF_EF_OFF = 'C'; 
///����
const char TF_EF_LOCK = 'L'; 
///����δͬ��
const char TF_EF_UNSYNC = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///ActionTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///�ͻ���
const char TF_ACT_CLIENT = '1'; 
///web��
const char TF_ACT_WEB = '2'; 
///����ƽ̨
const char TF_ACT_MARKET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AuthTypeType��һ��Ȩ����������
/////////////////////////////////////////////////////////////////////////
///ͨ��
const char TF_AUT_GENERAL = '0'; 
///ȯ���ڲ�
const char TF_AUT_INSIDE = '1'; 
///�ⲿ�ͻ�
const char TF_AUT_OUTSIDE = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///FileFlagType��һ������ִ��״̬����
/////////////////////////////////////////////////////////////////////////
///������
const char TF__InProgress = 'I'; 
///���ɳɹ�
const char TF__Success = 'S'; 
///����ʧ��
const char TF__Fail = 'F'; 
      
/////////////////////////////////////////////////////////////////////////
///MarketDataTypeType��һ������������������
/////////////////////////////////////////////////////////////////////////
///ʵʱ����
const char TF_MDT_REAL = '0'; 
///��ʷ����
const char TF_MDT_HIS = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///PaySubjectType��һ���ɷѿ�Ŀ����
/////////////////////////////////////////////////////////////////////////
///ͨ�÷���
const char TF_PSJ_GENERAL = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountTypeType��һ���˻���������
/////////////////////////////////////////////////////////////////////////
///��֤ͨȯ�˻�
const char TF_AT_STOCK = '1'; 
///�����˻�
const char TF_AT_CREDIT = '2'; 
///����Ʒ�˻�
const char TF_AT_DERIVATIVE = '3'; 
///�ڻ��˻�
const char TF_AT_FUTURES = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///ChannelTypeType��һ��ͨ����������
/////////////////////////////////////////////////////////////////////////
///UFT�ֲ�
const char TF_CHT_UFT = '1'; 
///CTP�ֲ�
const char TF_CHT_CTP = '2'; 
///����ֲ�
const char TF_CHT_FEMAS = '3'; 
///O32�ֲ�
const char TF_CHT_O32 = '4'; 
///ģ�⽻����
const char TF_CHT_SIMULATE = '5'; 
///UF20�ֲ�
const char TF_CHT_UF20 = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///FeeTypeType��һ�������������
/////////////////////////////////////////////////////////////////////////
///���׷�
const char TF_FT_TRADEFEE = '1'; 
///ӡ��˰
const char TF_FT_STAMPTAX = '2'; 
///������
const char TF_FT_TRANSFERFEE = '3'; 
///Ӷ��
const char TF_FT_BROKERFEE = '4'; 
///���ַ�
const char TF_FT_HANDLINGFEE = '5'; 
///֤�ܷ�
const char TF_FT_ADMINFEE = '6'; 
///������
const char TF_FT_OTHERFEE = '7'; 
///�����
const char TF_FT_CLEARINGFEE = 'a'; 
///�����
const char TF_FT_SETTLEFEE = 'b'; 
///ί���걨��
const char TF_FT_PERORDER = 'c'; 
///�����걨��
const char TF_FT_PERCANCEL = 'd'; 
      
/////////////////////////////////////////////////////////////////////////
///CalculateTypeType��һ�����ü���ģʽ����
/////////////////////////////////////////////////////////////////////////
///�ֱ�
const char TF_CT_TOTAL = '1'; 
///�ϱ�
const char TF_CT_PER = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CancelFlagType��һ��������־����
/////////////////////////////////////////////////////////////////////////
///��ͨί��
const char TF_CF_ORDER = '1'; 
///����ί��
const char TF_CF_CANCEL = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///StockRealBackType��һ���ر�֤ȯ��־����
/////////////////////////////////////////////////////////////////////////
///����֤ȯ���첻����
const char TF_SRB_FALSE = '0'; 
///����֤�������
const char TF_SRB_TRUE = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///FundRealBackType��һ���ر��ʽ��־����
/////////////////////////////////////////////////////////////////////////
///�����ʽ𲻿���
const char TF_FRB_FALSE = '0'; 
///�����ʽ������
const char TF_FRB_TRUE = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentControlLevelType��һ��֤ȯ���Ʋ㼶����
/////////////////////////////////////////////////////////////////////////
///֤ȯ���
const char TF_INSTC_LEVEL_PRODUCT_CLASS = '1'; 
///��һ֤ȯ
const char TF_INSTC_LEVEL_SINGLE = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentRangeTypeType��һ��֤ȯ��Χ����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_INSTC_RANGE_ALL = '1'; 
///����
const char TF_INSTC_RANGE_SET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountControlLevelType��һ���˻����Ͽ��Ʋ㼶����
/////////////////////////////////////////////////////////////////////////
///��˾
const char TF_AR_LEVEL_COMPANY = '1'; 
///�˻�
const char TF_AR_LEVEL_ACCOUNT = '2'; 
///���
const char TF_AR_LEVEL_COMBO = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountRangeTypeType��һ���˻����Ϸ�Χ����
/////////////////////////////////////////////////////////////////////////
///����
const char TF_AR_RANGE_ALL = '1'; 
///����
const char TF_AR_RANGE_SET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///UnderlyingTypeType��һ����Ȩִ�з�ʽ����
/////////////////////////////////////////////////////////////////////////
///ŷʽ
const char TF_UNDER_EURO = 'E'; 
///��ʽ
const char TF_UNDER_AMER = 'A'; 

/////////////////////////////////////////////////////////////////////////
///��������
/////////////////////////////////////////////////////////////////////////

    
///֤ȯ���볤�ȵĶ���
const int TF_INSTRUMENTID_LEN = (30 + 1); 
///���������볤�ȵĶ���
const int TF_EXCHANGEID_LEN = (8 + 1); 
///��Լ���Ƴ��ȵĶ���
const int TF_INSTRUMENTNAME_LEN = (20 + 1); 
///��Ʒ���볤�ȵĶ���
const int TF_PRODUCTID_LEN = (30 + 1); 
///���͹�˾���볤�ȵĶ���
const int TF_BROKERID_LEN = (10 + 1); 
///��̨���볤�ȵĶ���
const int TF_PROVIDERID_LEN = (10 + 1); 
///ĸ�˻����볤�ȵĶ���
const int TF_BROKERINVESTORID_LEN = (32 + 1); 
///ĸ�˻����Ƴ��ȵĶ���
const int TF_BROKERINVESTORNAME_LEN = (80 + 1); 
///���볤�ȵĶ���
const int TF_PASSWORD_LEN = (40 + 1); 
///��Ȩ���˻����볤�ȵĶ���
const int TF_OPTSUBINVESTORID_LEN = (8 + 1); 
///ϯλ�ų��ȵĶ���
const int TF_BUSINESSUNIT_LEN = (5 + 1); 
///Ӫҵ�����볤�ȵĶ���
const int TF_BRANCHID_LEN = (5 + 1); 
///Ͷ�������Ƴ��ȵĶ���
const int TF_INVESTORNAME_LEN = (80 + 1); 
///�û����볤�ȵĶ���
const int TF_USERID_LEN = (14 + 1); 
///���ص�¼�û����볤�ȵĶ���
const int TF_GATEWAYUSERID_LEN = (14 + 1); 
///�û����Ƴ��ȵĶ���
const int TF_USERNAME_LEN = (80 + 1); 
///������Ƴ��ȵĶ���
const int TF_COMBONAME_LEN = (80 + 1); 
///�ʲ���Ԫ��ţ�UFX Only�����ȵĶ���
const int TF_ASSETNO_LEN = (16 + 1); 
///��ע���ȵĶ���
const int TF_MEMO_LEN = (80 + 1); 
///�ɽ���ų��ȵĶ���
const int TF_TRADEID_LEN = (20 + 1); 
///������ų��ȵĶ���
const int TF_ORDERSYSID_LEN = (16 + 1); 
///���ر�����ų��ȵĶ���
const int TF_ORDERLOCALID_LEN = (12 + 1); 
///�������ó��ȵĶ���
const int TF_ORDERREF_LEN = (50 + 1); 
///ȡ���������ó��ȵĶ���
const int TF_ORDERCANCELREF_LEN = (10 + 1); 
///����������Ա���볤�ȵĶ���
const int TF_BRANCHPBU_LEN = (20 + 1); 
///�ʽ��˻����볤�ȵĶ���
const int TF_ACCOUNTCODE_LEN = (30 + 1); 
///��ƽ��־���ȵĶ���
const int TF_COMBOFFSETFLAG_LEN = (4 + 1); 
///Ͷ���ױ���־���ȵĶ���
const int TF_COMBHEDGEFLAG_LEN = (4 + 1); 
///���������ó��ȵĶ���
const int TF_ORDERACTIONREF_LEN = (10 + 1); 
///״̬��Ϣ���ȵĶ���
const int TF_STATUSMSG_LEN = (80 + 1); 
///������Ϣ���ȵĶ���
const int TF_ERRORMSG_LEN = (80 + 1); 
///��������б���|�ָ���ȵĶ���
const int TF_COMBOIDLIST_LEN = (512 + 1); 
///֤ȯ���״��볤�ȵĶ���
const int TF_INSTRUMENTCODE_LEN = (20 + 1); 
///���������Ƴ��ȵĶ���
const int TF_EXCHANGENAME_LEN = (50 + 1); 
///ϯλ���Ƴ��ȵĶ���
const int TF_SEATNAME_LEN = (50 + 1); 
///֤���ų��ȵĶ���
const int TF_IDCARDNO_LEN = (100 + 1); 
///Ͷ�����˻��ӱ��볤�ȵĶ���
const int TF_OPTCLIENTID_LEN = (10 + 1); 
///�����ų��ȵĶ���
const int TF_GROUPID_LEN = (14 + 1); 
///�������Ƴ��ȵĶ���
const int TF_GROUPNAME_LEN = (50 + 1); 
///��֯�ܹ����볤�ȵĶ���
const int TF_DEPARTMENTID_LEN = (14 + 1); 
///��֯�ܹ����Ƴ��ȵĶ���
const int TF_DEPTNAME_LEN = (50 + 1); 
///����Ա���Ƴ��ȵĶ���
const int TF_OPERATORNAME_LEN = (20 + 1); 
///��Ʒ���Ƴ��ȵĶ���
const int TF_PRODUCTNAME_LEN = (50 + 1); 
///Ͷ�ʵ�Ԫ���볤�ȵĶ���
const int TF_INVESTUNITID_LEN = (14 + 1); 
///ϯλ�ų��ȵĶ���
const int TF_SEATID_LEN = (10 + 1); 
///�ʽ��˻����Ƴ��ȵĶ���
const int TF_ACCOUNTNAME_LEN = (50 + 1); 
///���ִ��볤�ȵĶ���
const int TF_CURRENCYID_LEN = (3 + 1); 
///Ͷ�ʵ�Ԫ���Ƴ��ȵĶ���
const int TF_INVESTUNITNAME_LEN = (50 + 1); 
///Ͷ����ϴ��볤�ȵĶ���
const int TF_PORTFOLIOID_LEN = (14 + 1); 
///���ױ��볤�ȵĶ���
const int TF_TRADECODE_LEN = (18 + 1); 
///������볤�ȵĶ���
const int TF_RULECODE_LEN = (128 + 1); 
///�������Ƴ��ȵĶ���
const int TF_RULENAME_LEN = (50 + 1); 
///�޸�������ϸ��json�ַ��������ȵĶ���
const int TF_VALUE_LEN = (768 + 1); 
///Ԥ���ֶ�1���ȵĶ���
const int TF_THIRDREFF1_LEN = (20 + 1); 
///Ԥ���ֶ�2���ȵĶ���
const int TF_THIRDREFF2_LEN = (50 + 1); 
///ǰ�õ�ַ���ȵĶ���
const int TF_FRONTADDRESS_LEN = (31 + 1); 
///���ļ�·�����ȵĶ���
const int TF_FLOWPATH_LEN = (127 + 1); 
///ָ����볤�ȵĶ���
const int TF_ADMINCODE_LEN = (32 + 1); 
///������Ʒ���볤�ȵĶ���
const int TF_UNDERLYINGINSTRUMENTID_LEN = (30 + 1); 
///Ͷ����϶�Ӧ�ĺ�Լ���볤�ȵĶ���
const int TF_KEYINSTRUMENTID_LEN = (30 + 1); 
///��˾���Ƴ��ȵĶ���
const int TF_COMPANYNAME_LEN = (50 + 1); 
///����Ա��ɫ���ȵĶ���
const int TF_OPROLES_LEN = (100 + 1); 
///(�ѷϳ�)����Ա���Բ�ѯ���˻����ϳ��ȵĶ���
const int TF_QRYACCOUNTIDS_LEN = (500 + 1); 
///(�ѷϳ�)����Ա���Բ������˻����ϳ��ȵĶ���
const int TF_OPACCOUNTIDS_LEN = (500 + 1); 
///����Ա���Բ�ѯ����ϼ��ϳ��ȵĶ���
const int TF_QRYCOMBOIDS_LEN = (500 + 1); 
///����Ա���Բ�������ϼ��ϳ��ȵĶ���
const int TF_OPCOMBOIDS_LEN = (500 + 1); 
///��ϵ�˳��ȵĶ���
const int TF_LINKMAN_LEN = (40 + 1); 
///��ϵ��ַ���ȵĶ���
const int TF_ADDRESS_LEN = (50 + 1); 
///��ϵ�绰���ȵĶ���
const int TF_TEL_LEN = (40 + 1); 
///�������䳤�ȵĶ���
const int TF_EMAIL_LEN = (40 + 1); 
///����Ա�绰���ȵĶ���
const int TF_OPTEL_LEN = (40 + 1); 
///����Ա���䳤�ȵĶ���
const int TF_OPEMAIL_LEN = (40 + 1); 
///ע��ʱ�䳤�ȵĶ���
const int TF_REGIDATE_LEN = (14 + 1); 
///�޸�ʱ�䳤�ȵĶ���
const int TF_UPTTIME_LEN = (14 + 1); 
///��¼ʱ�䳤�ȵĶ���
const int TF_LOGTIME_LEN = (14 + 1); 
///�����޸�ʱ�䳤�ȵĶ���
const int TF_PWDUPTTIME_LEN = (14 + 1); 
///��¼����ʱ�䳤�ȵĶ���
const int TF_LOGERRTIME_LEN = (14 + 1); 
///Ȩ��ID���ȵĶ���
const int TF_AUTHID_LEN = (8 + 1); 
///Ȩ���������ȵĶ���
const int TF_AUTHDESC_LEN = (30 + 1); 
///��Ȩ�޳��ȵĶ���
const int TF_PARENTID_LEN = (8 + 1); 
///�������ȵĶ���
const int TF_ACTION_LEN = (60 + 1); 
///�����������ȵĶ���
const int TF_ACTIONDESC_LEN = (3000 + 1); 
///�������ȵĶ���
const int TF_RESV_LEN = (300 + 1); 
///����ʱ�䳤�ȵĶ���
const int TF_CRTTIME_LEN = (14 + 1); 
///���һ�θ���ʱ�䳤�ȵĶ���
const int TF_LASTUPTTIME_LEN = (14 + 1); 
///���һ��ʹ��ʱ�䳤�ȵĶ���
const int TF_LASTUSRTIME_LEN = (14 + 1); 
///�ӿڱ�ʶ���ȵĶ���
const int TF_CMDID_LEN = (100 + 1); 
///ϵͳ��ˮ���ȵĶ���
const int TF_SYSSEQID_LEN = (10 + 1); 
///��׺�ļ����ͳ��ȵĶ���
const int TF_FILEPOSTFIX_LEN = (10 + 1); 
///��ɫ�ų��ȵĶ���
const int TF_ROLEID_LEN = (3 + 1); 
///��ɫ���Ƴ��ȵĶ���
const int TF_ROLENAME_LEN = (20 + 1); 
///�ļ����Ƴ��ȵĶ���
const int TF_FILENAME_LEN = (120 + 1); 
///�ļ��洢·�����ȵĶ���
const int TF_FILEURL_LEN = (120 + 1); 
///�ļ���ѯ�������ȵĶ���
const int TF_FILEINFO_LEN = (120 + 1); 
///�������Ƴ��ȵĶ���
const int TF_SEQNAME_LEN = (50 + 1); 
///����IP��ַ���������ȵĶ���
const int TF_IPADDRESS_LEN = (500 + 1); 
///����ɷ�ʱ�䳤�ȵĶ���
const int TF_LASTPAYTIME_LEN = (14 + 1); 
///�ɷ�ʱ�䳤�ȵĶ���
const int TF_PAYTIME_LEN = (14 + 1); 
///�ͻ��ų��ȵĶ���
const int TF_CLIENTID_LEN = (50 + 1); 
///ͨ�����Ƴ��ȵĶ���
const int TF_CHANNELNAME_LEN = (50 + 1); 
///�ֲֽӿ�IP���ȵĶ���
const int TF_SYSIP_LEN = (20 + 1); 
///�ֲֽӿڶ˿ڳ��ȵĶ���
const int TF_SYSPORT_LEN = (10 + 1); 
///�ֲ��������ó��ȵĶ���
const int TF_CHANNELCONFIG_LEN = (256 + 1); 
///��ע���ȵĶ���
const int TF_REMARK_LEN = (200 + 1); 
///����IP���ȵĶ���
const int TF_ORDERIP_LEN = (20 + 1); 
///����MAC���ȵĶ���
const int TF_ORDERMAC_LEN = (20 + 1); 
///����Ӳ�����кų��ȵĶ���
const int TF_ORDERHDNUM_LEN = (50 + 1); 
///���������볤�ȵĶ���
const int TF_ORDERMACCODE_LEN = (50 + 1); 
///��������ϵͳ���ȵĶ���
const int TF_ORDEROS_LEN = (50 + 1); 
///���������볤�ȵĶ���
const int TF_EXCHANGEIDS_LEN = (256 + 1); 
///�˻����ϳ��ȵĶ���
const int TF_ACCOUNTIDS_LEN = (512 + 1); 
///֤ȯ���뼯�ϳ��ȵĶ���
const int TF_INSTRUMENTIDS_LEN = (512 + 1); 
///O32����Ա���볤�ȵĶ���
const int TF_O32OPERATORNO_LEN = (15 + 1); 
///O32����Ա���볤�ȵĶ���
const int TF_O32OPERATORPWD_LEN = (15 + 1); 
///O32������볤�ȵĶ���
const int TF_O32ACCOUNTCODE_LEN = (31 + 1); 
///O32��ϱ�ų��ȵĶ���
const int TF_O32COMBINO_LEN = (15 + 1); 
///O32�ʲ���Ԫ��ų��ȵĶ���
const int TF_O32ASSETNO_LEN = (15 + 1); 
///�ͻ��������볤�ȵĶ���
const int TF_FEATURETOKEN_LEN = (500 + 1); 
///�ն˰汾�ų��ȵĶ���
const int TF_TERMINALVERESION_LEN = (32 + 1); 
///�ն������볤�ȵĶ���
const int TF_FEATURECODE_LEN = (100 + 1); 
///MAC��ַ�б��ȵĶ���
const int TF_MACADDRESSES_LEN = (200 + 1); 
///������ʶ���ȵĶ���
const int TF_SYSTEMCONFIGKEY_LEN = (64 + 1); 
///���������Ƴ��ȵĶ���
const int TF_SYSTEMCONFIGNAME_LEN = (64 + 1); 
///�������ͳ��ȵĶ���
const int TF_SYSTEMCONFIGTYPE_LEN = (64 + 1); 
///����ֵ���ȵĶ���
const int TF_SYSTEMCONFIGVALUE_LEN = (64 + 1); 
 
static const char *TF_EXCHANGE_SSE = "SH";
static const char *TF_EXCHANGE_SZSE = "SZ";
static const char *TF_EXCHANGE_CFFEX = "CFFEX";
static const char *TF_EXCHANGE_SHFE = "SHFE";
static const char *TF_EXCHANGE_DCE = "DCE";
static const char *TF_EXCHANGE_CZCE = "CZCE";
static const char *TF_EXCHANGE_INE = "INE";
}}

#endif
  