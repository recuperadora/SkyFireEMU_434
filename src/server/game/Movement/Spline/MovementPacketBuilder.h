/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011-2012 Project SkyFire <http://www.projectskyfire.org/>
 * Copyright (C) 2005-2012 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SKYFIRESERVER_PACKET_BUILDER_H
#define SKYFIRESERVER_PACKET_BUILDER_H

class ByteBuffer;
class WorldPacket;

namespace Movement
{
    class MoveSpline;
    class PacketBuilder
    {
        static void WriteCommonMonsterMovePart(const MoveSpline& mov, WorldPacket& data);
    public:

        static void WriteMonsterMove(const MoveSpline& mov, WorldPacket& data);
        static void WriteCreate(const MoveSpline& mov, ByteBuffer& data);
        static void WriteData(const MoveSpline& move_spline, ByteBuffer& data);
        static void WriteBytes(const MoveSpline& move_spline, ByteBuffer& data);
    };
}
#endif // SKYFIRESERVER_PACKET_BUILDER_H
