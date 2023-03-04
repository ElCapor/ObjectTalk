//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtFunction.h"

#include "OtBody.h"
#include "OtFixture.h"


//
//	OtBodyClass::clear
//

void OtBodyClass::clear() {
	fixtures.clear();

	for (auto fixture = body->GetFixtureList(); fixture; fixture->GetNext()) {
		body->DestroyFixture(fixture);
	}
}


//
//	OtBodyClass::setPosition
//

OtObject OtBodyClass::setPosition(float x, float y) {
	body->SetTransform(b2Vec2(x, y), body->GetAngle());
	return OtObject(this);
}


//
//	OtBodyClass::setLinearVelocity
//

OtObject OtBodyClass::setLinearVelocity(float x, float y) {
	body->SetLinearVelocity(b2Vec2(x, y));
	return OtObject(this);
}


//
//	OtBodyClass::setAngle
//

OtObject OtBodyClass::setAngle(float angle) {
	body->SetTransform(body->GetPosition(), angle);
	return OtObject(this);
}


//
//	OtBodyClass::enable
//

OtObject OtBodyClass::enable() {
	body->SetEnabled(true);
	return OtObject(this);
}


//
//	OtBodyClass::disable
//

OtObject OtBodyClass::disable() {
	body->SetEnabled(false);
	return OtObject(this);
}


//
//	OtBodyClass::addCircularFixture
//

OtObject OtBodyClass::addCircularFixture(float x, float y, float radius) {
	b2CircleShape circle;
	circle.m_p = b2Vec2(x, y);
	circle.m_radius = radius;
	OtObject fixture = OtFixture::create(body->CreateFixture(&circle, 0.0));
	fixtures.push_back(fixture);
	return fixture;
}


//
//	OtBodyClass::addEdgeFixture
//

OtObject OtBodyClass::addEdgeFixture(float x1, float y1, float x2, float y2) {
	b2EdgeShape edge;
	edge.SetTwoSided(b2Vec2(x1, y1), b2Vec2(x2, y2));
	OtObject fixture = OtFixture::create(body->CreateFixture(&edge, 0.0));
	fixtures.push_back(fixture);
	return fixture;
}


//
//	OtBodyClass::addRectangularFixture
//

OtObject OtBodyClass::addRectangularFixture(float x, float y, float w, float h) {
	b2PolygonShape poly;
	poly.SetAsBox(w / 2.0, h / 2.0, b2Vec2(x, y), 0.0);
	OtObject fixture = OtFixture::create(body->CreateFixture(&poly, 0.0));
	fixtures.push_back(fixture);
	return fixture;
}


//
//	OtBodyClass::applyLinearImpulse
//

void OtBodyClass::applyLinearImpulse(float x, float y) {
	body->ApplyLinearImpulseToCenter(b2Vec2(x, y), true);
}


//
//	OtBodyClass::setBody
//

void OtBodyClass::setBody(b2Body* b) {
	body = b;
	b->GetUserData().pointer = reinterpret_cast<uintptr_t>(this);
}


//
//	OtBodyClass::getMeta
//

OtType OtBodyClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtType::create<OtBodyClass>("Body", OtGuiClass::getMeta());
		type->set("setPosition", OtFunction::create(&OtBodyClass::setPosition));
		type->set("setLinearVelocity", OtFunction::create(&OtBodyClass::setLinearVelocity));
		type->set("setAngle", OtFunction::create(&OtBodyClass::setAngle));

		type->set("enable", OtFunction::create(&OtBodyClass::enable));
		type->set("disable", OtFunction::create(&OtBodyClass::disable));

		type->set("addCircularFixture", OtFunction::create(&OtBodyClass::addCircularFixture));
		type->set("addEdgeFixture", OtFunction::create(&OtBodyClass::addEdgeFixture));
		type->set("addRectangularFixture", OtFunction::create(&OtBodyClass::addRectangularFixture));

		type->set("getX", OtFunction::create(&OtBodyClass::getX));
		type->set("getY", OtFunction::create(&OtBodyClass::getY));
		type->set("getLinearVelocityX", OtFunction::create(&OtBodyClass::getLinearVelocityX));
		type->set("getLinearVelocityY", OtFunction::create(&OtBodyClass::getLinearVelocityY));

		type->set("applyLinearImpulse", OtFunction::create(&OtBodyClass::applyLinearImpulse));
	}

	return type;
}
