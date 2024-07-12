#include "StageScene.h"
#include "Novice.h"

StageScene::StageScene()
{
	player_->Init();
}

void StageScene::Init()
{
	inputHandler_ = new InputHandler();

	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	player_ = new Player();
	
}

void StageScene::Update()
{
	iCommand_ = inputHandler_->HandleInput();

	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}
	player_->Update();
	player_->Draw();
}

void StageScene::Draw()
{
}
