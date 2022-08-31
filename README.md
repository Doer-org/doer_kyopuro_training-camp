# Doer競プロ合宿9/3（土）

## 事前準備
- **Python環境構築**  
**【Mac】** https://skume.net/entry/2022/01/19/060000  
**【Windows】** https://prog-8.com/docs/python-env-win

## スケジュール
|時間|内容|補足|
|:-------:|:---------|:--------:|
|14:00_14:20|競プロとは？(LT)||
|14:30~15:20|Python文法基礎講座||
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

##### **文字列で受け取る→空白で区切る→全てを数値に変換する→リストにする**
```
A = list(map(int, input().split()))
```
</details>

<details>
    <summary>Python関数一覧</summary>

|関数|内容|例|
|:-------:|:---------|----|
|max()|最大値を取得|max(1, 4, 2) -> 4|
|min()|最小値を取得|min(1, 4, 2) -> 1|
|abs()|絶対値を取得|abs(-2) -> 2|
|sorted()|ソートする|sorted([1, 4, 2) -> [1, 2, 4]|
|print()|表示する|print('apple') -> 'apple'|
|reversed()|逆順にする|reversed([1, 4, 2]) -> [2, 4, 1]|
|join()|文字列を結合する|''.join(['a', 'b', 'c']) -> "abc"|
|list()|リスト|[1, 3, 4, 1]**重複あり**|
|set()|セットを生成|{1, 3, 4}**重複なし**|
|dict()|辞書を生成|{"apple": 2, "banana": 1} {key: value}|
|range()|数字のリスト（みたいなもの）を生成|range(4) -> [0, 1, 2, 3]|


</details>


<details>
    <summary>Python頻出処理</summary>

##### **四則演算など**
|関数|内容|例|
|:-------:|:---------|----|
|+|足し算|4 + 3 -> 7|
|-|引き算|4 - 3 -> -1|
|*|掛け算|4 * 3 -> 12|
|/|割り算|4 / 3 -> 1.33|
|//|割り算**（切り下げ）**|4 // 3 -> 1|
|%|あまり|4 % 3 -> 1|
|A[s:g]|Aはlist、s文字目からt文字目を取得|[1, 7, 4, 5, 9][1:3] -> [7, 4]|
|[要素] * N |N個同じ要素が入ったlistを作る|[0] * 3 -> [0, 0, 0]|
|True, False|bool値（大文字注意）|True, False|

##### **forループ**
```
for number in range(3):
    print(number)

#出力
0
1
2

for alp in "abc":
    print(alp)

#出力
'a'
'b'
'c'
```

</details>

<details>
    <summary>Python実行コマンド</summary>
#a.py という名前のファイルを実行（コマンドライン上で）

```
python3 a.py
```
#入力受付モードになるので、入力例を試す

</details>


## 過去問演習
- Problemsディレクトリの問題をひたすら解く！
    →　PythonとC++の解説コード添付
- AtCoderProblems[https://kenkoooo.com/atcoder/#/table/]
    →　解いた問題を管理できるサイト

## ABC(AtCoder Begginer Contest)に参加してみよう！
- 21:00までにやるべきこと
    - アカウント作成(https://atcoder.jp/?lang=ja)
    - 参加登録[ABC267](https://atcoder.jp/contests/abc267)
- 21:00 ~
    - 問題が出題される
    - コードを書く
    - 例を試す
    - 提出


## コンテストの感想戦・問題解説
- 解説します！