// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$LogSystemInfo
// address: 0x7330714
// body: available
// range: 0x7330714-0x73310d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73310bc to 0x732fde0 IngameDebugConsole.DebugLogManager$$AdjustLatestPendingLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73310d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__LogSystemInfo(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_0952060f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f5858);
    FUN_03f5c2a4(&DAT_091fee60);
    FUN_03f5c2a4(&DAT_092081b8);
    FUN_03f5c2a4(&DAT_091f9e00);
    FUN_03f5c2a4(&DAT_0921ffa8);
    FUN_03f5c2a4(&DAT_0920a780);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_0920cf90);
    FUN_03f5c2a4(&DAT_091f9e08);
    FUN_03f5c2a4(&DAT_09207898);
    FUN_03f5c2a4(&DAT_091f6808);
    FUN_03f5c2a4(&DAT_09203158);
    FUN_03f5c2a4(&DAT_092008b8);
    FUN_03f5c2a4(&DAT_09223880);
    FUN_03f5c2a4(&DAT_09203a48);
    FUN_03f5c2a4(&DAT_0920e908);
    FUN_03f5c2a4(&DAT_0920c048);
    FUN_03f5c2a4(&DAT_0920dc00);
    FUN_03f5c2a4(&DAT_091f9da0);
    FUN_03f5c2a4(&DAT_092072e0);
    FUN_03f5c2a4(&DAT_09223878);
    FUN_03f5c2a4(&DAT_0921ffa0);
    FUN_03f5c2a4(&DAT_09207108);
    FUN_03f5c2a4(&DAT_09207860);
    FUN_03f5c2a4(&DAT_092072e8);
    FUN_03f5c2a4(&DAT_091f62d8);
    FUN_03f5c2a4(&DAT_09209398);
    FUN_03f5c2a4(&DAT_091ff998);
    FUN_03f5c2a4(&DAT_091fb2d8);
    FUN_03f5c2a4(&DAT_09204e88);
    FUN_03f5c2a4(&DAT_091fff28);
    DAT_0952060f = 1;
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,0x400,0);
  if (plVar3 != (long *)0x0) {
    lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_0920c048,0);
    uVar5 = UnityEngine_SystemInfo__GetDeviceModel(0);
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183668);
    }
    IngameDebugConsole_DebugLogConsole__AppendSysInfoIfPresent(lVar4,uVar5,0);
    uVar5 = UnityEngine_SystemInfo__GetProcessorType(0);
    IngameDebugConsole_DebugLogConsole__AppendSysInfoIfPresent(lVar4,uVar5,0);
    uVar2 = UnityEngine_SystemInfo__get_systemMemorySize(0);
    IngameDebugConsole_DebugLogConsole__AppendSysInfoIfPresent(lVar4,uVar2,DAT_092072e8);
    uVar2 = UnityEngine_SystemInfo__get_processorCount(0);
    if ((lVar4 != 0) && (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar2,0), lVar4 != 0)) {
      System_Text_StringBuilder__Append(lVar4,DAT_091f62d8,0);
      lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09209398,0);
      uVar5 = UnityEngine_SystemInfo__GetOperatingSystem(0);
      if ((lVar4 != 0) && (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
        System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
        lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09203158,0);
        uVar5 = UnityEngine_SystemInfo__GetGraphicsDeviceName(0);
        if ((lVar4 != 0) && (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0))
        {
          lVar4 = System_Text_StringBuilder__Append(lVar4,DAT_091f5a98,0);
          uVar2 = UnityEngine_SystemInfo__get_graphicsMemorySize(0);
          if ((lVar4 != 0) && (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar2,0), lVar4 != 0)
             ) {
            lVar4 = System_Text_StringBuilder__Append(lVar4,DAT_092072e0,0);
            uVar5 = UnityEngine_SystemInfo__GetGraphicsDeviceVersion(0);
            if (lVar4 != 0) {
              lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0);
              uVar6 = UnityEngine_SystemInfo__get_graphicsMultiThreaded(0);
              if (lVar4 != 0) {
                puVar1 = &DAT_091f6808;
                if ((uVar6 & 1) == 0) {
                  puVar1 = &DAT_091f5858;
                }
                System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_091fff28,0);
                if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091814b0);
                }
                uVar5 = UnityEngine_Application__get_dataPath(0);
                if ((lVar4 != 0) &&
                   (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
                  System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                  lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_0920a780,0);
                  uVar5 = UnityEngine_Application__get_persistentDataPath(0);
                  if ((lVar4 != 0) &&
                     (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
                    System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                    lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_0920dc00,0);
                    uVar5 = UnityEngine_Application__get_streamingAssetsPath(0);
                    if ((lVar4 != 0) &&
                       (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
                      System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                      lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_0920e908,0);
                      uVar5 = UnityEngine_Application__get_temporaryCachePath(0);
                      if ((lVar4 != 0) &&
                         (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
                        System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                        lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_092008b8,0);
                        uVar5 = UnityEngine_SystemInfo__GetDeviceUniqueIdentifier(0);
                        if ((lVar4 != 0) &&
                           (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 != 0)) {
                          System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                          lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09207898,0);
                          uVar2 = UnityEngine_SystemInfo__get_maxTextureSize(0);
                          if ((lVar4 != 0) &&
                             (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar2,0), lVar4 != 0))
                          {
                            System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                            lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09207860,0);
                            uVar2 = UnityEngine_SystemInfo__get_maxCubemapSize(0);
                            if ((lVar4 != 0) &&
                               (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar2,0), lVar4 != 0
                               )) {
                              System_Text_StringBuilder__Append(lVar4,DAT_091f5858,0);
                              lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_091fb2d8,0);
                              uVar6 = UnityEngine_SystemInfo__get_supportsAccelerometer(0);
                              if (lVar4 != 0) {
                                puVar1 = &DAT_09223880;
                                if ((uVar6 & 1) == 0) {
                                  puVar1 = &DAT_0921ffa8;
                                }
                                System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09203a48,0);
                                uVar6 = UnityEngine_SystemInfo__get_supportsGyroscope(0);
                                if (lVar4 != 0) {
                                  puVar1 = &DAT_09223880;
                                  if ((uVar6 & 1) == 0) {
                                    puVar1 = &DAT_0921ffa8;
                                  }
                                  System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                  lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_09207108,0);
                                  uVar6 = UnityEngine_SystemInfo__get_supportsLocationService(0);
                                  if (lVar4 != 0) {
                                    puVar1 = &DAT_09223880;
                                    if ((uVar6 & 1) == 0) {
                                      puVar1 = &DAT_0921ffa8;
                                    }
                                    System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                    lVar4 = System_Text_StringBuilder__Append(plVar3,DAT_091fee60,0)
                                    ;
                                    uVar6 = UnityEngine_SystemInfo__get_supportsComputeShaders(0);
                                    if (lVar4 != 0) {
                                      puVar1 = &DAT_09223880;
                                      if ((uVar6 & 1) == 0) {
                                        puVar1 = &DAT_0921ffa8;
                                      }
                                      System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                      lVar4 = System_Text_StringBuilder__Append
                                                        (plVar3,DAT_0920cf90,0);
                                      uVar6 = UnityEngine_SystemInfo__get_supportsShadows(0);
                                      if (lVar4 != 0) {
                                        puVar1 = &DAT_09223880;
                                        if ((uVar6 & 1) == 0) {
                                          puVar1 = &DAT_0921ffa8;
                                        }
                                        System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                        lVar4 = System_Text_StringBuilder__Append
                                                          (plVar3,DAT_09204e88,0);
                                        uVar6 = UnityEngine_SystemInfo__get_supportsInstancing(0);
                                        if (lVar4 != 0) {
                                          puVar1 = &DAT_09223880;
                                          if ((uVar6 & 1) == 0) {
                                            puVar1 = &DAT_0921ffa8;
                                          }
                                          System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                          lVar4 = System_Text_StringBuilder__Append
                                                            (plVar3,DAT_092081b8,0);
                                          uVar6 = UnityEngine_SystemInfo__get_supportsMotionVectors
                                                            (0);
                                          if (lVar4 != 0) {
                                            puVar1 = &DAT_09223880;
                                            if ((uVar6 & 1) == 0) {
                                              puVar1 = &DAT_0921ffa8;
                                            }
                                            System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                            lVar4 = System_Text_StringBuilder__Append
                                                              (plVar3,DAT_091f9e08,0);
                                            uVar6 = UnityEngine_SystemInfo__get_supports3DTextures
                                                              (0);
                                            if (lVar4 != 0) {
                                              puVar1 = &DAT_09223880;
                                              if ((uVar6 & 1) == 0) {
                                                puVar1 = &DAT_0921ffa8;
                                              }
                                              System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                              lVar4 = System_Text_StringBuilder__Append
                                                                (plVar3,DAT_091f9e00,0);
                                              uVar6 = 
                                                  UnityEngine_SystemInfo__get_supports3DRenderTextures
                                                            (0);
                                              if (lVar4 != 0) {
                                                puVar1 = &DAT_09223880;
                                                if ((uVar6 & 1) == 0) {
                                                  puVar1 = &DAT_0921ffa8;
                                                }
                                                System_Text_StringBuilder__Append(lVar4,*puVar1,0);
                                                lVar4 = System_Text_StringBuilder__Append
                                                                  (plVar3,DAT_091f9da0,0);
                                                uVar6 = 
                                                  UnityEngine_SystemInfo__get_supports2DArrayTextures
                                                            (0);
                                                if (lVar4 != 0) {
                                                  puVar1 = &DAT_09223880;
                                                  if ((uVar6 & 1) == 0) {
                                                    puVar1 = &DAT_0921ffa8;
                                                  }
                                                  System_Text_StringBuilder__Append(lVar4,*puVar1,0)
                                                  ;
                                                  lVar4 = System_Text_StringBuilder__Append
                                                                    (plVar3,DAT_091ff998,0);
                                                  uVar6 = 
                                                  UnityEngine_SystemInfo__get_supportsCubemapArrayTextures
                                                            (0);
                                                  if (lVar4 != 0) {
                                                    puVar1 = &DAT_09223878;
                                                    if ((uVar6 & 1) == 0) {
                                                      puVar1 = &DAT_0921ffa0;
                                                    }
                                                    System_Text_StringBuilder__Append
                                                              (lVar4,*puVar1,0);
                                                    uVar5 = (**(code **)(*plVar3 + 0x168))
                                                                      (plVar3,*(undefined8 *)
                                                                               (*plVar3 + 0x170));
                                                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                                                      FUN_03f5c424(DAT_091835d0);
                                                    }
                                                    UnityEngine_Debug__Log(uVar5,0);
                                                    if (DAT_0952068d == '\0') {
                                                      FUN_03f5c2a4(&DAT_09183690);
                                                      DAT_0952068d = '\x01';
                                                    }
                                                    uVar5 = **(undefined8 **)(DAT_09183690 + 0xb8);
                                                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    uVar6 = UnityEngine_Object__op_Implicit(uVar5,0)
                                                    ;
                                                    if ((uVar6 & 1) == 0) {
                                                      return;
                                                    }
                                                    if (DAT_0952068d == '\0') {
                                                      FUN_03f5c2a4(&DAT_09183690);
                                                      DAT_0952068d = '\x01';
                                                    }
                                                    if (**(long **)(DAT_09183690 + 0xb8) != 0) {
                                                                                                            
                                                  IngameDebugConsole_DebugLogManager__AdjustLatestPendingLog
                                                            (**(long **)(DAT_09183690 + 0xb8),1,1);
                                                  return;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

