// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InterGroupLJFFBase.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "interljff.h"

#include "interljff.h"

SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > __copy__(const SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > &other){ return SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_InterGroupLJFFBase_class(){

    { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >
        typedef bp::class_< SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >, bp::bases< SireMM::LJPotentialInterface<SireMM::InterLJPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InterGroupLJFFBase_exposer_t;
        InterGroupLJFFBase_exposer_t InterGroupLJFFBase_exposer = InterGroupLJFFBase_exposer_t( "InterGroupLJFFBase", "", bp::init< >("") );
        bp::scope InterGroupLJFFBase_scope( InterGroupLJFFBase_exposer );
        InterGroupLJFFBase_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        InterGroupLJFFBase_exposer.def( bp::init< SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > const & >(( bp::arg("other") ), "") );
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::components
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef ::SireMM::LJComponent const & ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::components );
            
            InterGroupLJFFBase_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::containsProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::containsProperty );
            
            InterGroupLJFFBase_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::mustNowRecalculateFromScratch
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::mustNowRecalculateFromScratch );
            
            InterGroupLJFFBase_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , "" );
        
        }
        InterGroupLJFFBase_exposer.def( bp::self != bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::operator=
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > & ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*assign_function_type)( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::operator= );
            
            InterGroupLJFFBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InterGroupLJFFBase_exposer.def( bp::self == bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::properties
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::properties );
            
            InterGroupLJFFBase_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::property
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::property );
            
            InterGroupLJFFBase_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::setProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::setProperty );
            
            InterGroupLJFFBase_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::typeName
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::typeName );
            
            InterGroupLJFFBase_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::what
        
            typedef SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::Inter2B2GFF< SireMM::LJPotentialInterface< SireMM::InterLJPotential > >::what );
            
            InterGroupLJFFBase_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        InterGroupLJFFBase_exposer.staticmethod( "typeName" );
        InterGroupLJFFBase_exposer.def( "__copy__", &__copy__);
        InterGroupLJFFBase_exposer.def( "__deepcopy__", &__copy__);
        InterGroupLJFFBase_exposer.def( "clone", &__copy__);
        InterGroupLJFFBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupLJFFBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupLJFFBase_exposer.def( "__str__", &__str__< ::SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > > );
        InterGroupLJFFBase_exposer.def( "__repr__", &__str__< ::SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > > );
        InterGroupLJFFBase_exposer.def( "__len__", &__len_count< ::SireFF::Inter2B2GFF<SireMM::LJPotentialInterface<SireMM::InterLJPotential> > > );
    }

}
