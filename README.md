# HMCW

这是一款具有Minecraft风格的桌面小工具，它类似于Windows任务栏，可以用来保存和启动各种程序。虽然它无法实现Windows任务栏的所有功能，但可以视为一个简化版的任务栏。此外，我还为这个工具增加了一些额外的功能，例如程序文件搜索和定时休息等。如果你对此感兴趣，不妨试试看！

## 声明

*本软件为开源免费软件。我坚决反对任何个人或组织将此软件用于商业目的并收取费用。一旦发现有人以任何形式收费，请不要相信他们。*

## 介绍 && 使用说明

- 简单来说有四大功能模块组成：
>
> - 开始的物品栏。
>>
>> 1. 可接受用户拖拽快捷方式文件(.lnk) 或是可执行文件(.exe)到每一个物品方格中。
>> 2. 通过点击图标，可以直接打开该图标对应的exe文件，启动程序。
>> 3. 在物品栏上方还有爱心值，饱食度以及经验条，这些的变化和工作，休息以及使用时长有关。
>> 4. 到休息时间，会弹出一个休息窗口，在这里你可以选择休息或者跳过。
>> 5. 按H键有小惊喜。
>>
> - 从物品栏(E键)打开背包。
>>
>> 1. 左侧区域是用来查询本地计算机所有exe文件并绘制上图标和添加其对应信息。
>> 2. 右侧中间区域是存储区，用来存放用户偶尔使用到的程序。
>> 3. 右侧下方区域是物品栏区，和原本的物品栏是对应的。
>> 4. 添加查询到的程序，先点击左侧区域的某个图标，再点击右侧区域的方格，就实现了添加新的exe文件了。(tips:如果想在开始的物品栏添加新的程序，可以从这里添加到右侧下方的人物物品栏哦)。
>>
> - 从物品栏最右侧方格打开(或按ESC打开)设置界面。
>>
>> 1. 进度 显示获得的成就信息。
>> 2. 报告漏洞 允许用户提交程序漏洞。
>> 3. 提供反馈 允许用户提交反馈建议。
>> 4. 统计信息 统计一些有趣的信息。
>> 5. 选项... 调节定时器。
>> 6. 关于 就是你现在看到的这个(滑稽)。

## 开发感想

- 虽然我这个看上去是一款用于与桌面程序交互的软件，可其实主要功能是定时器，不知道为什么我那么喜欢定时器，我在此之前写过三个小小的定时器程序，但没办法使人有使用它们的欲望，但今天这个软件，对于我一个很久不玩mc的人来说都有无穷的探索欲望，我相信这款软件的开发理念绝对不会差。
- 起初，并非我独立构想开发这种风格的程序，最初只是想编写一个定时器程序，并练习一些 C++ 编程技巧。偶然间，在 B 站看到了一位 UP 主 *沫狐奶昔CimiMoly* 使用 WinAPI 开发了一款 mc 风格的桌面工具，这激发了我的灵感，让我也想尝试开发类似风格的程序。感谢 *沫狐奶昔CimiMoly* 的分享，让我有了这个创意。
- 当时我就心血来潮，心想着自己用Qt开发一个，本以为当时只是三分钟热度，没想到断断续续地坚持了一个月。
- 目前我已经勉强完成了大部分基础功能的编写，但后续仍有许多需要调整和改进的地方。样式方面也需要进一步美化，大部分是参考了 mc 的设计。未来我计划在有时间的情况下添加一些音效，例如按钮点击音效等等，以提升用户体验。
- 这个软件是我日以继夜地开发的，投入了大量的时间和精力。我无法保证未来是否会继续修补，这完全取决于运气和我的时间安排。
- 如果您认为我的帮助对您有益，并且希望继续得到我的支持和帮助，您可以考虑赞助我。您的赞助将有助于我继续提供高质量的服务和支持。感谢您的支持和关注。

## 赞助和捐赠

**微信(WeChat)**  **支付宝(Alipay)**

![微信(WeChat)](https://github.com/capp-adocia/HMCW/blob/main/Image/WeChat.png)                ![支付宝(Alipay)](https://github.com/capp-adocia/HMCW/blob/main/Image/Alipay.png)

---

(EN)
# HMCW

This is a desktop widget with a Minecraft style, similar to the Windows taskbar, that can be used to save and launch various programs. Although it doesn't have all the functions of the Windows taskbar, it can be considered a simplified version. Additionally, I've added some extra features to this tool, such as program file search and scheduled breaks. If you're interested, why not give it a try!

## Statement

*This software is open-source and free to use. I strongly oppose any individual or organization using this software for commercial purposes and charging fees. Should you encounter anyone charging for this software in any form, please do not trust them.*

## Introduction && User Guide

- Simply put, it consists of four main functional modules:
>
> - Inventory Bar at Start
>>
>> 1. Accepts user-dragged shortcut files (.lnk) or executable files (.exe) into each item slot.
>> 2. Clicking an icon directly opens the corresponding .exe file, launching the program.
>> 3. Above the inventory bar, there are indicators for health, hunger, and experience, which vary with work, rest, and usage duration.
>> 4. At rest times, a rest window pops up where you can choose to rest or skip.
>> 5. Pressing the 'H' key triggers a small surprise.
>>
> - Opening the Backpack with the 'E' Key
>>
>> 1. The left area is used to search and display icons and information for all .exe files on the local computer.
>> 2. The middle right area is a storage zone for occasionally used programs.
>> 3. The lower right area corresponds to the original inventory bar.
>> 4. To add a program, click an icon in the left area and then a slot in the right area to add a new .exe file. (Tip: To add new programs to the start inventory, you can add them to the character's item bar on the right.)
>>
> - Opening the Settings Interface from the Far-Right Slot of the Inventory Bar (or by Pressing ESC)
>>
>> 1. Progress displays achieved milestones.
>> 2. Report Bugs allows users to submit software bugs.
>> 3. Provide Feedback enables users to offer suggestions.
>> 4. Statistics gather some interesting data.
>> 5. Options... adjust the timer settings.
>> 6. About displays the current information you are reading (jokingly).

## Developer Reflections

- Although this might look like a software designed for interacting with desktop programs, its main function is actually a timer. I don't know why I'm so fond of timers. I've created three small timer programs before, but none of them really made people want to use them. However, this software, even for someone like me who hasn't played Minecraft in a long time, sparks an endless desire to explore. I believe the development concept behind this software is definitely solid.
- Initially, I didn't come up with the idea to develop this style of program on my own. I just wanted to write a timer application and practice some C++ programming skills. By chance, I came across a Bilibili creator, *沫狐奶昔CimiMoly*, who developed a Minecraft-styled desktop tool using WinAPI. This sparked my inspiration, and I wanted to try developing a similar style of program. Thanks to *沫狐奶昔CimiMoly* for the share, which gave me this creative idea.
- On a whim, I decided to develop one using Qt. I thought it would be a fleeting interest, but surprisingly, I kept at it off and on for a month.
- I've managed to complete most of the basic functionalities, but there's still a lot to adjust and improve. The style also needs further beautification, mostly inspired by Minecraft's design. In the future, when time allows, I plan to add some sound effects, like button clicks, to enhance the user experience.
- This software is the result of my continuous effort, investing a lot of time and energy. I can't guarantee future updates, as that will entirely depend on luck and my schedule.
- If you find my work helpful and wish to continue receiving my support, please consider sponsoring me. Your sponsorship will help me continue to provide high-quality services and support. Thank you for your support and attention.

## Sponsorships and Donations

**WeChat** or **Alipay**

![微信(WeChat)](https://github.com/capp-adocia/HMCW/blob/main/Image/WeChat.png)                ![支付宝(Alipay)](https://github.com/capp-adocia/HMCW/blob/main/Image/Alipay.png)
