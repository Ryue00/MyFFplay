#include <iostream>

#pragma comment(lib,"avcodec.lib")
#pragma comment(lib,"avdevice.lib")
#pragma comment(lib,"avfilter.lib")
#pragma comment(lib,"avformat.lib")
#pragma comment(lib,"avresample.lib")
#pragma comment(lib,"avutil.lib")
#pragma comment(lib,"postproc.lib")
#pragma comment(lib,"SDL2.lib")
#pragma comment(lib,"swresample.lib")
#pragma comment(lib,"swscale.lib")


#define __STDC_CONSTANT_MACROS

#ifdef _WIN32
//Windows
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/pixfmt.h"
#include "libswscale/swscale.h"
};
#else
//Linux...
#ifdef __cplusplus
extern "C"
{
#endif
#include <libavformat/avformat.h>
#ifdef __cplusplus
};
#endif
#endif

using namespace std;


int main(int argv, char* argc[])
{
	char filePath[] = "./test.mp4";

	
	av_register_all(); // 
	return 0;
}



