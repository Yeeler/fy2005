

inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",1);

  set ("short", "非天塔底层");
  set ("long", @LONG

　　一个人
　　　　如果不去想他这一生中失去的有多少
　　　　　　只想他剩下的还有多少
　　　　　　　　那么他一定活得比较快乐。

　　　　　　　　　　古龙于1985年5月4日，病逝之前。

LONG);
        set("exits", ([
"106" : __DIR__"userroom/hzl1396821442",
"105" : __DIR__"userroom/tgl1396820489",
"104" : __DIR__"userroom/ajump1396597107",
"103" : __DIR__"userroom/hjp1396319481",
"102" : __DIR__"userroom/ldb1396243050",
"101" : __DIR__"userroom/mhub1396003783",
  //"down" : __DIR__"tower1",
  "up" : __DIR__"tower2", 
  "west" : __DIR__"enterance",
]));
  	set("coor/x",-10);
	set("coor/y",-40);
	set("coor/z",query("floor")*40);
	setup();
}

/*
 
               (\~~~/)            
               ( ．．)        

               (_____)~．      
   
　　　　　　　- FengYun - 　　　
　　　　　　annie 10.2003
　　　dancing_faery@hotmail.com
*/
