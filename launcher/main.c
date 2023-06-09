
#include <initguid.h>
#include <dbgeng.h>

int main(int argc, char** argv)
{
	IDebugClient* dbg_cli = NULL;
	IDebugControl* dbg_ctl = NULL;
	HRESULT ret;

	DebugCreate(IID_IDebugClient, (void**)&dbg_cli);
	dbg_cli->QueryInterface(IID_IDebugControl, (void**)&dbg_ctl);
	dbg_cli->CreateProcess(0, PSTR(".\\Mystic.exe"), CREATE_NEW_CONSOLE | DEBUG_PROCESS);
	
	while ((ret = dbg_ctl->WaitForEvent(0, INFINITE)) == S_OK ) {
		/* Ignore all errors */
		dbg_ctl->Execute(DEBUG_OUTCTL_IGNORE, PCSTR("gh"), DEBUG_EXECUTE_ECHO);
	}

	return 0;
}
