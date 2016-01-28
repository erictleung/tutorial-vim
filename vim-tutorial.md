---
title: Tutorial and Introduction to vim
author: Eric Leung
date: January 28th, 2016
---

## Overview

What is Vim?

How to Vim? Basics concepts in Vim

Why use Vim?

Open and close a file

Seven Habits of Effective Text Editing 2.0

Movements in Vim, `hjkl`

`vimtutor`, Adventures, and Golf

## Editor Wars

![](images/wars.png)

Source: http://cube-drone.com/comics/c/holy-war

## What is Vim?

A [highly configurable text editor][wiki-vim] first released 2 November
1991

Roots in [similar editor called `vi`][vi]

`vim` contraction of "Vi IMproved"

Download at [http://www.vim.org/download.php][download] or through package
manager

Side note: Tim Pope ([https://github.com/tpope][tpope]) is like the Hadley
Wickham of Vim.

[wiki-vim]: https://en.wikipedia.org/wiki/Vim_(text_editor)
[vi]: https://en.wikipedia.org/wiki/Vi
[download]: http://www.vim.org/download.php
[tpope]: https://github.com/tpope

## Why use Vim?

Modal editing and its "language"

Precise selections and manipulations

Precise and faster movement

[Vim on the internet][vim-net]

More reasons:

- ["Why, oh WHY, do these #?@! nutheads use vi?"][why-vim]
- ["Why Atom Can't Replace Vim"][atom]

[vim-net]: https://github.com/terriburns/Vim-On-The-Internet
[why-vim]: http://www.viemu.com/a-why-vi-vim.html
[atom]: https://medium.com/@mkozlows/why-atom-cant-replace-vim-433852f4b4d1#.549pcukc3

## Basic concepts in Vim

There are three different "modes" in Vim:

**normal mode** - here you have access to powerful commands within Vim

**edit/insert mode** - here you can edit your file as you can in any other editor

**visual mode** - here is where you can select text and run commands on them

## Open and close a file

To open a file (and given you have `vim` properly installed):

``` {.bash .numberLines}
$ vim file-you-want-to-open.txt
```

To close a file while in `vim`:

``` {.bash .numberLines}
Press <Esc>
:q
```

## Seven Habits of Effective Text Editing 2.0

By the writer of Vim, Bram Moolenaar:

1. Detect inefficiency
    - Find out what you waste time one
2. Find a quicker way
    - Read the online help
    - Read the quick reference, books, etc.
    - Ask friends and colleagues
    - Search the internet
    - Do it yourself
3. Make it a habit
    - Do it
    - Keep on improving

## Move in Vim using `hjkl`

![](images/hjkl.jpg)

Source: http://hjkl.com/

## Choose Your Path

Complete `vimtutor` on your local computer or on Church if you don't have Vim:

``` {.bash .numberLines}
$ vimtutor
```

**THEN**

Play Vim Golf at [http://vimgolf.com/][vimgolf]

**OR**

Play VIM Adventures at [http://vim-adventures.com/][vim-adventure]

[vimgolf]: http://vimgolf.com/
[vim-adventure]: http://vim-adventures.com/

## Resources {.allowframebreaks}

Stackoverflow references - [http://stackoverflow.com/tags/vim/info][stack]

Your problem with Vim is that you don't grok vi -
[http://stackoverflow.com/a/1220118][productive]

Seven Habits of Effective Text Editing 2.0 -
[http://www.moolenaar.net/habits\_2007.pdf][habits]

Vim Text Objects: The Definitive Guide -
[http://blog.carbonfive.com/2011/10/17/vim-text-objects-the-definitive-guide/][text]

Mastering the Vim Language -
[https://www.youtube.com/watch?v=wlR5gYd6um0][master]

[stack]: http://stackoverflow.com/tags/vim/info
[productive]: http://stackoverflow.com/a/1220118
[habits]: http://www.moolenaar.net/habits_2007.pdf
[text]: http://blog.carbonfive.com/2011/10/17/vim-text-objects-the-definitive-guide/
[master]: https://www.youtube.com/watch?v=wlR5gYd6um0
