#include <windows.h>

#define ID_OK_BTN	3000
#define ID_OK_BTN2	4000

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
LRESULT CALLBACK ChildWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK ChildWndProc2(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"HelloAPI";
LPCTSTR ChildClassName  = L"ChildWin";
LPCTSTR ChildClassName2 = L"ChildWin2";

int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpszCmdParam,
					 int nCmdShow)
{
	HWND hWnd;
	MSG Message;
	WNDCLASS WndClass;
	g_hInst=hInstance;
	
	WndClass.cbClsExtra=0;
	WndClass.cbWndExtra=0;
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH); 
	WndClass.hCursor=LoadCursor(NULL,IDC_ARROW);    
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)WndProc;
	WndClass.lpszClassName=lpszClass;
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //메인윈도우 클래스 등록

	WndClass.lpfnWndProc =ChildWndProc;      //차일드 윈도우 프로시저
	WndClass.lpszClassName =ChildClassName; //차일드 윈도우 클래스이름
	RegisterClass(&WndClass); 

	WndClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	WndClass.lpfnWndProc = ChildWndProc2;      //차일드 윈도우 프로시저
	WndClass.lpszClassName = ChildClassName2; //차일드 윈도우 클래스이름
	RegisterClass(&WndClass);

	hWnd=CreateWindow(lpszClass,			//윈도우클래스 이름
					L"Visual C++ 출석대체 과제",			    //윈도우타이틀
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //윈도우스타일
					200, 200,							//윈도우가 보일때 X Y좌표
					725, 725,							//윈도우의 폭과 높이				
					(HWND)NULL,							//부모윈도우 핸들
					(HMENU)NULL,						//윈도우가 가지는 메뉴핸들
					hInstance,							//인스턴스핸들
					NULL);								//여분의 데이터

 	   ShowWindow(hWnd,nCmdShow);
	
	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage,
						 WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"202034-363605 김문경";
	switch(iMessage) {
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc,100, 100, text, lstrlen(text));
				EndPaint(hWnd,&ps);
				return 0;
			}
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow( 
				ChildClassName,     		// 차일드 윈도우 클래스 이름 
				L"출석 수업",            	// 윈도우 타이틀 
				WS_OVERLAPPEDWINDOW | WS_CHILD,  // 윈도우  스타일 
				50,       		// 윈도우 보일 때 x 좌표 
				150,       		// 윈도우 보일 때 y 좌표 
				260,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,         		// 부모 윈도우
				(HMENU) 1000,        	// 차일드 윈도우ID 
				g_hInst,           		// 인스턴스 핸들 
				(LPVOID) NULL);      	// 여분의 데이터

			/*if (!hChildWnd) 	return -1;*/
			ShowWindow(hChildWnd, SW_SHOW);

			hChildWnd = CreateWindow(
				ChildClassName2,     		// 차일드 윈도우 클래스 이름 
				L"소속",            	// 윈도우 타이틀 
				WS_OVERLAPPEDWINDOW | WS_CHILD,  // 윈도우  스타일 
				400,       		// 윈도우 보일 때 x 좌표 
				150,       		// 윈도우 보일 때 y 좌표 
				260,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,         		// 부모 윈도우
				(HMENU) 2000,        	// 차일드 윈도우ID 
				g_hInst,           		// 인스턴스 핸들 
				(LPVOID)NULL);      	// 여분의 데이터

			ShowWindow(hChildWnd, SW_SHOW); 

			hChildWnd = CreateWindow(
				L"button",        		// 윈도우 클래스 이름 
				L"대체시험일",			// 윈도우 타이틀 
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				50,       		// 윈도우 보일 때 x 좌표 
				400,       		// 윈도우 보일 때 y 좌표 
				100,       		// 윈도우 폭
				30,       		// 윈도우 높이
				hWnd,         		// 부모 윈도우
				(HMENU)ID_OK_BTN,   	// 컨트롤 ID
				g_hInst,           		// 인스턴스 핸들 
				(LPVOID)NULL);      	// 여분의 데이터

			hChildWnd = CreateWindow(
				L"button",        		// 윈도우 클래스 이름 
				L"학과",			// 윈도우 타이틀 
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				400,       		// 윈도우 보일 때 x 좌표 
				400,       		// 윈도우 보일 때 y 좌표 
				100,       		// 윈도우 폭
				30,       		// 윈도우 높이
				hWnd,         		// 부모 윈도우
				(HMENU)ID_OK_BTN2,   	// 컨트롤 ID
				g_hInst,           		// 인스턴스 핸들 
				(LPVOID)NULL);      	// 여분의 데이터

			if (!hChildWnd) 	return -1;
			return 0;
		}
		case WM_COMMAND:
		{
			if (LOWORD(wParam) == ID_OK_BTN)
			{
				MessageBox(hWnd, L"2022.05.11. 까지 제출", L"대체시험일", MB_OK);
			}

			if (LOWORD(wParam) == ID_OK_BTN2)
			{
				MessageBox(hWnd, L"컴퓨터과학과", L"학과", MB_OK);
			}

			return 0;
		}
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}

	return(DefWindowProc(hWnd,iMessage,wParam,lParam));
}
LRESULT CALLBACK ChildWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"참석 불가능";
	switch(message)
	{
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd,&ps);
			TextOut(hdc,10, 10, text, lstrlen(text));
			EndPaint(hWnd,&ps);
			return 0;
		}

		case WM_CREATE: {
			HWND hChildWnd = CreateWindow(
				L"button",
				L"대체시험형태",
				WS_CHILD | WS_VISIBLE,
				50,
				100,
				100,
				30,
				hWnd,
				(HMENU)1001,
				g_hInst,
				(LPVOID)NULL
			);

			if (!hChildWnd) { return -1; }
			return 0;
		}

		case WM_COMMAND: {
			if (LOWORD(wParam) == 1001) {
				MessageBox(hWnd, L"실습과제물", L"대체시험형태", MB_OK);
			}
			return 0;
		}

	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}
LRESULT CALLBACK ChildWndProc2(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"서울지역대학";
	switch (message)
	{
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		TextOut(hdc, 10, 10, text, lstrlen(text));
		EndPaint(hWnd, &ps);
		return 0;
	}

	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}
