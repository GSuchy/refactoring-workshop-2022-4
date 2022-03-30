#pragma once

#include <list>
#include <memory>
#include <stdexcept>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"

namespace Snake
{

struct Segment
    {
        int x;
        int y;
    };

class SnakeBody 
{
 
 public:
    
    
    

 private:

    std::list<Segment> m_segments;

    //bool isSegmentAtPosition(int x, int y) const;
    //Segment calculateNewHead() const;
    //void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    //void addHeadSegment(Segment const& newHead);
    //void removeTailSegmentIfNotScored(Segment const& newHead);
    //void removeTailSegment();
};

} //namespace