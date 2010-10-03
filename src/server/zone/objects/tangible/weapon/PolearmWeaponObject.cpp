/*
 *	server/zone/objects/tangible/weapon/PolearmWeaponObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PolearmWeaponObject.h"

#include "server/zone/Zone.h"


// Imported class dependencies

#include "server/zone/managers/planet/PlanetManager.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/ZoneServer.h"

#include "engine/util/Quaternion.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "system/lang/Time.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "system/util/Vector.h"

#include "system/util/SortedVector.h"

#include "server/zone/templates/tangible/SharedWeaponObjectTemplate.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

/*
 *	PolearmWeaponObjectStub
 */

PolearmWeaponObject::PolearmWeaponObject() : MeleeWeaponObject(DummyConstructorParameter::instance()) {
	PolearmWeaponObjectImplementation* _implementation = new PolearmWeaponObjectImplementation();
	ManagedObject::_setImplementation(_implementation);
	_implementation->_setStub(this);
}

PolearmWeaponObject::PolearmWeaponObject(DummyConstructorParameter* param) : MeleeWeaponObject(param) {
}

PolearmWeaponObject::~PolearmWeaponObject() {
}


void PolearmWeaponObject::initializeTransientMembers() {
	PolearmWeaponObjectImplementation* _implementation = (PolearmWeaponObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

bool PolearmWeaponObject::isPolearmWeaponObject() {
	PolearmWeaponObjectImplementation* _implementation = (PolearmWeaponObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPolearmWeaponObject();
}

DistributedObjectServant* PolearmWeaponObject::_getImplementation() {
	return getForUpdate();}

void PolearmWeaponObject::_setImplementation(DistributedObjectServant* servant) {
	setObject((ManagedObjectImplementation*) servant);}

/*
 *	PolearmWeaponObjectImplementation
 */

PolearmWeaponObjectImplementation::PolearmWeaponObjectImplementation(DummyConstructorParameter* param) : MeleeWeaponObjectImplementation(param) {
	_initializeImplementation();
}


PolearmWeaponObjectImplementation::~PolearmWeaponObjectImplementation() {
}


void PolearmWeaponObjectImplementation::finalize() {
}

void PolearmWeaponObjectImplementation::_initializeImplementation() {
	_setClassHelper(PolearmWeaponObjectHelper::instance());

	_serializationHelperMethod();
}

void PolearmWeaponObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PolearmWeaponObject*) stub;
	MeleeWeaponObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PolearmWeaponObjectImplementation::_getStub() {
	return _this;
}

PolearmWeaponObjectImplementation::operator const PolearmWeaponObject*() {
	return _this;
}

TransactionalObject* PolearmWeaponObjectImplementation::clone() {
	return (TransactionalObject*) new PolearmWeaponObjectImplementation(*this);
}


void PolearmWeaponObjectImplementation::lock(bool doLock) {
}

void PolearmWeaponObjectImplementation::lock(ManagedObject* obj) {
}

void PolearmWeaponObjectImplementation::rlock(bool doLock) {
}

void PolearmWeaponObjectImplementation::wlock(bool doLock) {
}

void PolearmWeaponObjectImplementation::wlock(ManagedObject* obj) {
}

void PolearmWeaponObjectImplementation::unlock(bool doLock) {
}

void PolearmWeaponObjectImplementation::runlock(bool doLock) {
}

void PolearmWeaponObjectImplementation::_serializationHelperMethod() {
	MeleeWeaponObjectImplementation::_serializationHelperMethod();

	_setClassName("PolearmWeaponObject");

}

PolearmWeaponObjectImplementation::PolearmWeaponObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/weapon/PolearmWeaponObject.idl(54):  		Logger.setLoggingName("PolearmWeaponObject");
	Logger::setLoggingName("PolearmWeaponObject");
}

void PolearmWeaponObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/weapon/PolearmWeaponObject.idl(58):  		super.initializeTransientMembers();
	MeleeWeaponObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/weapon/PolearmWeaponObject.idl(60):  		Logger.setLoggingName("PolearmWeaponObject");
	Logger::setLoggingName("PolearmWeaponObject");
}

bool PolearmWeaponObjectImplementation::isPolearmWeaponObject() {
	// server/zone/objects/tangible/weapon/PolearmWeaponObject.idl(64):  		return true;
	return true;
}

/*
 *	PolearmWeaponObjectAdapter
 */

PolearmWeaponObjectAdapter::PolearmWeaponObjectAdapter(PolearmWeaponObjectImplementation* obj) : MeleeWeaponObjectAdapter(obj) {
}

Packet* PolearmWeaponObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertBoolean(isPolearmWeaponObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PolearmWeaponObjectAdapter::initializeTransientMembers() {
	((PolearmWeaponObjectImplementation*) impl)->initializeTransientMembers();
}

bool PolearmWeaponObjectAdapter::isPolearmWeaponObject() {
	return ((PolearmWeaponObjectImplementation*) impl)->isPolearmWeaponObject();
}

/*
 *	PolearmWeaponObjectHelper
 */

PolearmWeaponObjectHelper* PolearmWeaponObjectHelper::staticInitializer = PolearmWeaponObjectHelper::instance();

PolearmWeaponObjectHelper::PolearmWeaponObjectHelper() {
	className = "PolearmWeaponObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PolearmWeaponObjectHelper::finalizeHelper() {
	PolearmWeaponObjectHelper::finalize();
}

DistributedObject* PolearmWeaponObjectHelper::instantiateObject() {
	return new PolearmWeaponObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PolearmWeaponObjectHelper::instantiateServant() {
	return new PolearmWeaponObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PolearmWeaponObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PolearmWeaponObjectAdapter((PolearmWeaponObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

