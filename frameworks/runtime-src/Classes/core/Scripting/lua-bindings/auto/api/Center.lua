
--------------------------------
-- @module Center
-- @extend Ref
-- @parent_module maps

--------------------------------
-- »ñÈ¡Ë÷Òý
-- @function [parent=#Center] getIndex 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- ÉèÖÃµØÐÎÀàÐÍ
-- @function [parent=#Center] setTerrain 
-- @param self
-- @param #int terrain
        
--------------------------------
-- ÉèÖÃÉúÌ¬Ë÷Òý
-- @function [parent=#Center] setBiomeIndex 
-- @param self
-- @param #unsigned int i
        
--------------------------------
-- ÉèÖÃº£°Î
-- @function [parent=#Center] setElevation 
-- @param self
-- @param #double elevation
        
--------------------------------
-- ÉèÖÃÉúÌ¬ÀàÐÍ
-- @function [parent=#Center] setBiome 
-- @param self
-- @param #int biome
        
--------------------------------
-- »ñÈ¡CenterÈÝÆ÷
-- @function [parent=#Center] getCenters 
-- @param self
-- @return array_table#array_table ret (return value: array_table)
        
--------------------------------
-- »ñÈ¡ÁÐ
-- @function [parent=#Center] getCol 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- ÉèÖÃµØÐÎË÷Òý
-- @function [parent=#Center] setTerrainIndex 
-- @param self
-- @param #unsigned int i
        
--------------------------------
-- »ñÈ¡ÐÐ
-- @function [parent=#Center] getRow 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- »ñÈ¡µØÐÎË÷Òý
-- @function [parent=#Center] getTerrainIndex 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- »ñÈ¡ÉúÌ¬Ë÷Òý
-- @function [parent=#Center] getBiomeIndex 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- 
-- @function [parent=#Center] init 
-- @param self
-- @param #unsigned int i
-- @param #unsigned int r
-- @param #unsigned int c
-- @param #vec2_table position
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- ÉèÖÃÊÇ·ñº£Ì²
-- @function [parent=#Center] setBorder 
-- @param self
-- @param #bool border
        
--------------------------------
-- »ñÈ¡µØÐÎÀàÐÍ
-- @function [parent=#Center] getTerrain 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- »ñÈ¡ÉúÌ¬ÀàÐÍ
-- @function [parent=#Center] getBiome 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- ÊÇ·ñº£Ì²
-- @function [parent=#Center] isBorder 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- »ñÈ¡º£°Î
-- @function [parent=#Center] getElevation 
-- @param self
-- @return double#double ret (return value: double)
        
--------------------------------
-- »ñÈ¡XÖáÎ»ÖÃ
-- @function [parent=#Center] getPosition 
-- @param self
-- @return vec2_table#vec2_table ret (return value: vec2_table)
        
--------------------------------
-- 
-- @function [parent=#Center] create 
-- @param self
-- @param #unsigned int i
-- @param #unsigned int r
-- @param #unsigned int c
-- @param #vec2_table position
-- @return Center#Center ret (return value: maps.Center)
        
--------------------------------
-- 
-- @function [parent=#Center] Center 
-- @param self
        
return nil
