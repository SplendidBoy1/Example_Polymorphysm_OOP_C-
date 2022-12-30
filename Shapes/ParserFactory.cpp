#include "ParserFactory.h"

IParsable* ParserFactory :: create(string temp){
    IParsable* parser = NULL;

    if ("Rectangle" == temp) {
        parser = new RectangleParser();
    }
    else if ("Square" == temp) {
        parser = new SquareParser();
    }
    else if ("Circle" == temp) {
        parser = new CircleParser();
    }

    return parser;
}