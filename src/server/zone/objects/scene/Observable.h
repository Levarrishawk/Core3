/*
 *	server/zone/objects/scene/Observable.h generated by engine3 IDL compiler 0.60
 */

#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/Observer.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class Observable : public ManagedObject {
public:
	void notifyObservers(unsigned int eventType, ManagedObject* arg1 = NULL, long long arg2 = 0);

	void registerObserver(unsigned int eventType, Observer* observer);

	void dropObserver(unsigned int eventType, Observer* observer);

	int getObserverCount(unsigned int eventType);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Observable(DummyConstructorParameter* param);

	virtual ~Observable();

	friend class ObservableHelper;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class ObservableImplementation : public ManagedObjectImplementation {
protected:
	ObserverEventMap observerEventMap;

public:
	ObservableImplementation();
	ObservableImplementation(DummyConstructorParameter* param);

	void notifyObservers(unsigned int eventType, ManagedObject* arg1 = NULL, long long arg2 = 0);

	void registerObserver(unsigned int eventType, Observer* observer);

	void dropObserver(unsigned int eventType, Observer* observer);

	int getObserverCount(unsigned int eventType);

	Observable* _this;

	operator const Observable*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ObservableImplementation();

	TransactionalObject* clone();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class Observable;
	friend class TransactionalObjectHandle<ObservableImplementation*>;
};

class ObservableAdapter : public ManagedObjectAdapter {
public:
	ObservableAdapter(ObservableImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyObservers(unsigned int eventType, ManagedObject* arg1, long long arg2);

	void registerObserver(unsigned int eventType, Observer* observer);

	void dropObserver(unsigned int eventType, Observer* observer);

	int getObserverCount(unsigned int eventType);

};

class ObservableHelper : public DistributedObjectClassHelper, public Singleton<ObservableHelper> {
	static ObservableHelper* staticInitializer;

public:
	ObservableHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ObservableHelper>;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#endif /*OBSERVABLE_H_*/
