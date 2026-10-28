// rea decompile_all
// name: CakeOrder.RemoteConfigDefaultSetterCakeOrder$$SetupDefaultValues
// address: 0x4274ba0
// body: available
// range: 0x4274ba0-0x42750e7 inclusive
// range: 0x42750ec-0x42750ef inclusive
// range: 0x42750f4-0x42750f7 inclusive
// range: 0x42750fc-0x42750ff inclusive
// range: 0x4275104-0x4275107 inclusive
// range: 0x427510c-0x427510f inclusive
// range: 0x4275164-0x4275607 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42750e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42750ec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42750f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42750fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4275104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427510c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42755f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42755fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4275604 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04275048) */
/* WARNING: Removing unreachable block (ram,0x04275600) */

void CakeOrder_RemoteConfigDefaultSetterCakeOrder__SetupDefaultValues
               (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint local_64;
  
  if ((DAT_09517053 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_091d7370);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_09172a18);
    FUN_03f5c2a4(&DAT_09189ea0);
    FUN_03f5c2a4(&DAT_09221b58);
    FUN_03f5c2a4(&DAT_0921a760);
    FUN_03f5c2a4(&DAT_0921d0f0);
    FUN_03f5c2a4(&DAT_09221558);
    FUN_03f5c2a4(&DAT_0921f178);
    FUN_03f5c2a4(&DAT_0921f420);
    FUN_03f5c2a4(&DAT_092182d0);
    FUN_03f5c2a4(&DAT_09220e88);
    FUN_03f5c2a4(&DAT_09225f38);
    FUN_03f5c2a4(&DAT_0921dea8);
    FUN_03f5c2a4(&DAT_0921b3c0);
    FUN_03f5c2a4(&DAT_09220e78);
    FUN_03f5c2a4(&DAT_09220398);
    FUN_03f5c2a4(&DAT_09221ed0);
    FUN_03f5c2a4(&DAT_09221828);
    FUN_03f5c2a4(&DAT_09223090);
    FUN_03f5c2a4(&DAT_09222330);
    FUN_03f5c2a4(&DAT_09222db8);
    FUN_03f5c2a4(&DAT_09218308);
    FUN_03f5c2a4(&DAT_092214e0);
    FUN_03f5c2a4(&DAT_0921d4b8);
    FUN_03f5c2a4(&DAT_0921cab0);
    FUN_03f5c2a4(&DAT_09220e80);
    FUN_03f5c2a4(&DAT_092214d0);
    FUN_03f5c2a4(&DAT_092214d8);
    FUN_03f5c2a4(&DAT_09223190);
    FUN_03f5c2a4(&DAT_09221190);
    DAT_09517053 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x20);
  local_64 = 0;
  if (lVar14 != 0) {
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar1) {
LAB_04274dec:
      uVar4 = DAT_09172a18;
      if (uVar1 <= local_64) {
LAB_042755fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar13 = *(long *)(lVar14 + (long)(int)local_64 * 8 + 0x20);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      lVar5 = System_Enum__GetValues(uVar4,0);
      if (lVar5 != 0) {
        plVar6 = (long *)System_Array__GetEnumerator(lVar5,0);
        do {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04274ebc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_04274ebc:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) goto LAB_04274fac;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_04274f24;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_04274f24:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(*plVar8 + 0x40) != *(long *)(DAT_09189ea0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          puVar9 = (undefined4 *)thunk_FUN_03f99594();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *puVar9;
          uVar4 = *(undefined8 *)(lVar13 + 0x10);
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189e78);
          }
          uVar4 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig
                            (uVar4,uVar2);
          lVar5 = *param_4;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = CakeOrder_RemoteConfigDefaultSetterCakeOrder_MapConfig__GetConfigByKey
                             (lVar13,uVar2);
          FUN_06fd8454(lVar5,uVar4,uVar10,DAT_0919feb8);
        } while( true );
      }
      goto LAB_042755f8;
    }
LAB_04275164:
    if (*param_4 != 0) {
      FUN_06fd8454(*param_4,DAT_0921f420,*(undefined8 *)(param_1 + 0x28),DAT_0919feb8);
      if (*param_4 != 0) {
        FUN_06fd8454(*param_4,DAT_09221190,*(undefined8 *)(param_1 + 0x30),DAT_0919feb8);
        lVar14 = *param_4;
        local_64 = 10;
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = System_Int32__ToString(&local_64,uVar4,0);
        if (lVar14 != 0) {
          FUN_06fd8454(lVar14,DAT_092214d0,uVar4,DAT_0919feb8);
          lVar14 = *param_4;
          local_64 = 0x19;
          uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar4 = System_Int32__ToString(&local_64,uVar4,0);
          if (lVar14 != 0) {
            FUN_06fd8454(lVar14,DAT_092214d8,uVar4,DAT_0919feb8);
            lVar14 = *param_4;
            local_64 = 10;
            uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar4 = System_Int32__ToString(&local_64,uVar4,0);
            if (lVar14 != 0) {
              FUN_06fd8454(lVar14,DAT_092214e0,uVar4,DAT_0919feb8);
              if (*param_4 != 0) {
                FUN_06fd8454(*param_4,DAT_09221b58,*(undefined8 *)(param_1 + 0x38),DAT_0919feb8);
                if (*param_4 != 0) {
                  FUN_06fd8454(*param_4,DAT_09223090,*(undefined8 *)(param_1 + 0x40),DAT_0919feb8);
                  if (*param_4 != 0) {
                    FUN_06fd8454(*param_4,DAT_0921b3c0,*(undefined8 *)(param_1 + 0x48),DAT_0919feb8)
                    ;
                    if (*param_4 != 0) {
                      FUN_06fd8454(*param_4,DAT_0921f178,*(undefined8 *)(param_1 + 0x90),
                                   DAT_0919feb8);
                      if (*param_4 != 0) {
                        FUN_06fd8454(*param_4,DAT_092182d0,*(undefined8 *)(param_1 + 0x50),
                                     DAT_0919feb8);
                        if (*param_4 != 0) {
                          FUN_06fd8454(*param_4,DAT_09221ed0,*(undefined8 *)(param_1 + 0x58),
                                       DAT_0919feb8);
                          if (*param_4 != 0) {
                            FUN_06fd8454(*param_4,DAT_09218308,*(undefined8 *)(param_1 + 0x60),
                                         DAT_0919feb8);
                            if (*param_4 != 0) {
                              FUN_06fd8454(*param_4,DAT_0921cab0,*(undefined8 *)(param_1 + 0x68),
                                           DAT_0919feb8);
                              if (*param_4 != 0) {
                                FUN_06fd8454(*param_4,DAT_09223190,*(undefined8 *)(param_1 + 0x78),
                                             DAT_0919feb8);
                                if (*param_4 != 0) {
                                  FUN_06fd8454(*param_4,DAT_0921d4b8,*(undefined8 *)(param_1 + 0x70)
                                               ,DAT_0919feb8);
                                  if (*param_4 != 0) {
                                    FUN_06fd8454(*param_4,DAT_09222330,
                                                 *(undefined8 *)(param_1 + 0x80),DAT_0919feb8);
                                    if (*param_4 != 0) {
                                      FUN_06fd8454(*param_4,DAT_0921dea8,
                                                   *(undefined8 *)(param_1 + 0x88),DAT_0919feb8);
                                      if (*param_4 != 0) {
                                        FUN_06fd8454(*param_4,DAT_09221558,
                                                     *(undefined8 *)(param_1 + 0x98),DAT_0919feb8);
                                        if (*param_4 != 0) {
                                          FUN_06fd8454(*param_4,DAT_0921d0f0,
                                                       *(undefined8 *)(param_1 + 0xa8),DAT_0919feb8)
                                          ;
                                          if (*param_4 != 0) {
                                            FUN_06fd8454(*param_4,DAT_09221828,
                                                         *(undefined8 *)(param_1 + 0xb0),
                                                         DAT_0919feb8);
                                            if (*param_4 != 0) {
                                              FUN_06fd8454(*param_4,DAT_09220e80,DAT_09220398,
                                                           DAT_0919feb8);
                                              if (*param_4 != 0) {
                                                FUN_06fd8454(*param_4,DAT_09220e78,
                                                             **(undefined8 **)(DAT_09535468 + 0xb8),
                                                             DAT_0919feb8);
                                                if (*param_4 != 0) {
                                                  FUN_06fd8454(*param_4,DAT_09220e88,DAT_0921a760,
                                                               DAT_0919feb8);
                                                  if (*param_4 != 0) {
                                                    FUN_06fd8454(*param_4,DAT_09222db8,DAT_09225f38,
                                                                 DAT_0919feb8);
                                                    if ((*(char *)(param_1 + 0xa0) == '\0') &&
                                                       (uVar11 = FUN_05a8eda4(DAT_091b4ab0),
                                                       lVar14 = DAT_09189e78, (uVar11 & 1) != 0)) {
                                                      iVar3 = *(int *)(DAT_09189e78 + 0xe4);
                                                      *(undefined1 *)(param_1 + 0xa0) = 1;
                                                      if (iVar3 == 0) {
                                                        FUN_03f5c424();
                                                        lVar14 = DAT_09189e78;
                                                      }
                                                      plVar6 = (long *)(*(long *)(lVar14 + 0xb8) +
                                                                       0x18);
                                                      *plVar6 = param_1;
                                                      thunk_FUN_03f5d7b8(plVar6,param_1);
                                                      lVar14 = *(long *)(DAT_091b4aa8 + 0x20);
                                                      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                                                        lVar14 = FUN_03f95a6c();
                                                      }
                                                      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) +
                                                                        0x10);
                                                      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                                                        lVar14 = FUN_03f95a6c();
                                                      }
                                                      lVar14 = **(long **)(lVar14 + 0xb8);
                                                      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
                                                      System_Action___ctor
                                                                (uVar4,param_1,DAT_091d7370,0);
                                                      if (lVar14 == 0) goto LAB_042755f8;
                                                                                                            
                                                  IapAdsSystem_RemoteConfigManager__add_onRemoteValueAvailable
                                                            (lVar14,uVar4,0);
                                                  }
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
LAB_042755f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04274fac:
  plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04275030;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04275030:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (lVar13 == 0) goto LAB_042755f8;
  lVar5 = *(long *)(lVar13 + 0x48);
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
    uVar11 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar13 + 0x10);
      if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                        (uVar4,uVar11 & 0xffffffff);
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_042755fc;
      if (*param_4 == 0) goto LAB_042755f8;
      FUN_06fd8454(*param_4,uVar4,*(undefined8 *)(lVar5 + 0x20 + uVar11 * 8),DAT_0919feb8);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(lVar5 + 0x18));
  }
  uVar1 = *(uint *)(lVar14 + 0x18);
  local_64 = local_64 + 1;
  if ((int)uVar1 <= (int)local_64) goto LAB_04275164;
  goto LAB_04274dec;
}

