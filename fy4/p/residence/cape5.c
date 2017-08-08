inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",5);

  set ("short", "天涯海角楼"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG

    帘外雨潺潺，春意阑珊。
    罗衾不耐五更寒。
    梦里不知身是客，一晌贪欢。

    独自莫凭栏，无限江山，
    别时容易见时难。
    流水落花春去也，天上人间。

    
LONG);
        set("exits", ([
"517" : __DIR__"userroom/msj1307976927",
"516" : __DIR__"userroom/stork1306732554",
"515" : __DIR__"userroom/cdummy1306732303",
"514" : __DIR__"userroom/bdummy1306728430",
"513" : __DIR__"userroom/adummy1306728328",
"512" : __DIR__"userroom/nxf1304705545",
"511" : __DIR__"userroom/xiaof1304435546",
"510" : __DIR__"userroom/win1301805161",
"509" : __DIR__"userroom/zhuwenqi1301475456",
"508" : __DIR__"userroom/senditb1284222851",
"507" : __DIR__"userroom/freewill1284213540",
"506" : __DIR__"userroom/huaf1275160183",
"505" : __DIR__"userroom/huae1275160165",
"504" : __DIR__"userroom/huad1275160135",
"503" : __DIR__"userroom/huac1275160095",
"502" : __DIR__"userroom/huab1275159953",
"501" : __DIR__"userroom/sendita1274976587",
  "down" : __DIR__"cape"+(query("floor")-1),
  "up" : __DIR__"cape"+(query("floor")+1), 
]));
        set("coor/x",-25);
        set("coor/y",-45);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
