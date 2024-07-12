#include "Player.h"
#include "Novice.h"

Player::Player()
{
	posX_ = 100;
	posY_ = 100;
	speedX_ = 2;
	width_ = 20;
	height_ = 20;
}

void Player::Init()
{
}

void Player::Update()
{
	MoveRight();
	MoveLeft();
}

void Player::Draw()
{
	Novice::DrawBox(this->posX_, this->posY_, this->width_, this->height_, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->posX_ += this->speedX_;
}

void Player::MoveLeft()
{
	this->posX_ -= this->speedX_;
}
