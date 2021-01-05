@ECHO off

ECHO [Building]
g++ -Wall -o test-rectangular.exe ..\test\test-rectangular.cpp ..\presets\Particle\RectangularParticle.cpp ..\presets\ParticleSystem\RectangularParticleSystem.cpp ..\src\MiniParticle.cpp -I..\SFML\include -L..\SFML\lib -lsfml-system -lsfml-window -lsfml-graphics && (
	ECHO [Build Successfully Completed]
	ECHO [Running]
	test-rectangular.exe && (
		ECHO [Program Finished]
	) || (
		ECHO [Program Stopped]
	)
) || (
	ECHO [Build Failed]
)