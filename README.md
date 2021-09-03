# DriverSample

#### 参考源码完成驱动代码后，/link/config/board.json做类似如下的配置即可


{
	"interfaceV":{
		"SDI":{"chip":"custom","path":"/usr/lib/libDriverSDI.so","protocols":["SDI"],"mode":"mipi","did": 3,"cid": 0,"dstFramerate":60}
	}
}