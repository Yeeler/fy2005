#define X_COOR -30
#define Y_COOR -40
#define Z_COOR 40
#define R_FLAG 49
#define FREE_SPACE 2
#define CONSTRUCT_TREE 1
#define BASIC_TAX 280
#define BASIC_SCORE_TAX 200

#define TOTAL_GOLD 300
#define TOTAL_SCORE 240

#define OWNER "isan"
#define TIMESTAMP "1"
#define TIMESTAMP2 "1396011428"
#define CLASS "annie"

#include <ansi.h>

inherit XROOM;

void create()
{
set("short", "戏言使");
set("long", @LONG
现实感根本是虚无
必然性根本是失落
理论式根本是零碎
净化根本是滑稽
整合根本是水泡
伏线根本是单字
说服力根本是涓滴
常识根本是空洞
关联根本是无形
世界规则根本没有一条
最重要的是
浪漫根本不存在

LONG
);
        set("exits", ([
"out" : "/p/residence/sword1.c",
]));
set("objects", ([
       ]) );
	set("coor/x",X_COOR);
	set("coor/y",Y_COOR);
	set("coor/z",Z_COOR);
	set("room_flag",R_FLAG);
	set("owner", OWNER);
	set("class", CLASS);
	set("timestamp",TIMESTAMP);
	set("timestamp2",TIMESTAMP2);
	set("free_space",FREE_SPACE);
	set("basic_tax",BASIC_TAX);
	set("basic_score_tax",BASIC_SCORE_TAX);
	set("tree",CONSTRUCT_TREE);
	set("total_gold",TOTAL_GOLD);
	set("total_score",TOTAL_SCORE);
	setup();

}
