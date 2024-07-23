run, firefox.exe
sleep, 2000

loop,10
{
	
	send, {ctrl down}{t}{ctrl up}
	sleep, 3000
	SendInput, www.naver.com
	sleep, 2000
	send, {enter}
	sleep, 3000
	
	send, 하이미디어
	sleep, 2000
	send, {enter}
	sleep, 2000
	
	send, {ctrl down}{w}{ctrl up}
	sleep, 2000
}