inherit ROOM;
#include <ansi.h>

void create()

{
        set("short", "С��");
        set("long", @LONG
һ��С·�������ԣ�����С�ţ�ͨ��ջ�԰�����ࡣ��԰��ܾ���û���ˣ�û
���������ϲ��Ļ�԰һ���������ӵģ�����ֻҪһ�߽�ȥ��ÿ�������ﶼ������
�˺�Ȼ���֣�ÿ���˶�����Ҫ�������
LONG
        );
        set("exits", ([ 
		"southeast" :  	__DIR__"garden3",
		"west" : 	__DIR__"sroad2",
	]));
        set("objects", ([
	]) );
	set("outdoors", "zangbei");
        set("coor/x",-1360);
        set("coor/y",970);
        set("coor/z",-50);
	set("map","zbeast");
	setup();
}