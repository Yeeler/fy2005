inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",6);

  set ("short", "新月楼"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG
  
    平生书癖已均恙   解名缰   更逃羁网

    春近也   梅柳频看

    花间闲度   细雨流光

LONG);
        set("exits", ([
"612" : __DIR__"userroom/ymei1302948063",
"611" : __DIR__"userroom/fgywbh1302285484",
"610" : __DIR__"userroom/chiemia1300935463",
"609" : __DIR__"userroom/panda1298032194",
"608" : __DIR__"userroom/htl1297246518",
"607" : __DIR__"userroom/clj1297244860",
"606" : __DIR__"userroom/ykyk1297234007",
"603" : __DIR__"userroom/right1272642923",
"602" : __DIR__"userroom/memory1265214708",
"604" : __DIR__"userroom/thinker1291122622",
"605" : __DIR__"userroom/idler1291122952",
"601" : __DIR__"userroom/lovepig1264948364",
  "down" : __DIR__"moon"+(query("floor")-1),
  "up" : __DIR__"moon"+(query("floor")+1), 
]));
        set("coor/x",-15);
        set("coor/y",-35);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/