//Code generated using pvs2ir2c
#include "nil_c.h"

extern bool_t sigmatopdowntest__digit(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)48;
        ivar_2 = (ivar_1 >= ivar_5);
        if (ivar_2){ 
             uint8_t ivar_8;
             ivar_8 = (uint8_t)57;
             result = (ivar_1 <= ivar_8);
} else {
        
             result = (bool_t) false;
};

        
        return result;
}

extern bool_t sigmatopdowntest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdowntest__pyaml(uint8_t ivar_1){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
} else {
        
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){  
           uint8_t ivar_18;
           ivar_18 = (uint8_t)2;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)1;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           sigmatopdowntest_funtype_0_t ivar_30;
           sigmatopdowntest_closure_1_t cl112849;
           cl112849 = new_sigmatopdowntest_closure_1();
           ivar_30 = (sigmatopdowntest_funtype_0_t)cl112849;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_30);
} else {
           
           bool_t ivar_31;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)3;
           ivar_31 = (ivar_1 == ivar_33);
           if (ivar_31){    
            uint8_t ivar_38;
            ivar_38 = (uint8_t)4;
            uint8_t ivar_39;
            ivar_39 = (uint8_t)35;
            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_38, (uint8_t)ivar_39);
} else {
           
            bool_t ivar_40;
            uint8_t ivar_42;
            ivar_42 = (uint8_t)4;
            ivar_40 = (ivar_1 == ivar_42);
            if (ivar_40){     
             uint8_t ivar_47;
             ivar_47 = (uint8_t)5;
             uint8_t ivar_48;
             ivar_48 = (uint8_t)11;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_47, (uint8_t)ivar_48);
} else {
            
             bool_t ivar_49;
             uint8_t ivar_51;
             ivar_51 = (uint8_t)5;
             ivar_49 = (ivar_1 == ivar_51);
             if (ivar_49){      
              uint8_t ivar_56;
              ivar_56 = (uint8_t)6;
              uint8_t ivar_57;
              ivar_57 = (uint8_t)7;
              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_56, (uint8_t)ivar_57);
} else {
             
              bool_t ivar_58;
              uint8_t ivar_60;
              ivar_60 = (uint8_t)6;
              ivar_58 = (ivar_1 == ivar_60);
              if (ivar_58){       
               uint8_t ivar_64;
               ivar_64 = (uint8_t)123;
               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_64);
} else {
              
               bool_t ivar_65;
               uint8_t ivar_67;
               ivar_67 = (uint8_t)7;
               ivar_65 = (ivar_1 == ivar_67);
               if (ivar_65){        
                uint8_t ivar_72;
                ivar_72 = (uint8_t)8;
                uint8_t ivar_73;
                ivar_73 = (uint8_t)10;
                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_72, (uint8_t)ivar_73);
} else {
               
                bool_t ivar_74;
                uint8_t ivar_76;
                ivar_76 = (uint8_t)8;
                ivar_74 = (ivar_1 == ivar_76);
                if (ivar_74){         
                 uint8_t ivar_81;
                 ivar_81 = (uint8_t)9;
                 uint8_t ivar_82;
                 ivar_82 = (uint8_t)7;
                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_81, (uint8_t)ivar_82);
} else {
                
                 bool_t ivar_83;
                 uint8_t ivar_85;
                 ivar_85 = (uint8_t)9;
                 ivar_83 = (ivar_1 == ivar_85);
                 if (ivar_83){          
                  uint8_t ivar_89;
                  ivar_89 = (uint8_t)32;
                  result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_89);
} else {
                 
                  bool_t ivar_90;
                  uint8_t ivar_92;
                  ivar_92 = (uint8_t)10;
                  ivar_90 = (ivar_1 == ivar_92);
                  if (ivar_90){           
                   result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_94;
                   uint8_t ivar_96;
                   ivar_96 = (uint8_t)11;
                   ivar_94 = (ivar_1 == ivar_96);
                   if (ivar_94){            
                    uint8_t ivar_101;
                    ivar_101 = (uint8_t)12;
                    uint8_t ivar_102;
                    ivar_102 = (uint8_t)14;
                    result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_101, (uint8_t)ivar_102);
} else {
                   
                    bool_t ivar_103;
                    uint8_t ivar_105;
                    ivar_105 = (uint8_t)12;
                    ivar_103 = (ivar_1 == ivar_105);
                    if (ivar_103){             
                     uint8_t ivar_110;
                     ivar_110 = (uint8_t)13;
                     uint8_t ivar_111;
                     ivar_111 = (uint8_t)7;
                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_110, (uint8_t)ivar_111);
} else {
                    
                     bool_t ivar_112;
                     uint8_t ivar_114;
                     ivar_114 = (uint8_t)13;
                     ivar_112 = (ivar_1 == ivar_114);
                     if (ivar_112){              
                      uint8_t ivar_118;
                      ivar_118 = (uint8_t)125;
                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_118);
} else {
                     
                      bool_t ivar_119;
                      uint8_t ivar_121;
                      ivar_121 = (uint8_t)14;
                      ivar_119 = (ivar_1 == ivar_121);
                      if (ivar_119){               
                       uint8_t ivar_126;
                       ivar_126 = (uint8_t)15;
                       uint8_t ivar_127;
                       ivar_127 = (uint8_t)31;
                       result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_126, (uint8_t)ivar_127);
} else {
                      
                       bool_t ivar_128;
                       uint8_t ivar_130;
                       ivar_130 = (uint8_t)15;
                       ivar_128 = (ivar_1 == ivar_130);
                       if (ivar_128){                
                        uint8_t ivar_135;
                        ivar_135 = (uint8_t)16;
                        uint8_t ivar_136;
                        ivar_136 = (uint8_t)28;
                        result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_135, (uint8_t)ivar_136);
} else {
                       
                        bool_t ivar_137;
                        uint8_t ivar_139;
                        ivar_139 = (uint8_t)16;
                        ivar_137 = (ivar_1 == ivar_139);
                        if (ivar_137){                 
                         uint8_t ivar_144;
                         ivar_144 = (uint8_t)1;
                         uint8_t ivar_145;
                         ivar_145 = (uint8_t)17;
                         result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_144, (uint8_t)ivar_145);
} else {
                        
                         bool_t ivar_146;
                         uint8_t ivar_148;
                         ivar_148 = (uint8_t)17;
                         ivar_146 = (ivar_1 == ivar_148);
                         if (ivar_146){                  
                          uint8_t ivar_153;
                          ivar_153 = (uint8_t)18;
                          uint8_t ivar_154;
                          ivar_154 = (uint8_t)7;
                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_153, (uint8_t)ivar_154);
} else {
                         
                          bool_t ivar_155;
                          uint8_t ivar_157;
                          ivar_157 = (uint8_t)18;
                          ivar_155 = (ivar_1 == ivar_157);
                          if (ivar_155){                   
                           uint8_t ivar_162;
                           ivar_162 = (uint8_t)19;
                           uint8_t ivar_163;
                           ivar_163 = (uint8_t)25;
                           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_162, (uint8_t)ivar_163);
} else {
                          
                           bool_t ivar_164;
                           uint8_t ivar_166;
                           ivar_166 = (uint8_t)19;
                           ivar_164 = (ivar_1 == ivar_166);
                           if (ivar_164){                    
                            uint8_t ivar_170;
                            ivar_170 = (uint8_t)39;
                            result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_170);
} else {
                           
                            bool_t ivar_171;
                            uint8_t ivar_173;
                            ivar_173 = (uint8_t)20;
                            ivar_171 = (ivar_1 == ivar_173);
                            if (ivar_171){                     
                             uint8_t ivar_178;
                             ivar_178 = (uint8_t)21;
                             uint8_t ivar_179;
                             ivar_179 = (uint8_t)25;
                             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_178, (uint8_t)ivar_179);
} else {
                            
                             bool_t ivar_180;
                             uint8_t ivar_182;
                             ivar_182 = (uint8_t)21;
                             ivar_180 = (ivar_1 == ivar_182);
                             if (ivar_180){                      
                              uint8_t ivar_187;
                              ivar_187 = (uint8_t)22;
                              uint8_t ivar_188;
                              ivar_188 = (uint8_t)20;
                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_187, (uint8_t)ivar_188);
} else {
                             
                              bool_t ivar_189;
                              uint8_t ivar_191;
                              ivar_191 = (uint8_t)22;
                              ivar_189 = (ivar_1 == ivar_191);
                              if (ivar_189){                       
                               uint8_t ivar_196;
                               ivar_196 = (uint8_t)23;
                               uint8_t ivar_197;
                               ivar_197 = (uint8_t)19;
                               result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_196, (uint8_t)ivar_197);
} else {
                              
                               bool_t ivar_198;
                               uint8_t ivar_200;
                               ivar_200 = (uint8_t)23;
                               ivar_198 = (ivar_1 == ivar_200);
                               if (ivar_198){                        
                                uint8_t ivar_204;
                                ivar_204 = (uint8_t)92;
                                result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_204);
} else {
                               
                                bool_t ivar_205;
                                uint8_t ivar_207;
                                ivar_207 = (uint8_t)24;
                                ivar_205 = (ivar_1 == ivar_207);
                                if (ivar_205){                         
                                 uint8_t ivar_212;
                                 ivar_212 = (uint8_t)19;
                                 uint8_t ivar_213;
                                 ivar_213 = (uint8_t)7;
                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_212, (uint8_t)ivar_213);
} else {
                                
                                 bool_t ivar_214;
                                 uint8_t ivar_216;
                                 ivar_216 = (uint8_t)25;
                                 ivar_214 = (ivar_1 == ivar_216);
                                 if (ivar_214){                          
                                  uint8_t ivar_221;
                                  ivar_221 = (uint8_t)24;
                                  uint8_t ivar_222;
                                  ivar_222 = (uint8_t)26;
                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_221, (uint8_t)ivar_222);
} else {
                                 
                                  bool_t ivar_223;
                                  uint8_t ivar_225;
                                  ivar_225 = (uint8_t)26;
                                  ivar_223 = (ivar_1 == ivar_225);
                                  if (ivar_223){                           
                                   uint8_t ivar_230;
                                   ivar_230 = (uint8_t)27;
                                   uint8_t ivar_231;
                                   ivar_231 = (uint8_t)20;
                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_230, (uint8_t)ivar_231);
} else {
                                  
                                   bool_t ivar_232;
                                   uint8_t ivar_234;
                                   ivar_234 = (uint8_t)27;
                                   ivar_232 = (ivar_1 == ivar_234);
                                   if (ivar_232){                            
                                    sigmatopdowntest_funtype_0_t ivar_242;
                                    sigmatopdowntest_closure_2_t cl112850;
                                    cl112850 = new_sigmatopdowntest_closure_2();
                                    ivar_242 = (sigmatopdowntest_funtype_0_t)cl112850;
                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_242);
} else {
                                   
                                    bool_t ivar_243;
                                    uint8_t ivar_245;
                                    ivar_245 = (uint8_t)28;
                                    ivar_243 = (ivar_1 == ivar_245);
                                    if (ivar_243){                             
                                     uint8_t ivar_250;
                                     ivar_250 = (uint8_t)29;
                                     uint8_t ivar_251;
                                     ivar_251 = (uint8_t)0;
                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_250, (uint8_t)ivar_251);
} else {
                                    
                                     bool_t ivar_252;
                                     uint8_t ivar_254;
                                     ivar_254 = (uint8_t)29;
                                     ivar_252 = (ivar_1 == ivar_254);
                                     if (ivar_252){                              
                                      uint8_t ivar_259;
                                      ivar_259 = (uint8_t)30;
                                      uint8_t ivar_260;
                                      ivar_260 = (uint8_t)7;
                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_259, (uint8_t)ivar_260);
} else {
                                     
                                      bool_t ivar_261;
                                      uint8_t ivar_263;
                                      ivar_263 = (uint8_t)30;
                                      ivar_261 = (ivar_1 == ivar_263);
                                      if (ivar_261){                               
                                       uint8_t ivar_267;
                                       ivar_267 = (uint8_t)58;
                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_267);
} else {
                                      
                                       bool_t ivar_268;
                                       uint8_t ivar_270;
                                       ivar_270 = (uint8_t)31;
                                       ivar_268 = (ivar_1 == ivar_270);
                                       if (ivar_268){                                
                                        uint8_t ivar_275;
                                        ivar_275 = (uint8_t)32;
                                        uint8_t ivar_276;
                                        ivar_276 = (uint8_t)12;
                                        result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_275, (uint8_t)ivar_276);
} else {
                                       
                                        bool_t ivar_277;
                                        uint8_t ivar_279;
                                        ivar_279 = (uint8_t)32;
                                        ivar_277 = (ivar_1 == ivar_279);
                                        if (ivar_277){                                 
                                         uint8_t ivar_284;
                                         ivar_284 = (uint8_t)33;
                                         uint8_t ivar_285;
                                         ivar_285 = (uint8_t)14;
                                         result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_284, (uint8_t)ivar_285);
} else {
                                        
                                         bool_t ivar_286;
                                         uint8_t ivar_288;
                                         ivar_288 = (uint8_t)33;
                                         ivar_286 = (ivar_1 == ivar_288);
                                         if (ivar_286){                                  
                                          uint8_t ivar_293;
                                          ivar_293 = (uint8_t)34;
                                          uint8_t ivar_294;
                                          ivar_294 = (uint8_t)7;
                                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_293, (uint8_t)ivar_294);
} else {
                                         
                                          bool_t ivar_295;
                                          uint8_t ivar_297;
                                          ivar_297 = (uint8_t)34;
                                          ivar_295 = (ivar_1 == ivar_297);
                                          if (ivar_295){                                   
                                           uint8_t ivar_301;
                                           ivar_301 = (uint8_t)44;
                                           result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_301);
} else {
                                          
                                           bool_t ivar_302;
                                           uint8_t ivar_304;
                                           ivar_304 = (uint8_t)35;
                                           ivar_302 = (ivar_1 == ivar_304);
                                           if (ivar_302){                                    
                                            uint8_t ivar_309;
                                            ivar_309 = (uint8_t)36;
                                            uint8_t ivar_310;
                                            ivar_310 = (uint8_t)38;
                                            result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_309, (uint8_t)ivar_310);
} else {
                                           
                                            bool_t ivar_311;
                                            uint8_t ivar_313;
                                            ivar_313 = (uint8_t)36;
                                            ivar_311 = (ivar_1 == ivar_313);
                                            if (ivar_311){                                     
                                             uint8_t ivar_318;
                                             ivar_318 = (uint8_t)37;
                                             uint8_t ivar_319;
                                             ivar_319 = (uint8_t)7;
                                             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_318, (uint8_t)ivar_319);
} else {
                                            
                                             bool_t ivar_320;
                                             uint8_t ivar_322;
                                             ivar_322 = (uint8_t)37;
                                             ivar_320 = (ivar_1 == ivar_322);
                                             if (ivar_320){                                      
                                              uint8_t ivar_326;
                                              ivar_326 = (uint8_t)91;
                                              result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_326);
} else {
                                             
                                              bool_t ivar_327;
                                              uint8_t ivar_329;
                                              ivar_329 = (uint8_t)38;
                                              ivar_327 = (ivar_1 == ivar_329);
                                              if (ivar_327){                                       
                                               uint8_t ivar_334;
                                               ivar_334 = (uint8_t)39;
                                               uint8_t ivar_335;
                                               ivar_335 = (uint8_t)43;
                                               result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_334, (uint8_t)ivar_335);
} else {
                                              
                                               bool_t ivar_336;
                                               uint8_t ivar_338;
                                               ivar_338 = (uint8_t)39;
                                               ivar_336 = (ivar_1 == ivar_338);
                                               if (ivar_336){                                        
                                                uint8_t ivar_343;
                                                ivar_343 = (uint8_t)40;
                                                uint8_t ivar_344;
                                                ivar_344 = (uint8_t)10;
                                                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_343, (uint8_t)ivar_344);
} else {
                                               
                                                bool_t ivar_345;
                                                uint8_t ivar_347;
                                                ivar_347 = (uint8_t)40;
                                                ivar_345 = (ivar_1 == ivar_347);
                                                if (ivar_345){                                         
                                                 uint8_t ivar_352;
                                                 ivar_352 = (uint8_t)0;
                                                 uint8_t ivar_353;
                                                 ivar_353 = (uint8_t)41;
                                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_352, (uint8_t)ivar_353);
} else {
                                                
                                                 bool_t ivar_354;
                                                 uint8_t ivar_356;
                                                 ivar_356 = (uint8_t)41;
                                                 ivar_354 = (ivar_1 == ivar_356);
                                                 if (ivar_354){                                          
                                                  uint8_t ivar_361;
                                                  ivar_361 = (uint8_t)42;
                                                  uint8_t ivar_362;
                                                  ivar_362 = (uint8_t)10;
                                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_361, (uint8_t)ivar_362);
} else {
                                                 
                                                  bool_t ivar_363;
                                                  uint8_t ivar_365;
                                                  ivar_365 = (uint8_t)42;
                                                  ivar_363 = (ivar_1 == ivar_365);
                                                  if (ivar_363){                                           
                                                   uint8_t ivar_370;
                                                   ivar_370 = (uint8_t)33;
                                                   uint8_t ivar_371;
                                                   ivar_371 = (uint8_t)40;
                                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_370, (uint8_t)ivar_371);
} else {
                                                  
                                                   bool_t ivar_372;
                                                   uint8_t ivar_374;
                                                   ivar_374 = (uint8_t)43;
                                                   ivar_372 = (ivar_1 == ivar_374);
                                                   if (ivar_372){                                            
                                                    uint8_t ivar_379;
                                                    ivar_379 = (uint8_t)44;
                                                    uint8_t ivar_380;
                                                    ivar_380 = (uint8_t)7;
                                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_379, (uint8_t)ivar_380);
} else {
                                                   
                                                    bool_t ivar_381;
                                                    uint8_t ivar_383;
                                                    ivar_383 = (uint8_t)44;
                                                    ivar_381 = (ivar_1 == ivar_383);
                                                    if (ivar_381){                                             
                                                     uint8_t ivar_387;
                                                     ivar_387 = (uint8_t)93;
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_387);
} else {
                                                    
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                                                     if (result != NULL) result->count++;
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};

        
        return result;
}

extern sigmatopdowntest_array_3_t sigmatopdowntest__empty(uint8_t ivar_1){
        sigmatopdowntest_array_3_t  result;
        uint32_t size112854;
        //copying to uint32 from uint8;
        size112854 = (uint32_t)ivar_1;
        size112854 += 0;
        result = new_sigmatopdowntest_array_3(size112854);
        uint8_t ivar_2;
        for (uint32_t index112853 = 0; index112853 < size112854; index112853++){
             ivar_2 = (uint8_t)index112853;
             result->elems[index112853] = (uint8_t)32;
        };

        
        return result;
}

extern sigmatopdowntest_funtype_6_t sigmatopdowntest__cat(uint8_t ivar_1, mpz_ptr_t ivar_2){
        sigmatopdowntest_funtype_6_t  result;
        sigmatopdowntest_closure_7_t cl112880;
        cl112880 = new_sigmatopdowntest_closure_7();
        cl112880->fvar_1 = (uint8_t)ivar_1;
        result = (sigmatopdowntest_funtype_6_t)cl112880;

        
        return result;
}

extern uint8_t sigmatopdowntest__tok0(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              result = (uint8_t)39;
};
};
};
};
};
};

        
        return result;
}

extern uint8_t sigmatopdowntest__tok1(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)92;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)39;
} else {
               
                result = (uint8_t)39;
};
};
};
};
};
};
};
};

        
        return result;
}

extern uint8_t sigmatopdowntest__emptydict(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)32;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)32;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)32;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)32;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)32;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)125;
} else {
               
                result = (uint8_t)32;
};
};
};
};
};
};
};
};

        
        return result;
}

extern uint8_t sigmatopdowntest__obrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t sigmatopdowntest__cbrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)125;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t sigmatopdowntest__colon(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)58;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern sigmatopdowntest_array_3_t sigmatopdowntest__emptydict2(void){
        sigmatopdowntest_array_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatopdowntest_funtype_10_t ivar_7;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)3;
        mpz_ptr_t ivar_13;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_13, ivar_15);
        ivar_7 = (sigmatopdowntest_funtype_10_t)sigmatopdowntest__cat((uint8_t)ivar_12, (mpz_ptr_t)ivar_13);
        sigmatopdowntest_array_3_t ivar_16;
        ivar_16 = new_sigmatopdowntest_array_3(3);
        uint8_t ivar_3;
        for (uint32_t index112881 = 0; index112881 < 3; index112881++){
             ivar_3 = (uint8_t)index112881;
             ivar_16->elems[index112881] = (uint8_t)sigmatopdowntest__obrace((uint8_t)ivar_3);
        };
        sigmatopdowntest_array_3_t ivar_17;
        ivar_17 = new_sigmatopdowntest_array_3(3);
        uint8_t ivar_4;
        for (uint32_t index112882 = 0; index112882 < 3; index112882++){
             ivar_4 = (uint8_t)index112882;
             ivar_17->elems[index112882] = (uint8_t)sigmatopdowntest__cbrace((uint8_t)ivar_4);
        };
        result = (sigmatopdowntest_array_3_t)ivar_7->ftbl->mptr(ivar_7, ivar_16, ivar_17);
        ivar_7->ftbl->rptr(ivar_7);

        defined = true;};
        
        return result;
}

extern sigmatopdowntest_array_3_t sigmatopdowntest__dict1(void){
        sigmatopdowntest_array_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatopdowntest_funtype_10_t ivar_54;
        uint8_t ivar_59;
        ivar_59 = (uint8_t)3;
        uint8_t ivar_62;
        ivar_62 = (uint8_t)19;
        mpz_ptr_t ivar_60;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_60, ivar_62);
        ivar_54 = (sigmatopdowntest_funtype_10_t)sigmatopdowntest__cat((uint8_t)ivar_59, (mpz_ptr_t)ivar_60);
        sigmatopdowntest_array_3_t ivar_63;
        ivar_63 = new_sigmatopdowntest_array_3(3);
        uint8_t ivar_3;
        for (uint32_t index112883 = 0; index112883 < 3; index112883++){
             ivar_3 = (uint8_t)index112883;
             ivar_63->elems[index112883] = (uint8_t)sigmatopdowntest__obrace((uint8_t)ivar_3);
        };
        sigmatopdowntest_array_3_t ivar_64;
        sigmatopdowntest_funtype_10_t ivar_41;
        uint8_t ivar_46;
        ivar_46 = (uint8_t)7;
        uint8_t ivar_49;
        ivar_49 = (uint8_t)12;
        mpz_ptr_t ivar_47;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_47, ivar_49);
        ivar_41 = (sigmatopdowntest_funtype_10_t)sigmatopdowntest__cat((uint8_t)ivar_46, (mpz_ptr_t)ivar_47);
        sigmatopdowntest_array_3_t ivar_50;
        ivar_50 = new_sigmatopdowntest_array_3(7);
        uint8_t ivar_6;
        for (uint32_t index112884 = 0; index112884 < 7; index112884++){
             ivar_6 = (uint8_t)index112884;
             ivar_50->elems[index112884] = (uint8_t)sigmatopdowntest__tok0((uint8_t)ivar_6);
        };
        sigmatopdowntest_array_3_t ivar_51;
        sigmatopdowntest_funtype_10_t ivar_28;
        uint8_t ivar_33;
        ivar_33 = (uint8_t)3;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)9;
        mpz_ptr_t ivar_34;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_34, ivar_36);
        ivar_28 = (sigmatopdowntest_funtype_10_t)sigmatopdowntest__cat((uint8_t)ivar_33, (mpz_ptr_t)ivar_34);
        sigmatopdowntest_array_3_t ivar_37;
        ivar_37 = new_sigmatopdowntest_array_3(3);
        uint8_t ivar_9;
        for (uint32_t index112885 = 0; index112885 < 3; index112885++){
             ivar_9 = (uint8_t)index112885;
             ivar_37->elems[index112885] = (uint8_t)sigmatopdowntest__colon((uint8_t)ivar_9);
        };
        sigmatopdowntest_array_3_t ivar_38;
        sigmatopdowntest_funtype_10_t ivar_15;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        uint8_t ivar_23;
        ivar_23 = (uint8_t)3;
        mpz_ptr_t ivar_21;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_21, ivar_23);
        ivar_15 = (sigmatopdowntest_funtype_10_t)sigmatopdowntest__cat((uint8_t)ivar_20, (mpz_ptr_t)ivar_21);
        sigmatopdowntest_array_3_t ivar_24;
        ivar_24 = (sigmatopdowntest_array_3_t)sigmatopdowntest__emptydict2();
        if (ivar_24 != NULL) ivar_24->count++;
        sigmatopdowntest_array_3_t ivar_25;
        ivar_25 = new_sigmatopdowntest_array_3(3);
        uint8_t ivar_12;
        for (uint32_t index112886 = 0; index112886 < 3; index112886++){
             ivar_12 = (uint8_t)index112886;
             ivar_25->elems[index112886] = (uint8_t)sigmatopdowntest__cbrace((uint8_t)ivar_12);
        };
        ivar_38 = (sigmatopdowntest_array_3_t)ivar_15->ftbl->mptr(ivar_15, ivar_24, ivar_25);
        ivar_15->ftbl->rptr(ivar_15);
        ivar_51 = (sigmatopdowntest_array_3_t)ivar_28->ftbl->mptr(ivar_28, ivar_37, ivar_38);
        ivar_28->ftbl->rptr(ivar_28);
        ivar_64 = (sigmatopdowntest_array_3_t)ivar_41->ftbl->mptr(ivar_41, ivar_50, ivar_51);
        ivar_41->ftbl->rptr(ivar_41);
        result = (sigmatopdowntest_array_3_t)ivar_54->ftbl->mptr(ivar_54, ivar_63, ivar_64);
        ivar_54->ftbl->rptr(ivar_54);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test0(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)2;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        sigmatopdown__lang_spec_t ivar_11;
        sigmatopdowntest_closure_11_t cl112887;
        cl112887 = new_sigmatopdowntest_closure_11();
        ivar_11 = (sigmatopdown__lang_spec_t)cl112887;
        sigmatopdowntest_array_3_t ivar_12;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)2;
        ivar_12 = (sigmatopdowntest_array_3_t)sigmatopdowntest__empty((uint8_t)ivar_8);
        uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_10, (sigmatopdown__lang_spec_t)ivar_11, (sigmatopdown_array_87_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test1(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        sigmatopdowntest_closure_12_t cl112888;
        cl112888 = new_sigmatopdowntest_closure_12();
        ivar_9 = (sigmatopdown__lang_spec_t)cl112888;
        sigmatopdowntest_array_3_t ivar_10;
        uint32_t size112890;
        //copying to uint32 from uint32;
        size112890 = (uint32_t)ivar_1;
        size112890 += 0;
        ivar_10 = new_sigmatopdowntest_array_3(size112890);
        uint8_t ivar_6;
        for (uint32_t index112889 = 0; index112889 < size112890; index112889++){
             ivar_6 = (uint8_t)index112889;
             ivar_10->elems[index112889] = (uint8_t)sigmatopdowntest__tok0((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_87_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test11(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)9;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        sigmatopdowntest_closure_13_t cl112891;
        cl112891 = new_sigmatopdowntest_closure_13();
        ivar_9 = (sigmatopdown__lang_spec_t)cl112891;
        sigmatopdowntest_array_3_t ivar_10;
        uint32_t size112893;
        //copying to uint32 from uint32;
        size112893 = (uint32_t)ivar_1;
        size112893 += 0;
        ivar_10 = new_sigmatopdowntest_array_3(size112893);
        uint8_t ivar_6;
        for (uint32_t index112892 = 0; index112892 < size112893; index112892++){
             ivar_6 = (uint8_t)index112892;
             ivar_10->elems[index112892] = (uint8_t)sigmatopdowntest__tok1((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_87_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test2(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_12;
        ivar_12 = (uint8_t)22;
        uint32_t ivar_7;
        //copying to uint32 from uint8;
        ivar_7 = (uint32_t)ivar_12;
        sigmatopdown__lang_spec_t ivar_8;
        sigmatopdowntest_closure_14_t cl112894;
        cl112894 = new_sigmatopdowntest_closure_14();
        ivar_8 = (sigmatopdown__lang_spec_t)cl112894;
        sigmatopdowntest_array_3_t ivar_9;
        ivar_9 = (sigmatopdowntest_array_3_t)sigmatopdowntest__dict1();
        if (ivar_9 != NULL) ivar_9->count++;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)0;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_7, (sigmatopdown__lang_spec_t)ivar_8, (sigmatopdown_array_87_t)ivar_9, (uint8_t)ivar_10);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdowntest_array_3_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        sigmatopdown__ent_adt_t  result;
        /* pend */ sigmatopdowntest_funtype_15_t ivar_6;
        sigmatopdowntest_closure_16_t cl112910;
        cl112910 = new_sigmatopdowntest_closure_16();
        ivar_6 = (sigmatopdowntest_funtype_15_t)cl112910;
        sigmatopdowntest_record_18_t ivar_83;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)1;
        bool_t ivar_15;
        ivar_15 = (bool_t) false;
        sigmatopdowntest_funtype_17_t ivar_43;
        sigmatopdown__ent_adt_t ivar_23;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)0;
        uint32_t ivar_27;
        //copying to uint32 from uint8;
        ivar_27 = (uint32_t)ivar_30;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_23 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_27, (uint8_t)ivar_28);
        sigmatopdowntest_funtype_17_t ivar_31;
        sigmatopdowntest_closure_19_t cl112911;
        cl112911 = new_sigmatopdowntest_closure_19();
        cl112911->fvar_1 = (sigmatopdowntest_funtype_15_t)ivar_6;
        if (cl112911->fvar_1 != NULL) cl112911->fvar_1->count++;
        release_sigmatopdowntest_funtype_15(ivar_6);
        ivar_31 = (sigmatopdowntest_funtype_17_t)cl112911;
        sigmatopdowntest_funtype_15_t ivar_32;
        ivar_32 = (sigmatopdowntest_funtype_15_t)ivar_31->ftbl->fptr(ivar_31, ivar_4);
        sigmatopdowntest_funtype_17_t ivar_39;
        sigmatopdowntest_funtype_15_t ivar_41;
        ivar_41 = NULL;
        ivar_39 = (sigmatopdowntest_funtype_17_t)update_sigmatopdowntest_funtype_17(ivar_31, ivar_4, ivar_41);
        if (ivar_41 != NULL) ivar_41->count--;
        sigmatopdowntest_funtype_15_t ivar_40;
        sigmatopdowntest_funtype_15_t ivar_35;
        sigmatopdown__ent_adt_t ivar_37;
        ivar_37 = NULL;
        ivar_35 = (sigmatopdowntest_funtype_15_t)update_sigmatopdowntest_funtype_15(ivar_32, ivar_5, ivar_37);
        if (ivar_37 != NULL) ivar_37->count--;
        ivar_40 = (sigmatopdowntest_funtype_15_t)update_sigmatopdowntest_funtype_15(ivar_35, ivar_5, ivar_23);
        if (ivar_23 != NULL) ivar_23->count--;
        ivar_43 = (sigmatopdowntest_funtype_17_t)update_sigmatopdowntest_funtype_17(ivar_39, ivar_4, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        sigmatopdown__ent_adt_t ivar_49;
        uint32_t ivar_47;
        //copying to uint32 from uint8;
        ivar_47 = (uint32_t)ivar_4;
        ivar_49 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_47, (uint8_t)ivar_5);
        sigmatopdowntest_record_18_t tmp112912 = new_sigmatopdowntest_record_18();;
        ivar_83 = (sigmatopdowntest_record_18_t)tmp112912;
        tmp112912->depth = (uint8_t)ivar_14;
        tmp112912->lflag = (bool_t)ivar_15;
        tmp112912->scaf = (sigmatopdowntest_funtype_17_t)ivar_43;
        tmp112912->stack = (sigmatopdown__ent_adt_t)ivar_49;
        /* St */ sigmatopdowntest_record_21_t ivar_10;
        //copying to sigmatopdowntest_record_21 from sigmatopdowntest_record_18;
        {
         ivar_10 = new_sigmatopdowntest_record_21();
         uint32_t tmp112913;
         //copying to uint32 from uint8;
         tmp112913 = (uint32_t)ivar_1;
         tmp112913 += 1;
         ivar_10->scaf = new_sigmatopdowntest_array_20(tmp112913);
         for (uint32_t index_84 = 0; index_84 < tmp112913; index_84++){
                 ivar_10->scaf->elems[index_84] = (sigmatopdowntest_funtype_15_t)ivar_83->scaf->ftbl->fptr(ivar_83->scaf, index_84);
                 if (ivar_10->scaf->elems[index_84] != NULL) ivar_10->scaf->elems[index_84]->count++;
         };
         ivar_10->depth = (uint64_t)ivar_83->depth;
         ivar_10->stack = (sigmatopdown__ent_adt_t)ivar_83->stack;
         if (ivar_10->stack != NULL) ivar_10->stack->count++;
         ivar_10->lflag = (bool_t)ivar_83->lflag;
        };
        release_sigmatopdowntest_record_18(ivar_83);
        sigmatopdowntest_funtype_15_t ivar_52;
        sigmatopdowntest_array_20_t ivar_56;
        sigmatopdowntest_record_21_t ivar_79;
        sigmatopdowntest_funtype_22_t ivar_63;
        uint32_t ivar_73;
        //copying to uint32 from uint8;
        ivar_73 = (uint32_t)ivar_1;
        uint32_t ivar_76;
        //copying to uint32 from uint8;
        ivar_76 = (uint32_t)ivar_4;
        ivar_63 = (sigmatopdowntest_funtype_22_t)sigmatopdown__parse((uint32_t)ivar_73, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_87_t)ivar_3, (uint32_t)ivar_76, (uint8_t)ivar_5);
        ivar_79 = (sigmatopdowntest_record_21_t)ivar_63->ftbl->fptr(ivar_63, ivar_10);
        ivar_63->ftbl->rptr(ivar_63);
        ivar_56 = (sigmatopdowntest_array_20_t)ivar_79->scaf;
        ivar_56->count++;
        release_sigmatopdowntest_record_21(ivar_79);
        ivar_52 = (sigmatopdowntest_funtype_15_t)ivar_56->elems[ivar_4];
        ivar_52->count++;
        release_sigmatopdowntest_array_20(ivar_56);
        result = (sigmatopdown__ent_adt_t)ivar_52->ftbl->fptr(ivar_52, ivar_5);
        ivar_52->ftbl->rptr(ivar_52);

        
        return result;
}