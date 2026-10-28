// rea decompile_all
// name: IapAdsSystem.AdsManager$$Awake
// address: 0x72feb04
// body: available
// range: 0x72feb04-0x72ff3df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72ff3d8 to 0x7316dc8 IapAdsSystem.InAppManager$$add_onPurchaseSuccess (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72ff3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__Awake(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_0952045c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091bf808);
    FUN_03f5c2a4(&DAT_091bf818);
    FUN_03f5c2a4(&DAT_091bf820);
    FUN_03f5c2a4(&DAT_091bf828);
    FUN_03f5c2a4(&DAT_091839a8);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_09185c40);
    FUN_03f5c2a4(&DAT_091b48a8);
    DAT_0952045c = 1;
  }
  FUN_05a8ee38(param_1,DAT_091b48a8);
  plVar1 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091852f0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_072fec28;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,3);
LAB_072fec28:
    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf828);
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185c40) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_072fecac;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,0);
LAB_072fecac:
      (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
      plVar1 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
      if (plVar1 != (long *)0x0) {
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091852f0) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_072fed1c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,3);
LAB_072fed1c:
        plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
        uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
        IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf828);
        if (plVar1 != (long *)0x0) {
          lVar4 = *plVar1;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_072fed9c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,2);
LAB_072fed9c:
          (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
          plVar1 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
          if (plVar1 != (long *)0x0) {
            lVar4 = *plVar1;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                  goto LAB_072fee14;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,4);
LAB_072fee14:
            plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
            uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
            IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf820);
            if (plVar1 != (long *)0x0) {
              lVar4 = *plVar1;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_072fee90;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,0);
LAB_072fee90:
              (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
              plVar1 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
              if (plVar1 != (long *)0x0) {
                lVar4 = *plVar1;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                      goto LAB_072fef00;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,4);
LAB_072fef00:
                plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
                uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
                IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf820);
                if (plVar1 != (long *)0x0) {
                  lVar4 = *plVar1;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                        goto LAB_072fef80;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,2);
LAB_072fef80:
                  (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
                  plVar1 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
                  if (plVar1 != (long *)0x0) {
                    lVar4 = *plVar1;
                    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar5 != 0) {
                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                          goto LAB_072feff0;
                        }
                        uVar5 = uVar5 - 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,3);
LAB_072feff0:
                    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
                    uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
                    IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf828);
                    if (plVar1 != (long *)0x0) {
                      lVar4 = *plVar1;
                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar5 != 0) {
                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                            goto LAB_072ff06c;
                          }
                          uVar5 = uVar5 - 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar5 != 0);
                      }
                      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,0);
LAB_072ff06c:
                      (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
                      plVar1 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
                      if (plVar1 != (long *)0x0) {
                        lVar4 = *plVar1;
                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar5 != 0) {
                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                              goto LAB_072ff0dc;
                            }
                            uVar5 = uVar5 - 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar5 != 0);
                        }
                        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,3);
LAB_072ff0dc:
                        plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
                        uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
                        IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf828);
                        if (plVar1 != (long *)0x0) {
                          lVar4 = *plVar1;
                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar5 != 0) {
                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                                goto LAB_072ff15c;
                              }
                              uVar5 = uVar5 - 1;
                              piVar6 = piVar6 + 4;
                            } while (uVar5 != 0);
                          }
                          puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,2);
LAB_072ff15c:
                          (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
                          plVar1 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
                          if (plVar1 != (long *)0x0) {
                            lVar4 = *plVar1;
                            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar5 != 0) {
                              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                                  puVar2 = (undefined8 *)
                                           (lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                                  goto LAB_072ff1cc;
                                }
                                uVar5 = uVar5 - 1;
                                piVar6 = piVar6 + 4;
                              } while (uVar5 != 0);
                            }
                            puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,4);
LAB_072ff1cc:
                            plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
                            uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
                            IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf820);
                            if (plVar1 != (long *)0x0) {
                              lVar4 = *plVar1;
                              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                              if (uVar5 != 0) {
                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                                    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                                    goto LAB_072ff248;
                                  }
                                  uVar5 = uVar5 - 1;
                                  piVar6 = piVar6 + 4;
                                } while (uVar5 != 0);
                              }
                              puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,0);
LAB_072ff248:
                              (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
                              plVar1 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
                              if (plVar1 != (long *)0x0) {
                                lVar4 = *plVar1;
                                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                if (uVar5 != 0) {
                                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar6 + -2) == DAT_091852f0) {
                                      puVar2 = (undefined8 *)
                                               (lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                                      goto LAB_072ff2b8;
                                    }
                                    uVar5 = uVar5 - 1;
                                    piVar6 = piVar6 + 4;
                                  } while (uVar5 != 0);
                                }
                                puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091852f0,4);
LAB_072ff2b8:
                                plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
                                uVar3 = thunk_FUN_03f9944c(DAT_091839a8);
                                IapAdsSystem_DelegateAdsEvent___ctor(uVar3,param_1,DAT_091bf820);
                                if (plVar1 != (long *)0x0) {
                                  lVar4 = *plVar1;
                                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                  if (uVar5 != 0) {
                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar6 + -2) == DAT_09185c40) {
                                        puVar2 = (undefined8 *)
                                                 (lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                                        goto LAB_072ff348;
                                      }
                                      uVar5 = uVar5 - 1;
                                      piVar6 = piVar6 + 4;
                                    } while (uVar5 != 0);
                                  }
                                  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185c40,2);
LAB_072ff348:
                                  (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
                                  lVar4 = *(long *)(param_1 + 0x38);
                                  uVar3 = thunk_FUN_03f9944c(DAT_09174980);
                                  FUN_070a8c30(uVar3,param_1,DAT_091bf808,0);
                                  if (lVar4 != 0) {
                                    IapAdsSystem_InAppManager__add_onPurchaseBegin(lVar4,uVar3,0);
                                    lVar4 = *(long *)(param_1 + 0x38);
                                    uVar3 = thunk_FUN_03f9944c(DAT_09174980);
                                    FUN_070a8c30(uVar3,param_1,DAT_091bf818,0);
                                    if (lVar4 != 0) {
                                      IapAdsSystem_InAppManager__add_onPurchaseSuccess
                                                (lVar4,uVar3,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

