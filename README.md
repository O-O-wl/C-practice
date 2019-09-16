# C-자료구조 / 알고리즘 🧐

- [자료구조](##-자료구조)
- [알고리즘](-# 알고리즘)



<br>

## 자료구조

> 데이터를 저장하는 형태 

### 리스트 

- **가변크기**를 가지며 삽입/삭제에 용이하지만 탐색에는 비용이 비싸다.
- 링크드 리스트의 경우, 데이터를 저장하는 공간과 다음노드의 주소를 알아야하여 **한 노드당 차지하는 메모리공간이 크다.**

<br>

### 배열

- **고정크기**를 가지며, 탐색은 빠르나, 삭제시 빈 공간을 채우기위한 재정렬이 필요하다.
- **공간을 미리 할당하기에 낭비하는 공간이 존재할 수 있다.**

<br>

### 스택

- 삽입/삭제가 정해진 규칙으로만 이뤄질 수 있는 자료구조.
- **중첩된 구조**와 같이, 나중에 들어온 입력이 먼저 처리되야 먼저 들어온 입력을 처리할 수 있는 구조에 적합하다.

<br>

### 큐

- 먼저 들어온 데이터를 먼저 처리해야할 경우 사용한다.

- 일반적으로 바로 처리가 불가능하고, **입력 들어오는 속도가 처리 속도보다 빠를 경우** 들어오는 즉각 처리가 불가능해서 저장해서 **대기시키고 처리한다**.

- 버퍼가 하나의 좋은 예이다.

  <br>

###  트리

- 이름과 같이 거꾸로된 나무처럼 생긴 자료구조이다.

  - **계층적인 자료를 표현**하고, 이진 트리와 같은 자료구조는 데이터 탐색이 매우 빠르다.

  ```
       (1)							  									(2)	
        A					
        |                                    B	  
      /   \                                 / \    
     B	   C                               D   E
    / \    🍃                             🍃  🍃
   D   E
  🍃  🍃
  ```

  트리는 위와 같은 나무를 거꾸로 해놓은 모양이며 D,C,E 나무의 끝에 위치한 잎(리프노드)이다.

  또 A는 나무가 시작되는 뿌리(루트노드)이다.

  재밌는 형태인 것은 (1)나무에서 가지를 뚝 뜯어서 심으면 다시 또 작은 나무(2)의 형태를 띄게된다. 

  이로 **큰 나무가 작은 나무를 포함하는 계층과 같은 형태를 띈다**. 또 이건 단위를 작게 작게 축소하면서 연산을 하는 재귀와 같은 방법으로 쉽게 해결 할 수 도 있다.

  <br>

  - **바이너리 트리**

    - 많은 트리의 형태중 특수한 형태로 모든 노드가 자식 노드를 2개씩 가진다.

    - 바이너리 탐색 트리 같은 형태로 구현하여 빠른 데이터 탐색이 가능하다.

      <br>

  -  **트리 순회**

    >  트리를 탐색하는 방법은 여러가지다. 

    - 전위 순회

      - **루트 노드 ➡️ 왼쪽 하위트리 ➡️ 오른쪽 하위 트리**를 순회한다.

      - 예)  A -> B를 루트로하는 트리 -> C를 루트로하는 트리를 순회

        <br>

    - 중위 순회

      - **루트의 왼쪽 하위 트리 ➡️ 상위노드 ➡️ 오른쪽 하위트리** 의 순서로 순회한다.

      - 예) B를 루트로 하는 트리 ➡️ 상위노드 ➡️ C를 루트로 하는 트리

        <br>

    - 후위 순회

      - **루트의 왼쪽 하위 트리➡️ 오른쪽 하위트리 ➡️ 상위노드**  의 순서로 순회한다
      - 예) B를 루트로 하는 트리  ➡️ C를 루트로 하는 트리 ➡️ 상위노드

  <br>

  <br>

  ## 알고리즘

  >

  

