#define X_COOR -20
#define Y_COOR -30
#define Z_COOR 40
#define R_FLAG 33
#define FREE_SPACE 1
#define CONSTRUCT_TREE 1
#define BASIC_TAX 140
#define BASIC_SCORE_TAX 100

#define TOTAL_GOLD 150
#define TOTAL_SCORE 120

#define OWNER "fls"
#define TIMESTAMP "1"
#define TIMESTAMP2 "1396708171"
#define CLASS "annie"

#include <ansi.h>

inherit XROOM;

void create()
{
set("short", "兰州");
set("long", @LONG
兰州地势西部和南部高，东北低，黄河自西南流向东北，横穿全境，切穿山岭，形成峡谷与盆地相间的串珠形河谷。峡谷有八盘峡、柴家峡、桑园峡、大峡、乌金峡等；盆地有新城盆地、兰州盆地、泥湾一什川盆地、青城一水川盆地等。还有湟水谷地、庄浪河谷地、苑川河谷地、大通河谷地等。

LONG
);
        set("exits", ([
"out" : "/p/residence/smile1.c",
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
