# Doer競プロ合宿9/3（土）

## 事前準備
- Python環境構築  
**Mac**HomeBrewからインストール https://skume.net/entry/2022/01/19/060000  
**Windows**

## 全体の流れ
|時間|内容|補足|
|:-------:|:---------|:--------:|
|14:00_14:25|競プロとは？(LT)||
|14:30~15:25|Python文法基礎講座||
|15:30~21:00|過去問演習|cozy_sauna&くまがメンター相談部屋に待機|
|21:00~22:40|コンテスト参加|[AtCoder](https://atcoder.jp/?lang=ja)|
|22:40~23:30|コンテストの感想戦・問題解説||

## Python文法基礎講座

<details>
    <summary>入力受け取り</summary>

|関数|内容|
|:-------:|:---------|
|input()|入力を受け取る|
|split()|入力を空白区切りにする|
|int()|文字列型を数字に変える|
|map()|複数の要素に同じ関数を使う|

##### **文字列で受け取る**
```
S = input()
```

##### **文字列で受け取る→数値に変換する**
```
S = int(input())
```

##### **文字列で受け取る→空白で区切る**
```
A, B = input().split()
```

##### **文字列で受け取る→空白で区切る→全てを数値に変換する**
```
A, B = map(int, input().split())
```
</details>

<details>
    <summary>Python関数一覧</summary>

|関数|内容|例|
|:-------:|:---------|----|
|max()|最大値を取得|max(1, 4, 2) -> 4|
|min()|最小値を取得|min(1, 4, 2) -> 1|
|sorted()|ソートする|sorted([1, 4, 2) -> [1, 2, 4]|
|print()|表示する|print('apple') -> 'apple'|
|reversed()|逆順にする|reversed([1, 4, 2]) -> [2, 4, 1]|
|join()|文字列を結合する|''.join(['a', 'b', 'c']) -> "abc"|
|list()|リストを生成|[1, 2, 3, 4]|
|set()|セットを生成|{1, 2, 3}|
|dict()|辞書を生成|{"apple": 2} {key: value}|
|range()|数字のリスト（みたいなもの）を生成|range(4) -> [0, 1, 2, 3]|


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