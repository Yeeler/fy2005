inherit ROOM;
void create()
{
        set("short", "�ھ��᷿");
        set("long", @LONG
�����ﲼ�úܼ򵥣�ֻ��һ��С����һ��С�����ͼ��ŷ��ʡ���̨�Ϸ���һ���ű���
������ż�֦����С���������䲻�󣬵��Ǹ����������ʵĸо���
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"ginhall",
]));
        set("objects", ([
        __DIR__"npc/resting_biao" : 2,
                        ]) );

        set("coor/x",30);
        set("coor/y",50);
        set("coor/z",-300);
        setup();
        replace_program(ROOM);
}