char comb_name[28][3][15] = {
  {"veranda","living_room","kitchen"},
  {"veranda","living_room","hall"},
  {"kitchen","living_room","veranda"},
  {"kitchen","living_room","hall"},
  {"living_room","hall","library"},
  {"living_room","hall","corridor"},
  {"living_room","hall","garden"},
  {"hall","living_room","veranda"},
  {"hall","living_room","kitchen"},
  {"hall","corridor","bathroom"},
  {"hall","corridor","studio"},
  {"hall","corridor","bedroom"},
  {"hall","garden","street"},
  {"library","hall","living_room"},
  {"library","hall","corridor"},
  {"library","hall","garden"},
  {"corridor","hall","library"},
  {"corridor","hall","living_room"},
  {"corridor","hall","garden"},
  {"bathroom","corridor","hall"},
  {"bathroom","corridor","bedroom"},
  {"bathroom","corridor","studio"},
  {"bedroom","corridor","bathroom"},
  {"bedroom","corridor","hall"},
  {"bedroom","corridor","studio"},
  {"studio","corridor","hall"},
  {"studio","corridor","bathroom"},
  {"studio","corridor","bedroom"},
};

int NComb = 28;
