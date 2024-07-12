#include "GameManager.h"
#include "Novice.h"
#include "StageScene.h"

GameManager::GameManager()
{
	scene_ = std::make_unique<StageScene>();
	scene_->Init();
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);


		scene_->Update();
		scene_->Draw();






		Novice::EndFrame();

		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE]) {
			break;
		}
	}
	return 0;
}
