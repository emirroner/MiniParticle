@ECHO off

ECHO [Building]
g++ -Wall -o test-textural.exe ..\test\test-textural.cpp ..\presets\Particle\RectangularParticle.cpp ..\presets\ParticleSystem\TexturalParticleSystem.cpp ..\src\MiniParticle.cpp -I..\SFML\include -L..\SFML\lib -lsfml-system -lsfml-window -lsfml-graphics && (
	ECHO [Build Successfully Completed]
	ECHO [Running]
	test-textural.exe && (
		ECHO [Program Finished]
	) || (
		ECHO [Program Stopped]
	)
) || (
	ECHO [Build Failed]
)