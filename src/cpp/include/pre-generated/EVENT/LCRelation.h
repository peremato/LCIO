// -*- C++ -*-
// AID-GENERATED
// =========================================================================
// This class was generated by AID - Abstract Interface Definition          
// DO NOT MODIFY, but use the org.freehep.aid.Aid utility to regenerate it. 
// =========================================================================
#ifndef EVENT_LCRELATION_H
#define EVENT_LCRELATION_H 1

#include "EVENT/LCObject.h"

namespace EVENT {

class LCObject;

/** A single weighted relationship between two LCObjects. Stored in an LCCollection
 * like any other LCObject. Use inplementations of LCRelationNavigator to 
 * navigate the relation efficiently.
 * the types of the objects is decoded in the collection paramters 'RelationFromType'
 * and 'RelationToType'. In order to  store weights != 1. with the relation set the 
 * collection flag bit LCIO::LCREL_WEIGHTED, this is done automatically in 
 * UTIL::LCRelationNavigator if a weight != 1. exists.
 * 
 * @author gaede 
 * @version $Id: LCRelation.aid,v 1.7 2006-09-14 10:16:11 gaede Exp $
 * @see LCRelationNavigator
 */

class LCRelation : public LCObject {

public: 
    /// Destructor.
    virtual ~LCRelation() { /* nop */; }


    /** Useful typedef for template programming with LCIO */
    typedef LCRelation lcobject_type ;

    /** The 'from' object of the given relation. 
     */
    virtual LCObject * getFrom() const = 0;

    /** The 'to' object of the given relation. 
     */
    virtual LCObject * getTo() const = 0;

    /** The weight of the given relation - only if collection flag bit LCIO::LCREL_WEIGHTED is set. 
     */
    virtual float getWeight() const = 0;
}; // class
} // namespace EVENT
#endif /* ifndef EVENT_LCRELATION_H */
