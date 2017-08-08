inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",2);

  set ("short", "怒涛阁"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG
    
    此生自断天休问，独倚危楼。独倚危楼，不信人间别有愁。

    君来正是眠时节，君且归休。君且归休，说与西风一任秋。

LONG);
        set("exits", ([
"217" : __DIR__"userroom/dnb1322315190",
"216" : __DIR__"userroom/grantf1318901106",
"215" : __DIR__"userroom/grante1318900958",
"214" : __DIR__"userroom/grantd1318900218",
"213" : __DIR__"userroom/grantb1318899700",
"212" : __DIR__"userroom/gaoke1298400051",
"211" : __DIR__"userroom/chans1274870258",
"210" : __DIR__"userroom/horseeg1267252162",
"209" : __DIR__"userroom/slman1267154174",
"208" : __DIR__"userroom/mugua1267068139",
"207" : __DIR__"userroom/muguahy1267067899",
"206" : __DIR__"userroom/muguahs1267067418",
"205" : __DIR__"userroom/horseef1266508629",
"204" : __DIR__"userroom/giniushy1262426433",
"203" : __DIR__"userroom/ganlu1259230945",
"202" : __DIR__"userroom/xtaoqi1259230567",
"201" : __DIR__"userroom/horise1259228614",
  "down" : __DIR__"surge"+(query("floor")-1),
  "up" : __DIR__"surge"+(query("floor")+1), 
]));
        set("coor/x",-15);
        set("coor/y",-45);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
