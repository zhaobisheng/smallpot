BigPot大水壶播放器


使用了以下开发库：
FFmpeg, SDL2, iconv, jsoncpp, libass, fribidi, freetype, fontconfig

FFmpeg编译参数

--enable-shared --disable-symver --disable-doc --disable-symver --disable-doc --disable-ffplay --disable-ffmpeg --disable-ffprobe --disable-ffserver --disable-avdevice --disable-avfilter --disable-encoders --disable-muxers --disable-filters --disable-devices --disable-everything --disable-iconv --enable-protocols --enable-parsers --enable-demuxers --enable-decoders --enable-bsfs --enable-network --enable-swscale --enable-swresample --disable-demuxer=sbg --disable-demuxer=dts --disable-parser=dca --disable-decoder=dca --disable-yasm --enable-version3

启用yasm使用的编译参数
./configure --enable-shared --enable-version3 --disable-symver --disable-doc --disable-ffplay --disable-ffmpeg --disable-ffprobe --disable-zlib --disable-bzlib --disable-lzma --enable-swresample --enable-swscale --disable-avfilter 

静态链接需要预先指定
export LDFLAGS="-static-libgcc -static-libstdc++ -Wl,-static -lstdc++ -lpthread -lwinpthread"



