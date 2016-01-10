---
title: Tutorial and Introduction to vim
author: Eric Leung
date: December 6th, 2015
---

## Overview

What is vim?

Why use vim?

Basics concepts in vim

Open and close a file

Movements in vim

## What is vim?

`vim` is a [highly configurable text editor][wiki-vim] first released 2 November
1991.

It's roots go back to a [similar editor called `vi`][vi]. `vim` is actually a
contraction of "Vi IMproved."

`vim` can be downloaded at http://www.vim.org/download.php or through your
package manager.

[wiki-vim]: https://en.wikipedia.org/wiki/Vim_(text_editor)
[vi]: https://en.wikipedia.org/wiki/Vi

## Why use vim?

1. Modal editing
2. Smart regular expressions
3. Precise selections and manipulations
4. Precise and faster movement
5. [Vim on the internet][vim-net]

More reasons:

- ["Why, oh WHY, do these #?@! nutheads use vi?"][why-vim]
- ["Why Atom Can't Replace Vim"][atom]

[vim-net]: https://github.com/terriburns/Vim-On-The-Internet
[why-vim]: http://www.viemu.com/a-why-vi-vim.html
[atom]: https://medium.com/@mkozlows/why-atom-cant-replace-vim-433852f4b4d1#.549pcukc3

## Basic concepts in vim

There are three different "modes" in vim:

**normal mode** - here you have access to powerful commands within vim

**edit/insert mode** - here you can edit your file as you can in any other editor

**visual mode** - here is where you can select text and run commands on them

## Open and close a file

To open a file (and given you have `vim` properly installed):

``` {.bash .numberLines}
vim file-you-want-to-open.txt
```

To close a file while in `vim`:

``` {.bash .numberLines}
Press <Esc>
:q
```

## Move in vim using hjkl

![HJKL cursor movement keys in `vim`](images/hjkl.jpg)

Source: http://hjkl.com/

## Rest of Tutorial

Complete `vimtutor` on your local computer or on Church if you don't have Vim:

``` {.bash .numberLines}
$ vimtutor
```

Play Vim Golf at [http://vimgolf.com/][vimgolf]

[vimgolf]: http://vimgolf.com/

## Resources

Vim Golf - [http://vimgolf.com/][vimgolf]

VIM Adventures - [http://vim-adventures.com/][vim-adventure]

Stackoverflow references - [http://stackoverflow.com/tags/vim/info][stack]

[vim-adventure]: http://vim-adventures.com/
[stack]: http://stackoverflow.com/tags/vim/info
