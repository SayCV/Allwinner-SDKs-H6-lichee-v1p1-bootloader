//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//    I BBMMBB      BBMMBBI     BBI EEMMFFI BBMMI     BBI EEMMFFI BBMMI       BBMMBBI   EEMMI EEMMLL        //
//    EEI   EEFF  EEI   LLBB  EEMMBBI I BBEE  I EE  EEMMBBI I BBEE  I EE    EEI   LLBB    EEBBI I BB        //
//  I FF        I EE      BBI   EEI     EEI   I EE    EEI     EEI   I EE  I EE      BBI   EEI   I EE        //
//  LLFF        LLEE      EELL  EEI     EEI   I EE    EEI     EEI   I EE  LLEE      EELL  EEI   I EE        //
//  I EE      I I BB      EEI   EEI     EEI   I EE    EEI     EEI   I EE  I BB      EEI   EEI   I EE        //
//    BBLL  I I   BBFF  I EE    EEI     EEI   I BB    EEI     EEI   I BB    BBFF  I EE    BBI   I EE        //
//    I BBMMEE    I BBMMBB    EEMMMMLLBBMMBBLLMMMMEEEEMMMMLLBBMMBBLLMMMMEE  I BBMMBB    EEMMMMLLBBMMBB      //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
//                                                Scott System                                              //
//                                                                                                          //
//                               (c) Copyright 2006-2007, Scottyu China                                     //
//                                                                                                          //
//                                           All Rights Reserved                                            //
//                                                                                                          //
// File    : fifo.h                                                                                         //
// By      : scottyu                                                                                        //
// Version : V1.00                                                                                          //
// Time    : 2008-07-15 15:30:22                                                                            //
//         :                                                                                                //
//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
// HISTORY                                                                                                  //
//                                                                                                          //
// 1 2008-07-15 15:30:22                                                                                    //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//


#ifndef ___FIFO__H______
#define ___FIFO__H______



#include "basetypes.h"


//------------------------------------------------------------------------------------------------------------
//ר�õ����ݽṹ������ѭ��������
//------------------------------------------------------------------------------------------------------------
typedef struct tagFIFO
{
	u8* ptr;		//��������ָ��
	u32 Type;		//���������ͱ�ʶ
	u32 BlockSize;	//���������ݿ�Ĵ�С	
	u32	BlockNum;	//���������ݿ����Ŀ
	u32	iWrite;		//д���ݿ�ľ�����ţ�ȡģ��ɵõ�������
	u32	iRead;		//�����ݿ�ľ�����ţ�ȡģ��ɵõ�������
}FIFO;
//˵�������þ�����ſ��Ա�֤WriteNum���Ǵ���ReadNum�����ݶ�дʱ���������š�


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
FIFO * CreateFifo(u32 blocksize, u32 blocknum, u32 type);


//------------------------------------------------------------------------------------------------------------
//������ʹ�ý�����Ӧ�ͷ��ڴ�
//------------------------------------------------------------------------------------------------------------
u32 ReleaseFifo(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 FifoNum(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 FifoSize(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 FifoFree(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 FifoUsed(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 WriteFifo(FIFO * fifo, u8 * buffer, u32 size);


//------------------------------------------------------------------------------------------------------------
//�ӻ����������ݵ��㷨
//------------------------------------------------------------------------------------------------------------
u32 ReadFifo(FIFO * fifo, u8 * buffer, u32 size);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 CleanFifo(FIFO * fifo);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 IsFifoFull(FIFO * fifo);


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
u32 IsFifoEmpty(FIFO * fifo);


//------------------------------------------------------------------------------------------------------------
// THE END !
//------------------------------------------------------------------------------------------------------------

#endif //___FIFO__H______
