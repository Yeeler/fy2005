#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", YEL"����Ժ"NOR);
	set("long", @LONG


                        [1;37m��                ��
                        �U[1;31m����������������[1;37m�U
            ���T�T�T�T�T�T�T�T[1;36m ��  �� [1;37m�T�T�T�T�T�T�T�T��
                [1;31m�U[1;33m����[1;31m�U[1;33m����[1;31m�U[1;33m  ����  [1;31m�U[1;33m����[1;31m�U[1;33m����[1;31m�U
                �ػػػػػػػػػػػػػػػػػ�
      ��������������������������������������������������������
          �U[1;33m  ��[1;31m�U[1;33m����[1;31m�U[1;33m����[1;31m�U[1;30m��������[1;31m�U[1;33m����[1;31m�U[1;33m����[1;31m�U[1;33m��  [1;31m�U
        �ػػػػػػػػػػ�[1;30m��������[1;31m�ػػػػػػػػػػ�[2;37;0m[37m
       =====================���T�T�T�T��=====================
    �{���ԡԡԡԡԡԡԡԡԨ����T�T�T�T�����ԡԡԡԡԡԡԡԡԨ��{
[2;37;0m  ����������������������������������������������������������������

LONG
        );
	set("exits",([
		"northdown" : __DIR__"25",
	]) );

	set("objects", ([
	__DIR__"npc/cu" : 1,
					]) );

  	set("coor/x",20);
	set("coor/y",40);
	set("coor/z",10);
	set("outdoors", "potboil");
	setup();
}


/*
�X[ ��- FengYun -�� ]���������[
��[dancing_faery@hotmail.com]�������[
��[ ��annie 09.2003�� ]�������a    ��
��[ ������������¶������ʱ������˪ ��
�^��������������������������������-�a
*/

/*

HIW
[1;37m
HIR
[1;31m
HIY
[1;33m
HIC
[1;36m
NOR
[2;37;0m
*/