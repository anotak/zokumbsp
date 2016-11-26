struct sBlockMapExtraData {
	bool *lineDefsUsed;
	int rightMostVertex;
	int leftMostVertex;
	int bottomVertex;
	int topVertex;
	bool multiSectorSpecial;
	int bruteForceStepsX;
	int bruteForceStepsY;
};

void BlockMapExtraData(DoomLevel *, sBlockMapExtraData *, const sBlockMapOptions &options);
