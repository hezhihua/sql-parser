# sql-parser

sql-parser 是在[hyrise/sql-parser](https://github.com/hyrise/sql-parser) 基础上修改而来,作为[horsedb](https://github.com/hezhihua/horsedb)的sql解释引擎   
新增了如下功能：  

1,hyrise的sql-parser 不支持 在创建表的时候同时创建索引, 新增了支持同时创建索引的功能  
2,增加支持create database,show databases,show tables 语句  
