# LYHPageControl
这是一款可以自定义风格的pageControl.在完全实现了系统UIPageControl的全部功能的基础上添加了如下功能:
> * 1.提供三种样式提供选择(默认样式，长条样式，混合样式)
> * 2.可以通过提供自定义的图片修改pageControl的颜色
> * 3.自动计算size(使用的时候只需要提供一个point就可以，建议使用center)

整体的架构是这样的：
> * LYHPageControl.h 整体架构的主头文件
> * LYHPageControlConst.h 整体架构的一些常量、宏、枚举
> * LYHPageControlView.h 未被选中的视图（里面包含了一张图片）
> * LYHPageControlCurrentView.h 被选中的视图（里面包含一张图片）
> * LYHBasicPageContrl.h 架构的基类，实现一些共有的方法，提供一下给子类实现的方法
> * LYHPageControlHorizontal.h 水平方向的pageControl，目前提供三种风格，主要实现这个类完成自定义风格
