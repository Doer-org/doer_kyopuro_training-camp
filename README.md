# Doer競プロ合宿9/3（土）

## 事前準備
- Python環境構築  
**Mac**HomeBrewからインストール https://skume.net/entry/2022/01/19/060000  
**Windows** https://prog-8.com/docs/python-env-win

## 全体の流れ
|Time|Content|Info|
|:-------:|:---------|:--------:|
|14:00_14:25|競プロとは？(LT)||
|14:30~15:25|Python文法基礎講座||
|15:30~21:00|過去問演習|cozy_sauna&くまがメンター相談部屋に待機|
|21:00~22:40|コンテスト参加|[AtCoder](https://atcoder.jp/?lang=ja)|
|22:40~23:30|コンテストの感想戦・問題解説||

## Python文法基礎講座

<!-- 1. 入力受け取り -->
<details>
    <summary>入力受け取り</summary>
- 入力受け取りでよく使う関数一覧 

|Func|Cont|
|:-------:|:---------|
|input()|入力を受け取る|
|split()|入力を空白区切りにする|
|int()|文字列型を数字に変える|
|map()|複数の要素に同じ関数を使う|

##### **文字列で受け取る**
```
S = input()
```
問題例[https://atcoder.jp/contests/abc266/tasks/abc266_a]

##### **文字列で受け取る→数値に変換する**
```
S = int(input())
```
例[https://atcoder.jp/contests/abc262/tasks/abc262_a]


##### **文字列で受け取る→空白で区切る**
```
A, B = input().split()
```

##### **文字列で受け取る→空白で区切る→全てを数値に変換する**
```
A, B = map(int, input().split())
```
例[https://atcoder.jp/contests/abc264/tasks/abc264_a]
</details>

<details>
    <summary>使用頻度の高い関数一覧</summary>
- 使用頻度の高い関数一覧  

|Func|Cont|
|:-------:|:---------|
|max()|最大値|
|min()|最小値|
|sort()|ソートする|
|print()|表示する|


</details>

---
## 過去問演習
- Problemsディレクトリの問題をひたすら解く！
    →　PythonとC++の解説コード添付
- AtCoderProblems[https://kenkoooo.com/atcoder/#/table/]
    →　解いた問題を管理できるサイト

---
## ABC(AtCoder Begginer Contest)に参加してみよう！
- AtCoder[https://atcoder.jp/?lang=ja]
- ABC267[https://atcoder.jp/contests/abc267]
- 21:00までにやるべきこと
    - アカウント作成
    - 参加登録
- 21:00 ~
    - 問題が出題される
    - コードを書く
    - テストを行う
    - 提出