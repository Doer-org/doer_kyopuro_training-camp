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
|sorted()|小さい順にソートする|sorted([1, 4, 2) -> [1, 2, 4]|
|print()|表示する|print('apple') -> 'apple'|
|reversed()|逆順にする|reversed([1, 4, 2]) -> [2, 4, 1]|
|join()|文字列を結合する|''.join(['a', 'b', 'c']) -> "abc"|
|list()|リスト|[1, 3, 4, 1]**重複あり**|
|append()|リストに要素を入れる|A = []; A.append(1) -> A = [1]|
|set()|セットを生成|{1, 3, 4}**重複なし**|
|add()|セットに要素を入れる|A = {}; A.add(1) -> A = {1}|
|len()|リスト、セットの長さを取得|len([1, 2, 3]) -> 3|
|dict()|辞書を生成|{"apple": 2, "banana": 1} {key: value}|
|range()|数字のリスト（みたいなもの）を生成|range(4) -> [0, 1, 2, 3]|
|ord()|文字のUnicode値を取得|ord('a') -> 97|
|chr()|Unicode値から文字を取得取得|chr(97) -> 'a'|\
|exit()|プログラムを終了する||

</details>


<details>
    <summary>Python頻出処理</summary>

##### **四則演算など**
|処理|内容|例|
|:-------:|:---------|----|
|+|足し算|4 + 3 -> 7|
|-|引き算|4 - 3 -> -1|
|*|掛け算|4 * 3 -> 12|
|/|割り算|4 / 3 -> 1.33|
|//|割り算**（切り下げ）**|4 // 3 -> 1|
|%|あまり|4 % 3 -> 1|
|x+=1|1をxに足す|x = 3, x += 1 -> 4|
|x-=1|1をxから引く|x = 3, x -= 1 -> 2|
|A[s]|配列の前からs番目を取得|[1, 7, 4, 5, 9][1] -> 7|
|A[-s]|配列の後ろからs番目を取得|[1, 7, 4, 5, 9][-1] -> 9|
|A[s:g]|Aはlist、s文字目からt文字目を取得|[1, 7, 4, 5, 9][1:3] -> [7, 4]|
|[要素] * N |N個同じ要素が入ったlistを作る|[0] * 3 -> [0, 0, 0]|
|[[要素] * W for _ in range(H)]|H*Wの二次元配列を作る|[[0] * 2 for _ in range(2)] -> [[0, 0, 0],[0,0,0]]|
|True, False|bool値（大文字注意）|True, False|
|and|２つの条件を満たす|if(条件1)and(条件2):|
|and|２つの条件をどちらか満たす|if(条件1)or(条件2):|
|if elif else|if文, elifに注意|if(条件1)elif（条件2)else:|
|in|listやsetに要素が含まれるか|2 in [1, 2, 3] -> True|

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
a.py という名前のファイルを実行（コマンドライン上で）

```
python3 a.py
```
入力受付モードになるので、入力例を試す

</details>


## 過去問演習
- Problemsディレクトリの問題をひたすら解く！
    →　PythonとC++の解説コード添付
- AtCoderProblems[https://kenkoooo.com/atcoder/#/table/]
    →　解いた問題を管理できるサイト

- EASY NORMAL HARD problems

<details>
    <summary>EASY</summary>

|問題番号|問題リンク|解説|
|:-------:|:---------:|:----:|
|180_a|[問題](https://atcoder.jp/contests/abc180/tasks/abc180_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/180_a.py)|
|178_a|[問題](https://atcoder.jp/contests/abc178/tasks/abc178_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/178_a.py)|
|176_a|[問題](https://atcoder.jp/contests/abc176/tasks/abc176_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/176_a.py)|
|174_a|[問題](https://atcoder.jp/contests/abc174/tasks/abc174_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/174_a.py)|
|172_a|[問題](https://atcoder.jp/contests/abc172/tasks/abc172_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/172_a.py)|
|170_a|[問題](https://atcoder.jp/contests/abc170/tasks/abc170_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/170_a.py)|
|053_a|[問題](https://atcoder.jp/contests/abc053/tasks/abc053_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/053_a.py)|
|101_a|[問題](https://atcoder.jp/contests/abc101/tasks/abc101_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/101_a.py)|
|207_a|[問題](https://atcoder.jp/contests/abc207/tasks/abc207_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/207_a.py)|
|201_a|[問題](https://atcoder.jp/contests/abc201/tasks/abc201_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/201_a.py)|
|266_a|[問題](https://atcoder.jp/contests/abc266/tasks/abc266_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/266_a.py)|
|264_a|[問題](https://atcoder.jp/contests/abc264/tasks/abc264_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/264_a.py)|
|218_a|[問題](https://atcoder.jp/contests/abc218/tasks/abc218_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/218_a.py)|
|179_a|[問題](https://atcoder.jp/contests/abc179/tasks/abc179_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/179_a.py)|
|214_b|[問題](https://atcoder.jp/contests/abc214/tasks/abc214_b)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/214_b.py)|
|222_b|[問題](https://atcoder.jp/contests/abc222/tasks/abc222_b)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/222_b.py)|
|204_b|[問題](https://atcoder.jp/contests/abc204/tasks/abc204_b)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/204_b.py)|
|052_a|[問題](https://atcoder.jp/contests/abc052/tasks/abc052_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/052_a.py)|
|151_a|[問題](https://atcoder.jp/contests/abc151/tasks/abc151_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/151_a.py)|
|205_a|[問題](https://atcoder.jp/contests/abc205/tasks/abc205_a)|[Python](https://github.com/Doer-org/doer_kyopuro_training-camp/blob/main/problems/python_source_code/easy/205_a.py)|
</details>


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