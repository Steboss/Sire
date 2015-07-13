// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ThisThread.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireError/printerror.h"

#include "backend.h"

#include "cluster.h"

#include "frontend.h"

#include "node.h"

#include "nodes.h"

#include <QDebug>

#include <QHash>

#include <QList>

#include <QMutex>

#include <QSemaphore>

#include <QSet>

#include <QThreadStorage>

#include <QTime>

#include <QUuid>

#include <QWaitCondition>

#include "nodes.h"

SireCluster::ThisThread __copy__(const SireCluster::ThisThread &other){ return SireCluster::ThisThread(other); }

const char* pvt_get_name(const SireCluster::ThisThread&){ return "SireCluster::ThisThread";}

void register_ThisThread_class(){

    { //::SireCluster::ThisThread
        typedef bp::class_< SireCluster::ThisThread > ThisThread_exposer_t;
        ThisThread_exposer_t ThisThread_exposer = ThisThread_exposer_t( "ThisThread", bp::init< >() );
        bp::scope ThisThread_scope( ThisThread_exposer );
        ThisThread_exposer.def( bp::init< SireCluster::ThisThread const & >(( bp::arg("other") )) );
        ThisThread_exposer.def( bp::init< SireCluster::Nodes const & >(( bp::arg("nodes") )) );
        { //::SireCluster::ThisThread::operator=
        
            typedef ::SireCluster::ThisThread & ( ::SireCluster::ThisThread::*assign_function_type )( ::SireCluster::ThisThread const & ) ;
            assign_function_type assign_function_value( &::SireCluster::ThisThread::operator= );
            
            ThisThread_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireCluster::ThisThread::reclaim
        
            typedef void ( ::SireCluster::ThisThread::*reclaim_function_type )(  ) ;
            reclaim_function_type reclaim_function_value( &::SireCluster::ThisThread::reclaim );
            
            ThisThread_exposer.def( 
                "reclaim"
                , reclaim_function_value );
        
        }
        ThisThread_exposer.def( "__copy__", &__copy__);
        ThisThread_exposer.def( "__deepcopy__", &__copy__);
        ThisThread_exposer.def( "clone", &__copy__);
        ThisThread_exposer.def( "__str__", &pvt_get_name);
        ThisThread_exposer.def( "__repr__", &pvt_get_name);
    }

}