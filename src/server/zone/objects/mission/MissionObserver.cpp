/*
 *	server/zone/objects/mission/MissionObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObserver.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "server/zone/objects/scene/SceneObject.h"


// Imported class dependencies

#include "engine/util/Quaternion.h"

#include "server/zone/templates/TemplateReference.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "system/util/Vector.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "server/zone/objects/waypoint/WaypointObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/SortedVector.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

/*
 *	MissionObserverStub
 */

MissionObserver::MissionObserver(MissionObjective* objective) : Observer(DummyConstructorParameter::instance()) {
	MissionObserverImplementation* _implementation = new MissionObserverImplementation(objective);
	_impl = _implementation;
	_impl->_setStub(this);
}

MissionObserver::MissionObserver(DummyConstructorParameter* param) : Observer(param) {
}

MissionObserver::~MissionObserver() {
}


int MissionObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObserverImplementation* _implementation = (MissionObserverImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void MissionObserver::destroyObjectFromDatabase() {
	MissionObserverImplementation* _implementation = (MissionObserverImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase();
}

DistributedObjectServant* MissionObserver::_getImplementation() {
	return _impl;}

void MissionObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	MissionObserverImplementation
 */

MissionObserverImplementation::MissionObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


MissionObserverImplementation::~MissionObserverImplementation() {
}


void MissionObserverImplementation::finalize() {
}

void MissionObserverImplementation::_initializeImplementation() {
	_setClassHelper(MissionObserverHelper::instance());

	_serializationHelperMethod();
}

void MissionObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObserver*) stub;
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObserverImplementation::_getStub() {
	return _this;
}

MissionObserverImplementation::operator const MissionObserver*() {
	return _this;
}

void MissionObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("MissionObserver");

	addSerializableVariable("missionObjective", &missionObjective);
}

MissionObserverImplementation::MissionObserverImplementation(MissionObjective* objective) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObserver.idl(58):  		missionObjective = objective;
	missionObjective = objective;
	// server/zone/objects/mission/MissionObserver.idl(60):  		Logger.setLoggingName("MissionObserver");
	Logger::setLoggingName("MissionObserver");
}

/*
 *	MissionObserverAdapter
 */

MissionObserverAdapter::MissionObserverAdapter(MissionObserverImplementation* obj) : ObserverAdapter(obj) {
}

Packet* MissionObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 7:
		destroyObjectFromDatabase();
		break;
	default:
		return NULL;
	}

	return resp;
}

int MissionObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((MissionObserverImplementation*) impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void MissionObserverAdapter::destroyObjectFromDatabase() {
	((MissionObserverImplementation*) impl)->destroyObjectFromDatabase();
}

/*
 *	MissionObserverHelper
 */

MissionObserverHelper* MissionObserverHelper::staticInitializer = MissionObserverHelper::instance();

MissionObserverHelper::MissionObserverHelper() {
	className = "MissionObserver";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObserverHelper::finalizeHelper() {
	MissionObserverHelper::finalize();
}

DistributedObject* MissionObserverHelper::instantiateObject() {
	return new MissionObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObserverHelper::instantiateServant() {
	return new MissionObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObserverAdapter((MissionObserverImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

