list of problems
================

* print "Hello, World" on cli
* 1 + 1
* input the size and output the size with kb, ..., yb or kib, ..., yib
   - examples/python/approximate_size.py

* mysql

   - pickle       serializes arbitrary python objects to and from a string of bytes
   - dbm          implements an access-by-key filesystem for storing strings 
   - shelve       uses the other two modules to store python objects on a file by key

공부방법
--------

책은 필요없다. 모든 것은 검색으로 해결한다.
그럼에도 기본 지식은 필요하다. 어디에서 얻는가? 이것도 검색이다.
각 언어의 문서를 적극 활용하자.
직접 프로그램을 만들면서 이론을 쌓아가자.
작은 기능부터 만든다.

기본지식
--------

.. 아래의 주제는 처음부터 설명할 것이 아니라 실제로 배우면서
   하나씩 재미로 알려주는 것이 좋을 듯하다.

.. 컴퓨터 동작의 모든 것은 비트/바이트로 생각하자.

.. rst/txt 등으로 된 파일의 내용을 한 곳에 모아 기존의 백업 내용을 정리해 보자.
   contents로 된 것은 또 따로 분류할 수 있게 만들어 보자.
   python, django 등의 키워드로 생각할 수 있다.

.. jpg, png 등 기존에 가지고 있는 사진을 정리해 보자.
   구글에서 받은 사진들을 어떻게 정리할 지 생각해 보자.

.. gimp에서 이미지에 효과를 입혀 좀 이쁘게 꾸며 보자.

컴퓨터는 뭔가?
   cpu, memory는 뭔가?
   부팅은 뭔가?
운영체제는 뭔가?
   리눅스, 윈도우, 맥의 차이는?
   왜 리눅스인가?
   리눅스의 종류는?
   bsd vs linux
프로그램은 무엇인가?
   컴퓨터에게 시키는 여러 일
   왜 프로그래밍을 배울까?
      실생활에서 컴퓨터에게 여러 일을 시키기 위해서.
      내가 편해지자고.
      사람들에게 컴퓨터를 통한 여러 서비스를 제공하여 수입을 만든다
터미널, 콘솔, 쉘, cli은 뭔가?
   zsh+omz
   vim
   git
   github
   docker
gui는 뭔가?


programming languages
   c/c++
   python
   javascript/html/css
   kotlin/java
   rust
   go
   shell scripting

언어의 기본 구성은 다음과 같다.

데이터 -- 언어가 다루는 가장 작은 단위의 데이터/자료형
데이터 묶음 -- 위의 자료형을 한 묶음으로 다룰 수 있는 여러 수단
흐름 제어 -- 데이터나 동작의 논리적인 흐름을 제어할 수 있는 수단
함수 -- 위의 데이터와 흐름 제어를 통해 구현한 기능을 프로그램에서 여러 번 불러 쓸 수 있는 수단
클래스 -- 사용자가 편의상으로 필요한 여러 기능이나 자료형을 묶을 수 있는 수단

cli에서 대부분의 작업은 진행된다.
---------------------------------

"내가 왔다" 출력하기 -- print()

숫자 다루기

   (수 종류)
   정수
   실수
   허수
   부울

   (연산)
   덧셈
   뺄셈
   곱셈
   나눗셈

   (표현법)
   이진법
   8진법
   16진법
   십진법
   각각의 변환 방법

글자 다루기

   내부적으로 이진수로만 데이터를 다루는데 어떻게 글자를 다룰 수 있는가?

   (출력)
   str.format()

   (인코딩)
   utf8
