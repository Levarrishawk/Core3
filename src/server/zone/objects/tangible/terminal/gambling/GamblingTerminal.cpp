/*
 *	server/zone/objects/tangible/terminal/gambling/GamblingTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "GamblingTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/managers/minigames/GamblingBet.h"

#include "server/zone/managers/minigames/events/GamblingEvent.h"

#include "server/zone/objects/scene/variables/ParameterizedStringId.h"


// Imported class dependencies

#include "system/lang/Time.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "system/util/Vector.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/objects/player/events/PlayerRecoveryEvent.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "engine/util/QuadTree.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "engine/util/Quaternion.h"

#include "server/zone/objects/player/TradeContainer.h"

#include "server/zone/objects/tangible/tool/CraftingTool.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/tangible/tool/SurveyTool.h"

#include "server/zone/objects/player/events/PlayerDisconnectEvent.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/objects/player/badges/Badges.h"

#include "server/zone/Zone.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/SortedVector.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

/*
 *	GamblingTerminalStub
 */

GamblingTerminal::GamblingTerminal() : Terminal(DummyConstructorParameter::instance()) {
	GamblingTerminalImplementation* _implementation = new GamblingTerminalImplementation();
	ManagedObject::_setImplementation(_implementation);
	_implementation->_setStub(this);
}

GamblingTerminal::GamblingTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

GamblingTerminal::~GamblingTerminal() {
}


void GamblingTerminal::initializeTransientMembers() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void GamblingTerminal::reset() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->reset();
}

Vector<GamblingBet*>* GamblingTerminal::getBets() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getBets();
}

VectorMap<ManagedReference<PlayerCreature* >, unsigned int>* GamblingTerminal::getPlayersWindows() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPlayersWindows();
}

VectorMap<ManagedReference<PlayerCreature* >, int>* GamblingTerminal::getWinnings() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWinnings();
}

int GamblingTerminal::getFirst() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getFirst();
}

int GamblingTerminal::getSecond() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSecond();
}

int GamblingTerminal::getThird() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getThird();
}

void GamblingTerminal::setFirst(int value) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setFirst(value);
}

void GamblingTerminal::setSecond(int value) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setSecond(value);
}

void GamblingTerminal::setThird(int value) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setThird(value);
}

int GamblingTerminal::getMinBet() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMinBet();
}

int GamblingTerminal::getMaxBet() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMaxBet();
}

int GamblingTerminal::getState() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getState();
}

void GamblingTerminal::setState(int value) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setState(value);
}

int GamblingTerminal::getMachineType() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMachineType();
}

GamblingEvent* GamblingTerminal::getEvent() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEvent();
}

void GamblingTerminal::setEvent(GamblingEvent* event) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setEvent(event);
}

void GamblingTerminal::incGameCount() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		_implementation->incGameCount();
}

int GamblingTerminal::getGameCount() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getGameCount();
}

bool GamblingTerminal::isGoneEmpty() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isGoneEmpty();
}

String GamblingTerminal::getMachineTypeText() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithAsciiReturn(_return_getMachineTypeText);
		return _return_getMachineTypeText;
	} else
		return _implementation->getMachineTypeText();
}

void GamblingTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

String GamblingTerminal::getText(PlayerCreature* player) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);

		method.executeWithAsciiReturn(_return_getText);
		return _return_getText;
	} else
		return _implementation->getText(player);
}

void GamblingTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int GamblingTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void GamblingTerminal::setGamblingRegion(const String& region) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addAsciiParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->setGamblingRegion(region);
}

String GamblingTerminal::getGamblingRegion() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		method.executeWithAsciiReturn(_return_getGamblingRegion);
		return _return_getGamblingRegion;
	} else
		return _implementation->getGamblingRegion();
}

bool GamblingTerminal::gameRunning() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->gameRunning();
}

void GamblingTerminal::notifyOthers(PlayerCreature* player, ParameterizedStringId* text) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyOthers(player, text);
}

void GamblingTerminal::notifyAll(ParameterizedStringId* text) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyAll(text);
}

bool GamblingTerminal::checkJoin(PlayerCreature* player) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->checkJoin(player);
}

void GamblingTerminal::joinTerminal(PlayerCreature* player) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->joinTerminal(player);
}

void GamblingTerminal::leaveTerminal(PlayerCreature* player) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->leaveTerminal(player);
}

void GamblingTerminal::closeMenu(PlayerCreature* player, bool payout) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addObjectParameter(player);
		method.addBooleanParameter(payout);

		method.executeWithVoidReturn();
	} else
		_implementation->closeMenu(player, payout);
}

void GamblingTerminal::closeAllMenus() {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithVoidReturn();
	} else
		_implementation->closeAllMenus();
}

void GamblingTerminal::statusUpdate(PlayerCreature* player, int event) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(player);
		method.addSignedIntParameter(event);

		method.executeWithVoidReturn();
	} else
		_implementation->statusUpdate(player, event);
}

void GamblingTerminal::statusUpdate(int event) {
	GamblingTerminalImplementation* _implementation = (GamblingTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addSignedIntParameter(event);

		method.executeWithVoidReturn();
	} else
		_implementation->statusUpdate(event);
}

DistributedObjectServant* GamblingTerminal::_getImplementation() {
	return getForUpdate();}

void GamblingTerminal::_setImplementation(DistributedObjectServant* servant) {
	setObject((ManagedObjectImplementation*) servant);}

/*
 *	GamblingTerminalImplementation
 */

GamblingTerminalImplementation::GamblingTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


GamblingTerminalImplementation::~GamblingTerminalImplementation() {
}


void GamblingTerminalImplementation::finalize() {
}

void GamblingTerminalImplementation::_initializeImplementation() {
	_setClassHelper(GamblingTerminalHelper::instance());

	_serializationHelperMethod();
}

void GamblingTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (GamblingTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* GamblingTerminalImplementation::_getStub() {
	return _this;
}

GamblingTerminalImplementation::operator const GamblingTerminal*() {
	return _this;
}

TransactionalObject* GamblingTerminalImplementation::clone() {
	return (TransactionalObject*) new GamblingTerminalImplementation(*this);
}


void GamblingTerminalImplementation::lock(bool doLock) {
}

void GamblingTerminalImplementation::lock(ManagedObject* obj) {
}

void GamblingTerminalImplementation::rlock(bool doLock) {
}

void GamblingTerminalImplementation::wlock(bool doLock) {
}

void GamblingTerminalImplementation::wlock(ManagedObject* obj) {
}

void GamblingTerminalImplementation::unlock(bool doLock) {
}

void GamblingTerminalImplementation::runlock(bool doLock) {
}

void GamblingTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("GamblingTerminal");

	addSerializableVariable("gamblingRegion", &gamblingRegion);
	addSerializableVariable("machineType", &machineType);
	addSerializableVariable("playersWindows", &playersWindows);
	addSerializableVariable("winnings", &winnings);
	addSerializableVariable("gameCount", &gameCount);
	addSerializableVariable("first", &first);
	addSerializableVariable("second", &second);
	addSerializableVariable("third", &third);
	addSerializableVariable("minBet", &minBet);
	addSerializableVariable("maxBet", &maxBet);
	addSerializableVariable("state", &state);
	addSerializableVariable("bets", &bets);
}

GamblingTerminalImplementation::GamblingTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(130):  		state = NOGAMERUNNING;
	state = NOGAMERUNNING;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(131):  		first = 0;
	first = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(132):  		second = 0;
	second = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(133):  		third = 0;
	third = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(134):  		gameCount = 0;
	gameCount = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(135):  		minBet = 1;
	minBet = 1;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(136):  		maxBet = 10000;
	maxBet = 10000;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(137):  		Logger.setLoggingName("GamblingTerminal");
	Logger::setLoggingName("GamblingTerminal");
}

void GamblingTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(141):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(143):  		Logger.setLoggingName("GamblingTerminal");
	Logger::setLoggingName("GamblingTerminal");
}

void GamblingTerminalImplementation::reset() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(147):  		state = NOGAMERUNNING;
	state = NOGAMERUNNING;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(148):  		first = 0;
	first = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(149):  		second = 0;
	second = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(150):  		third = 0;
	third = 0;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(151):  		playersWindows.removeAll();
	(&playersWindows)->removeAll();
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(152):  		winnings.removeAll();
	(&winnings)->removeAll();
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(153):  		bets.removeAll();
	(&bets)->removeAll();
}

Vector<GamblingBet*>* GamblingTerminalImplementation::getBets() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(158):  		return bets;
	return (&bets);
}

VectorMap<ManagedReference<PlayerCreature* >, unsigned int>* GamblingTerminalImplementation::getPlayersWindows() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(163):  		return playersWindows;
	return (&playersWindows);
}

VectorMap<ManagedReference<PlayerCreature* >, int>* GamblingTerminalImplementation::getWinnings() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(168):  		return winnings;
	return (&winnings);
}

int GamblingTerminalImplementation::getFirst() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(172):  		return first;
	return first;
}

int GamblingTerminalImplementation::getSecond() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(176):  		return second;
	return second;
}

int GamblingTerminalImplementation::getThird() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(180):  		return third;
	return third;
}

void GamblingTerminalImplementation::setFirst(int value) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(184):  		first = value;
	first = value;
}

void GamblingTerminalImplementation::setSecond(int value) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(188):  		second = value;
	second = value;
}

void GamblingTerminalImplementation::setThird(int value) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(192):  		third = value;
	third = value;
}

int GamblingTerminalImplementation::getMinBet() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(196):  		return minBet;
	return minBet;
}

int GamblingTerminalImplementation::getMaxBet() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(200):  		return maxBet;
	return maxBet;
}

int GamblingTerminalImplementation::getState() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(204):  		return state;
	return state;
}

void GamblingTerminalImplementation::setState(int value) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(208):  		state = value;
	state = value;
}

int GamblingTerminalImplementation::getMachineType() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(212):  		return machineType;
	return machineType;
}

GamblingEvent* GamblingTerminalImplementation::getEvent() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(217):  		return event;
	return event;
}

void GamblingTerminalImplementation::incGameCount() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(224):  		gameCount = gameCount + 1;
	gameCount = gameCount + 1;
}

int GamblingTerminalImplementation::getGameCount() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(228):  		return gameCount;
	return gameCount;
}

bool GamblingTerminalImplementation::isGoneEmpty() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(232):  		return 
	if ((&playersWindows)->size() == 0)	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(233):  			return true;
	return true;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(234):  false;
	return false;
}

String GamblingTerminalImplementation::getMachineTypeText() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(238):  
	if (machineType == ROULETTEMACHINE)	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(239):  			return "@gambling/game_n:roulette";
	return "@gambling/game_n:roulette";

	else 	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(240):  
	if (machineType == SLOTMACHINE)	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(241):  			return "@gambling/game_n:slot_standard";
	return "@gambling/game_n:slot_standard";

	else 	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(243):  			return "Sabacc";
	return "Sabacc";
}

void GamblingTerminalImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(254):  		super.loadTemplateData(templateData);
	TerminalImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(256):  		GamblingTerminalTemplate 
	if (!templateData->isGamblingTerminalTemplate()){
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(257):  			error("critical error");
	error("critical error");
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(258):  			return;
	return;
}
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(261):  templ = (GamblingTerminalTemplate) templateData;
	GamblingTerminalTemplate* templ = (GamblingTerminalTemplate*) templateData;
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(263):  		machineType = templ.getMachineType();
	machineType = templ->getMachineType();
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(265):  	}
	if (machineType == SLOTMACHINE){
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(266):  			maxBet = 3;
	maxBet = 3;
}
}

String GamblingTerminalImplementation::getText(PlayerCreature* player) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(279):  		return 
	if ((&playersWindows)->contains(player))	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(280):  			return "@gambling/default_interface:mnu_leave";
	return "@gambling/default_interface:mnu_leave";
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(281):  "@gambling/default_interface:mnu_join";
	return "@gambling/default_interface:mnu_join";
}

void GamblingTerminalImplementation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(291):  		string text = getText(player);
	String text = getText(player);
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(292):  		menuResponse.addRadialMenuItem(245, 3, text);
	menuResponse->addRadialMenuItem(245, 3, text);
}

void GamblingTerminalImplementation::setGamblingRegion(const String& region) {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(304):  		gamblingRegion = region;
	gamblingRegion = region;
}

String GamblingTerminalImplementation::getGamblingRegion() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(308):  		return gamblingRegion;
	return gamblingRegion;
}

bool GamblingTerminalImplementation::gameRunning() {
	// server/zone/objects/tangible/terminal/gambling/GamblingTerminal.idl(312):  		return state != NOGAMERUNNING;
	return state != NOGAMERUNNING;
}

/*
 *	GamblingTerminalAdapter
 */

GamblingTerminalAdapter::GamblingTerminalAdapter(GamblingTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* GamblingTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		reset();
		break;
	case 8:
		resp->insertSignedInt(getFirst());
		break;
	case 9:
		resp->insertSignedInt(getSecond());
		break;
	case 10:
		resp->insertSignedInt(getThird());
		break;
	case 11:
		setFirst(inv->getSignedIntParameter());
		break;
	case 12:
		setSecond(inv->getSignedIntParameter());
		break;
	case 13:
		setThird(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertSignedInt(getMinBet());
		break;
	case 15:
		resp->insertSignedInt(getMaxBet());
		break;
	case 16:
		resp->insertSignedInt(getState());
		break;
	case 17:
		setState(inv->getSignedIntParameter());
		break;
	case 18:
		resp->insertSignedInt(getMachineType());
		break;
	case 19:
		incGameCount();
		break;
	case 20:
		resp->insertSignedInt(getGameCount());
		break;
	case 21:
		resp->insertBoolean(isGoneEmpty());
		break;
	case 22:
		resp->insertAscii(getMachineTypeText());
		break;
	case 23:
		resp->insertAscii(getText((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 24:
		fillObjectMenuResponse((ObjectMenuResponse*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 26:
		setGamblingRegion(inv->getAsciiParameter(_param0_setGamblingRegion__String_));
		break;
	case 27:
		resp->insertAscii(getGamblingRegion());
		break;
	case 28:
		resp->insertBoolean(gameRunning());
		break;
	case 29:
		resp->insertBoolean(checkJoin((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 30:
		joinTerminal((PlayerCreature*) inv->getObjectParameter());
		break;
	case 31:
		leaveTerminal((PlayerCreature*) inv->getObjectParameter());
		break;
	case 32:
		closeMenu((PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 33:
		closeAllMenus();
		break;
	case 34:
		statusUpdate((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 35:
		statusUpdate(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GamblingTerminalAdapter::initializeTransientMembers() {
	((GamblingTerminalImplementation*) impl)->initializeTransientMembers();
}

void GamblingTerminalAdapter::reset() {
	((GamblingTerminalImplementation*) impl)->reset();
}

int GamblingTerminalAdapter::getFirst() {
	return ((GamblingTerminalImplementation*) impl)->getFirst();
}

int GamblingTerminalAdapter::getSecond() {
	return ((GamblingTerminalImplementation*) impl)->getSecond();
}

int GamblingTerminalAdapter::getThird() {
	return ((GamblingTerminalImplementation*) impl)->getThird();
}

void GamblingTerminalAdapter::setFirst(int value) {
	((GamblingTerminalImplementation*) impl)->setFirst(value);
}

void GamblingTerminalAdapter::setSecond(int value) {
	((GamblingTerminalImplementation*) impl)->setSecond(value);
}

void GamblingTerminalAdapter::setThird(int value) {
	((GamblingTerminalImplementation*) impl)->setThird(value);
}

int GamblingTerminalAdapter::getMinBet() {
	return ((GamblingTerminalImplementation*) impl)->getMinBet();
}

int GamblingTerminalAdapter::getMaxBet() {
	return ((GamblingTerminalImplementation*) impl)->getMaxBet();
}

int GamblingTerminalAdapter::getState() {
	return ((GamblingTerminalImplementation*) impl)->getState();
}

void GamblingTerminalAdapter::setState(int value) {
	((GamblingTerminalImplementation*) impl)->setState(value);
}

int GamblingTerminalAdapter::getMachineType() {
	return ((GamblingTerminalImplementation*) impl)->getMachineType();
}

void GamblingTerminalAdapter::incGameCount() {
	((GamblingTerminalImplementation*) impl)->incGameCount();
}

int GamblingTerminalAdapter::getGameCount() {
	return ((GamblingTerminalImplementation*) impl)->getGameCount();
}

bool GamblingTerminalAdapter::isGoneEmpty() {
	return ((GamblingTerminalImplementation*) impl)->isGoneEmpty();
}

String GamblingTerminalAdapter::getMachineTypeText() {
	return ((GamblingTerminalImplementation*) impl)->getMachineTypeText();
}

String GamblingTerminalAdapter::getText(PlayerCreature* player) {
	return ((GamblingTerminalImplementation*) impl)->getText(player);
}

void GamblingTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	((GamblingTerminalImplementation*) impl)->fillObjectMenuResponse(menuResponse, player);
}

int GamblingTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((GamblingTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void GamblingTerminalAdapter::setGamblingRegion(const String& region) {
	((GamblingTerminalImplementation*) impl)->setGamblingRegion(region);
}

String GamblingTerminalAdapter::getGamblingRegion() {
	return ((GamblingTerminalImplementation*) impl)->getGamblingRegion();
}

bool GamblingTerminalAdapter::gameRunning() {
	return ((GamblingTerminalImplementation*) impl)->gameRunning();
}

bool GamblingTerminalAdapter::checkJoin(PlayerCreature* player) {
	return ((GamblingTerminalImplementation*) impl)->checkJoin(player);
}

void GamblingTerminalAdapter::joinTerminal(PlayerCreature* player) {
	((GamblingTerminalImplementation*) impl)->joinTerminal(player);
}

void GamblingTerminalAdapter::leaveTerminal(PlayerCreature* player) {
	((GamblingTerminalImplementation*) impl)->leaveTerminal(player);
}

void GamblingTerminalAdapter::closeMenu(PlayerCreature* player, bool payout) {
	((GamblingTerminalImplementation*) impl)->closeMenu(player, payout);
}

void GamblingTerminalAdapter::closeAllMenus() {
	((GamblingTerminalImplementation*) impl)->closeAllMenus();
}

void GamblingTerminalAdapter::statusUpdate(PlayerCreature* player, int event) {
	((GamblingTerminalImplementation*) impl)->statusUpdate(player, event);
}

void GamblingTerminalAdapter::statusUpdate(int event) {
	((GamblingTerminalImplementation*) impl)->statusUpdate(event);
}

/*
 *	GamblingTerminalHelper
 */

GamblingTerminalHelper* GamblingTerminalHelper::staticInitializer = GamblingTerminalHelper::instance();

GamblingTerminalHelper::GamblingTerminalHelper() {
	className = "GamblingTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GamblingTerminalHelper::finalizeHelper() {
	GamblingTerminalHelper::finalize();
}

DistributedObject* GamblingTerminalHelper::instantiateObject() {
	return new GamblingTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* GamblingTerminalHelper::instantiateServant() {
	return new GamblingTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GamblingTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GamblingTerminalAdapter((GamblingTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

