# Лабки за 2,5 часа
## предисловие
Эти лабы были собраны из-под линукса и, чтобы не ебать голову пресборкой их вижлой
их желательно сдавать используя WSL. WSL -- windows subsystem for linux.
## Сдача
1. [ставим всл](https://docs.microsoft.com/en-us/windows/wsl/install-win10#manual-installation-steps)
2. Качаем дистибутив из магаза, рекомендую **Debian**
3. Запускаем, оно просит создать пользователя, создаём и **запоминаем пароль**.
4. Распаковывам лабы туда, куда хочем
5. узнаём путь к разархивированным лабкам относительно корня диска С: это будет `C:\path\to\labki`
6. переводим
`C:\path\to\labki -> /mnt/c/path/to/labki`
7. пишем комманды(после доллара)
cd /mnt/c/path/to/labki
8. ls
должно выдать l1/ l2/ l3/ l4/ l5/ l6/
9. Выключаем всл
10. Ставим [Visual Studio Code](https://code.visualstudio.com/)
11. Открываем в нём директорию с лабками
12. Нажимаем `Ctrl + ~`
13. Над открывшейся консолью ищем слово *powershell*
14. Меняем его на WSL, если не получается, то [сюда](https://code.visualstudio.com/learn/develop-cloud/wsl)
15. Прячем вижлу.
16. Звоним Тосе
17. для запуска лабки 1 делаем
```
uname@kamputar ~$ cd /mnt/c/path/to/labki
uname@kamputar /mnt/c/path/to/labki$ ./l1/a.out
<работает лаба, для выхода делаем ctrl+c>
uname@kamputar /mnt/c/path/to/labki$
```
18. для запуска второй лабки длаешь то же самое, что и для первой, но меняешь l1 на l2 итд
