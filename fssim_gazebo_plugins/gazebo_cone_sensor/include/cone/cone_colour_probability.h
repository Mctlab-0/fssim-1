/*
 * DJSRacing Driverless Project
 *
 * Copyright (c) 2020 Authors:
 *   - Atharva Pusalkar <atharvapusalkar18@gmail.com>
 *
 * All rights reserved.
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */
#ifndef AUTONOMOUS_MSGS_PARSER_CONE_COLOUR_PROBABILITY_H
#define AUTONOMOUS_MSGS_PARSER_CONE_COLOUR_PROBABILITY_H

namespace gazebo
{
    struct ConeColourProbability
    {
        float probability_blue;
        float probability_yellow;
        float probability_orange;
        float probability_other;
    };
}

#endif //AUTONOMOUS_MSGS_PARSER_CONE_COLOUR_PROBABILITY_H
