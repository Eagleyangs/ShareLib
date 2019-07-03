# ShareLib
Dll Share lib test

lib文件夹下的 *d.lib 中的 d是自己加进去的 并不是在最开始生成的时候加的，dll同理。
由于在生成 dll的时候没有定义输出文件名称 所以在 debug和release 中的dll文件都是同名的，但是文件大小是不一样的。

需要在文件中生成时自动区分debug和release的 可以CSDN以下或者度娘以下，此不赘述。
