inherit ROOM;
#include <ansi.h>

void create()
{
    set("short", HIR"����ͤ"NOR);
    set("long", @LONG
������ÿ��ϰ��֮�˱���֮�¡�ÿ��һ��һ�ȵķ��ƳǱ�����������ǲ�����
�˶��ᵽ�������һ�α��У�������ˡ�ͤ�Ӽ䲻������ͨ�磬һ��������ľ��
�ѷ�������������֣�����ʯ�����������һ��ұ��¯��ͨ���¯���ͤ��һ�ж�
Ⱦ��һ���ɫ���ſ���һ���ʯ����������
LONG
    );
    set("exits", ([ /* sizeof() == 4 */
	"west" : __DIR__"huanyun8",
      ]));
    set("objects", ([
	__DIR__"npc/wangfuren" : 1,
      ]) );
    set("item_desc", ([
	"sign": @TEXT	
[0;1;37m����������������������������������������������������������������[0m
[0;1;36m			����ͤҵ��[0m
[0;1;37m����������������������������������������������������������������[0m

��������������������������󣬾Ϳ�������������������������
�˺�����������ָ��ܼ򵥣�	ji  ������
��������Ҫ��һ�Ѻ���������������Ҫ�ģ���Ҫ���ҵ��õĸ������ϡ�

[0;1;37m����������������������������������������������������������������[0m
TEXT
      ]) );

    set("coor/x",80);
    set("coor/y",-240);
    set("coor/z",0);
    set("map","fysouth");
    setup();
    replace_program(ROOM);

}