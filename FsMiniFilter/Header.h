
const PWSTR MESSAGE_PORT_NAME = L"\\FsMiniFilterPort";

typedef enum { READ, WRITE, DEL, OTHER } MESSAGE_TYPE;
typedef struct {
	MESSAGE_TYPE Type;
	ULONG PID;
	UCHAR Filename[512];
	ULONG Contents[256];
} MESSAGE_REQ, *PMESSAGE_REQ;

typedef struct {
	BOOLEAN IsSafe;
} MESSAGE_REPLY, *PMESSAGE_REPLY;


