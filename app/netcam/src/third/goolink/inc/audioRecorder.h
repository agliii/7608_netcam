#ifdef VOICE_RECOG_DLL
#define VOICERECOGNIZEDLL_API __declspec(dllexport)
#else
#define VOICERECOGNIZEDLL_API
#endif

#ifndef AUDIO_RECORDER_H
#define AUDIO_RECORDER_H

#ifdef __cplusplus
extern "C" {
#endif

//_data的数据格式是根据initRecorder传入的数据类型定的，一般可能为short，或者是float。
//_sampleCout是表示_data中含有的样本数，不是指_data的长度
//返回已经处理的信号数，如果返回-1，则录音线程应退出
typedef int (*r_pwrite)(void *_writer, const void *_data, unsigned long _sampleCout);

/************************************************************************
* 创建录音机
*
* 传入参数：
*
* _sampleRateInHz为44100
* _channel为单声道，1为单声道，2为立体声
* _audioFormat为一个信号的bit数，单声道为16
*
*传出参数：
*
* **_precorder 指向用户句柄的指针
*
* 返回值 0 成功   -1 失败
************************************************************************/
int LT_voiceInitRecorder(int _sampleRateInHz, int _channel, int _audioFormat, int _bufferSize, void **_precorder);

/************************************************************************
* 开始录音
*
* 返回值 0 成功   -1 失败
************************************************************************/
int LT_voiceStartRecord(void *_recorder, void *_writer, r_pwrite _pwrite);

/************************************************************************
* 停止录音，该函数需同步返回（销毁函数是真正停止后才能释放内存）
*
*
* 返回值 0 成功   -1 失败
************************************************************************/
int LT_voiceStopRecord(void *_recorder);

/************************************************************************
* 释放录音器的资源
*
* 返回值 0 成功   -1 失败
************************************************************************/
int LT_voice_restore_init_status(int rateMode);


int LT_voice_input_enable(bool flag);


#ifdef __cplusplus
}
#endif


#endif
