#pragma once

class Player {
private:

	int posX_ ;
	int posY_ ;
	int speedX_;
	int width_ ;
	int height_;

public:
	Player();

	void Init();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

};