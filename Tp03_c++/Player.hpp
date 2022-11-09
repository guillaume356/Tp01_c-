#ifndef PLAYER_HPP
#define PLAYER_HPP
class Player {
public:

    /**
     * @brief Construct a new Player
     *
     * @param int idPlayer
     */
    Player(int idPlayer)
    {
        this->idPlayer = idPlayer;

    }
    /**
     * @brief Get the id of the player
     *
     * @return int
     */
    inline int getIdPlayer() const { return this->idPlayer; };

private:
    int idPlayer;
};
#endif
