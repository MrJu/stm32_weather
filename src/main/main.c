/*******************************************************************************************************                                
------------------------------------------本科毕业设计------------------------------------------------

	题目: 智能桌面天气预报系统
	功能:(1)实时天气显示,温湿度显示,日历显示;(2)空气质量显示;(3)收音机功能;(4)语音识别功能，可用语音搜索天气。
	注意：本工程使用keil4.54创建，使用其他高版本的keil打开可能编译不通过。若想要使用高版本的keil打开，
		  需重新创建工程。并且，本工程经过严格排版的，如打开发现格式混乱、注释混乱，可在Edit->Configurationx
		  中把Tab size改为4.
	作者: Lizhengnian 
	作者微信公众号：嵌入式大杂烩，欢迎关注查看更多分享。
	作者CSDN博客：https://blog.csdn.net/zhengnianli，欢迎关注查看更多分享。
	作品演示视频：https://mp.weixin.qq.com/s/CB4Agd98_zVXXd6nacywCg
********************************************************************************************************/
#define MAIN_CONFIG
#include "config.h"


/*******************************************************************************************************
** 函数: main
**------------------------------------------------------------------------------------------------------
** 参数: void
** 返回: 无
** 说明: 主函数
********************************************************************************************************/
int main(void)
{   
	//----------------------------------------------------------------------------------------------- 
	// 上电初始化函数
	SysInit();
	
	//----------------------------------------------------------------------------------------------- 
	// 主程序	
	while(1)
	{
		BackTask();
	}
}


/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/
