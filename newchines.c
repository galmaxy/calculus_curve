直接输入中文不就可以了？为什么README.md就不能正常显示？
dos 中vim编辑的中文文件不能在gitbash中正常显示，反之也是这样。然后在github中都能显示。但是github也提示了，dos中用电编码是GB18030,提示修改成UTF-8。看来这是问题的关键。

在设置 set encoding=utf-8以后，用vim编辑一个新文件并保存以后，新文件的格式会是什么？

在gitbash中现在可以正常打开了。
下面需要验证的是，vim关闭以后重新启动会不会保持这样一个状态。

重新启动vim会显示如下错误：
E341: Internal error: 1a11oc(0,)
按确认键进入以后就不能进入utf-8格式了。endoding 参数重新变成 cp936

出现错误可能是由于vimrc文件当中有原先的中文注释。修改掉后启动时就没有错误提示了。但是进入vim后还是不能显示uit-8的格式。

在vimrc中设置
set encoding=utf-8
set fileencodings=utf-8,cp936,gbk
set fileencoding=utf-8

现在可以正常显示两种格式了。
下面需要确认用记事本打开会不会有乱码了。。。

win10中记事本可以正常打开utf-8格式的文件。现在似乎就没有问题了。
