inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",6);

  set ("short", "ժ��¥"+CHINESE_D->chinese_number(query("floor"))+"��");
  set ("long", @LONG

    ����������ǧ��   ���з���б��

    ���˹��Ͱ�����   ͵��ԧ��

LONG);
        set("exits", ([
"617" : __DIR__"userroom/sune1306512725",
"616" : __DIR__"userroom/sund1306512687",
"615" : __DIR__"userroom/sunc1306512635",
"614" : __DIR__"userroom/sunb1306512565",
"613" : __DIR__"userroom/sunshine1306512287",
"611" : __DIR__"userroom/mengya1304746214",
"610" : __DIR__"userroom/mengy1304620175",
"609" : __DIR__"userroom/sky1301808402",
"608" : __DIR__"userroom/sungirl1296534851",
"607" : __DIR__"userroom/sunboy1295917603",
"612" : __DIR__"userroom/monkdz1294402003",
"606" : __DIR__"userroom/alamar1287371274",
"605" : __DIR__"userroom/luna1286932120",
"604" : __DIR__"userroom/doll1286433499",
"603" : __DIR__"userroom/misemoon1283473073",
"602" : __DIR__"userroom/mise1282461978",
"601" : __DIR__"userroom/daidai1281932177",
  "down" : __DIR__"star"+(query("floor")-1),
  "up" : __DIR__"star"+(query("floor")+1), 
]));
        set("coor/x",-25);
        set("coor/y",-35);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
