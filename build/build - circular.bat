@ECHO off

ECHO [Building]
g++ -Wall -o test-circular.exe ..\test\test-circular.cpp ..\presets\Particle\CircularParticle.cpp ..\presets\ParticleSystem\CircularParticleSystem.cpp ..\src\MiniParticle.cpp -I..\SFML\include -L..\SFML\lib -lsfml-system -lsfml-window -lsfml-graphics && (
	ECHO [Build Successfully Completed]
	ECHO [Running]
	test-circular.exe && (
		ECHO [Program Finished]
	) || (
		ECHO [Program Stopped]
	)
) || (
	ECHO [Build Failed]
)