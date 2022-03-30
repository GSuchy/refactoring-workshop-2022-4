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
    
    std::list<Segment> m_segments;
    

 protected:

    //std::list<Segment> m_segments;

 private:
    /*bool isSegmentAtPosition(int x, int y) const;
    Segment calculateNewHead() const;
    void removeTailSegment();
    void addHeadSegment(Segment const& newHead);
    void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    void removeTailSegmentIfNotScored(Segment const& newHead);*/
    
};

} //namespace