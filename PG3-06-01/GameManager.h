#pragma once
#include <memory>
#include "IScene.h"
#include "StageScene.h"


class GameManager {
private:
	std::unique_ptr<IScene>scene_;

public:
	GameManager();
	~GameManager();
	int Run();
};