// Coming in hard over Zen's original class because I just could get texture AND config precedence working right
modded class ZenTreasure_PhotoBase
{
    override void AsssignPhotoTexture(string photoNumber)
    {
        if (!g_Game.IsDedicatedServer())
            return;
			
		if(g_Game.GetWorldName() == "namalsk") // Namalsk uses unique texture path
        {
				//Print("[NamalskZenTreasure] Namalsk detected for photo#: " + photoNumber);

                if (GetHiddenSelectionsTextures().Count() > 0)
                    SetObjectTexture(0, GetHiddenSelectionsTextures().Get(0));
                else
                    SetObjectTexture(0, "NamalskZenTreasurePhotos/data/photos/photo" + photoNumber + ".paa");
        }
        else
        {
			//Print("[NamalskZenTreasure] Namalsk not detected for photo#: " + photoNumber);
            super.AsssignPhotoTexture(photoNumber); // Pass other map names to Zen's original function
        }
    }
}