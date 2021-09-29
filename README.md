# j2objc 工具链
基于 [j2objc](https://github.com/google/j2objc) 的 Xcode 辅助工具集，让你能够中 Xcode 中开发、调试、发布、集成带有 Java 源码的 Framework 模块。

# 使用方法：
## 工具链配置
- Clone 本仓库到 /path/to/j2objc-2.7
- 配置环境变量 J2OBJC_HOME=/path/to/j2objc-2.7 （建议编辑 ~/.bash_profile)
- 安装 JDK 环境（建议 jdk11）
- 配置环境变量 JAVA_HOME=/path/to/jdk （建议编辑 ~/.bash_profile)
- 安装 gawk （brew install gawk）
- 安装 [xcodeproj](https://github.com/CocoaPods/Xcodeproj) (gem install xcodeproj)

## Xcode 项目配置
- Xcode 中 java 代码一般放在 src/main/java 目录，如果不是，需要配置 Xcode 增加用户变量 JAVA_SOURCES
- 执行 ${J2OBJC_HOME}/tools/prepare.sh
- 打开 Xcode 项目，正常开发即可
