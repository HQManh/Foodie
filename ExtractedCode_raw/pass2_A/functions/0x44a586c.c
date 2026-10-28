// rea decompile_all
// name: CookOrder.Cooking.Config.CookingRepresentationProfile$$EnsureDefaults
// address: 0x44a586c
// body: available
// range: 0x44a586c-0x44a632f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a6328 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44a632c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Config_CookingRepresentationProfile__EnsureDefaults(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  if ((DAT_09518206 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918f6b8);
    FUN_03f5c2a4(&DAT_0918f6c0);
    FUN_03f5c2a4(&DAT_0918f6c8);
    FUN_03f5c2a4(&DAT_091c68b8);
    FUN_03f5c2a4(&DAT_091c68c0);
    FUN_03f5c2a4(&DAT_091c68d0);
    FUN_03f5c2a4(&DAT_091c68c8);
    FUN_03f5c2a4(&DAT_091c68d8);
    FUN_03f5c2a4(&DAT_091c68e0);
    FUN_03f5c2a4(&DAT_0918f6d0);
    FUN_03f5c2a4(&DAT_0918f6d8);
    FUN_03f5c2a4(&DAT_0918f6e0);
    FUN_03f5c2a4(&DAT_09177a90);
    FUN_03f5c2a4(&DAT_0918f6e8);
    FUN_03f5c2a4(&DAT_0918f6f0);
    FUN_03f5c2a4(&DAT_0918f6f8);
    FUN_03f5c2a4(&DAT_091e7f98);
    FUN_03f5c2a4(&DAT_0918f6b0);
    DAT_09518206 = 1;
  }
  plVar14 = (long *)(param_1 + 0x18);
  if (*plVar14 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6e0);
    CookOrder_Cooking_Config_CookingRepresentationProfile_FlightSettings___ctor();
    *plVar14 = lVar1;
    thunk_FUN_03f5d7b8(plVar14,lVar1);
  }
  plVar13 = (long *)(param_1 + 0x20);
  if (*plVar13 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6e8);
    CookOrder_Cooking_Config_CookingRepresentationProfile_QueueSettings___ctor();
    *plVar13 = lVar1;
    thunk_FUN_03f5d7b8(plVar13,lVar1);
  }
  plVar12 = (long *)(param_1 + 0x28);
  if (*plVar12 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6b8);
    CookOrder_Cooking_Config_CookingRepresentationProfile_AutoCompleteSettings___ctor();
    *plVar12 = lVar1;
    thunk_FUN_03f5d7b8(plVar12,lVar1);
  }
  plVar11 = (long *)(param_1 + 0x30);
  if (*plVar11 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6f0);
    CookOrder_Cooking_Config_CookingRepresentationProfile_SaveMeSettings___ctor();
    *plVar11 = lVar1;
    thunk_FUN_03f5d7b8(plVar11,lVar1);
  }
  plVar10 = (long *)(param_1 + 0x38);
  if (*plVar10 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6c8);
    CookOrder_Cooking_Config_CookingRepresentationProfile_CleanTableSettings___ctor();
    *plVar10 = lVar1;
    thunk_FUN_03f5d7b8(plVar10,lVar1);
  }
  plVar8 = (long *)(param_1 + 0x40);
  if (*plVar8 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6d0);
    CookOrder_Cooking_Config_CookingRepresentationProfile_CustomerSettings___ctor();
    *plVar8 = lVar1;
    thunk_FUN_03f5d7b8(plVar8,lVar1);
  }
  plVar5 = (long *)(param_1 + 0x48);
  if (*plVar5 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6f8);
    CookOrder_Cooking_Config_CookingRepresentationProfile_ServingSettings___ctor();
    *plVar5 = lVar1;
    thunk_FUN_03f5d7b8(plVar5,lVar1);
  }
  plVar9 = (long *)(param_1 + 0x50);
  if (*plVar9 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6c0);
    CookOrder_Cooking_Config_CookingRepresentationProfile_CameraSettings___ctor();
    *plVar9 = lVar1;
    thunk_FUN_03f5d7b8(plVar9,lVar1);
  }
  plVar6 = (long *)(param_1 + 0x58);
  if (*plVar6 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0918f6d8);
    CookOrder_Cooking_Config_CookingRepresentationProfile_FeedbackSettings___ctor();
    *plVar6 = lVar1;
    thunk_FUN_03f5d7b8(plVar6,lVar1);
  }
  if (*plVar14 != 0) {
    puVar15 = (undefined8 *)(*plVar14 + 0x28);
    uVar7 = *puVar15;
    uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
    FUN_053017a8(uVar2,0,DAT_091c68e0,0);
    uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
    *puVar15 = uVar2;
    thunk_FUN_03f5d7b8(puVar15,uVar2);
    if (*plVar14 != 0) {
      puVar15 = (undefined8 *)(*plVar14 + 0x30);
      uVar7 = *puVar15;
      uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
      FUN_053017a8(uVar2,0,DAT_091c68e0,0);
      uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
      *puVar15 = uVar2;
      thunk_FUN_03f5d7b8(puVar15,uVar2);
      if (*plVar14 != 0) {
        puVar15 = (undefined8 *)(*plVar14 + 0x38);
        uVar2 = *puVar15;
        if (*(int *)(DAT_0918f6b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_0918f6b0 + 0xb8);
        lVar1 = puVar4[1];
        if (lVar1 == 0) {
          if (*(int *)(DAT_0918f6b0 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_0918f6b0 + 0xb8);
          }
          uVar7 = *puVar4;
          lVar1 = thunk_FUN_03f9944c(DAT_09177a90);
          FUN_053017a8(lVar1,uVar7,DAT_091e7f98,0);
          plVar3 = (long *)(*(long *)(DAT_0918f6b0 + 0xb8) + 8);
          *plVar3 = lVar1;
          thunk_FUN_03f5d7b8(plVar3,lVar1);
        }
        uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar2,lVar1);
        *puVar15 = uVar2;
        thunk_FUN_03f5d7b8(puVar15,uVar2);
        if (*plVar14 != 0) {
          puVar15 = (undefined8 *)(*plVar14 + 0x48);
          uVar7 = *puVar15;
          uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
          FUN_053017a8(uVar2,0,DAT_091c68d8,0);
          uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
          *puVar15 = uVar2;
          thunk_FUN_03f5d7b8(puVar15,uVar2);
          if (*plVar13 != 0) {
            puVar15 = (undefined8 *)(*plVar13 + 0x30);
            uVar7 = *puVar15;
            uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
            FUN_053017a8(uVar2,0,DAT_091c68d8,0);
            uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
            *puVar15 = uVar2;
            thunk_FUN_03f5d7b8(puVar15,uVar2);
            if (*plVar13 != 0) {
              puVar15 = (undefined8 *)(*plVar13 + 0x38);
              uVar7 = *puVar15;
              uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
              FUN_053017a8(uVar2,0,DAT_091c68d0,0);
              uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
              *puVar15 = uVar2;
              thunk_FUN_03f5d7b8(puVar15,uVar2);
              if (*plVar13 != 0) {
                puVar15 = (undefined8 *)(*plVar13 + 0x40);
                uVar7 = *puVar15;
                uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                FUN_053017a8(uVar2,0,DAT_091c68c8,0);
                uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
                *puVar15 = uVar2;
                thunk_FUN_03f5d7b8(puVar15,uVar2);
                if (*plVar13 != 0) {
                  puVar15 = (undefined8 *)(*plVar13 + 0x48);
                  uVar7 = *puVar15;
                  uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                  FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                  uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve(uVar7,uVar2);
                  *puVar15 = uVar2;
                  thunk_FUN_03f5d7b8(puVar15,uVar2);
                  if (*plVar13 != 0) {
                    puVar15 = (undefined8 *)(*plVar13 + 0x50);
                    uVar7 = *puVar15;
                    uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                    FUN_053017a8(uVar2,0,DAT_091c68c8,0);
                    uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                      (uVar7,uVar2);
                    *puVar15 = uVar2;
                    thunk_FUN_03f5d7b8(puVar15,uVar2);
                    if (*plVar13 != 0) {
                      puVar15 = (undefined8 *)(*plVar13 + 0x60);
                      uVar7 = *puVar15;
                      uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                      FUN_053017a8(uVar2,0,DAT_091c68d0,0);
                      uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                        (uVar7,uVar2);
                      *puVar15 = uVar2;
                      thunk_FUN_03f5d7b8(puVar15,uVar2);
                      if (*plVar12 != 0) {
                        puVar15 = (undefined8 *)(*plVar12 + 0x48);
                        uVar7 = *puVar15;
                        uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                        FUN_053017a8(uVar2,0,DAT_091c68c8,0);
                        uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                          (uVar7,uVar2);
                        *puVar15 = uVar2;
                        thunk_FUN_03f5d7b8(puVar15,uVar2);
                        if (*plVar12 != 0) {
                          puVar15 = (undefined8 *)(*plVar12 + 0x58);
                          uVar7 = *puVar15;
                          uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                          FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                          uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                            (uVar7,uVar2);
                          *puVar15 = uVar2;
                          thunk_FUN_03f5d7b8(puVar15,uVar2);
                          if (*plVar12 != 0) {
                            puVar15 = (undefined8 *)(*plVar12 + 0x68);
                            uVar7 = *puVar15;
                            uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                            FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                            uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                              (uVar7,uVar2);
                            *puVar15 = uVar2;
                            thunk_FUN_03f5d7b8(puVar15,uVar2);
                            if (*plVar11 != 0) {
                              puVar15 = (undefined8 *)(*plVar11 + 0x18);
                              uVar7 = *puVar15;
                              uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                              FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                              uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                (uVar7,uVar2);
                              *puVar15 = uVar2;
                              thunk_FUN_03f5d7b8(puVar15,uVar2);
                              if (*plVar11 != 0) {
                                puVar15 = (undefined8 *)(*plVar11 + 0x28);
                                uVar7 = *puVar15;
                                uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                FUN_053017a8(uVar2,0,DAT_091c68b8,0);
                                uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                  (uVar7,uVar2);
                                *puVar15 = uVar2;
                                thunk_FUN_03f5d7b8(puVar15,uVar2);
                                if (*plVar10 != 0) {
                                  puVar15 = (undefined8 *)(*plVar10 + 0x38);
                                  uVar7 = *puVar15;
                                  uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                  FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                                  uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                    (uVar7,uVar2);
                                  *puVar15 = uVar2;
                                  thunk_FUN_03f5d7b8(puVar15,uVar2);
                                  if (*plVar10 != 0) {
                                    puVar15 = (undefined8 *)(*plVar10 + 0x40);
                                    uVar7 = *puVar15;
                                    uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                    FUN_053017a8(uVar2,0,DAT_091c68d0,0);
                                    uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                      (uVar7,uVar2);
                                    *puVar15 = uVar2;
                                    thunk_FUN_03f5d7b8(puVar15,uVar2);
                                    if (*plVar10 != 0) {
                                      puVar15 = (undefined8 *)(*plVar10 + 0x48);
                                      uVar7 = *puVar15;
                                      uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                      FUN_053017a8(uVar2,0,DAT_091c68d0,0);
                                      uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                        (uVar7,uVar2);
                                      *puVar15 = uVar2;
                                      thunk_FUN_03f5d7b8(puVar15,uVar2);
                                      if (*plVar10 != 0) {
                                        puVar15 = (undefined8 *)(*plVar10 + 0x50);
                                        uVar7 = *puVar15;
                                        uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                        FUN_053017a8(uVar2,0,DAT_091c68c8,0);
                                        uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                          (uVar7,uVar2);
                                        *puVar15 = uVar2;
                                        thunk_FUN_03f5d7b8(puVar15,uVar2);
                                        if (*plVar10 != 0) {
                                          puVar15 = (undefined8 *)(*plVar10 + 0x58);
                                          uVar7 = *puVar15;
                                          uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                          FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                                          uVar2 = CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                          *puVar15 = uVar2;
                                          thunk_FUN_03f5d7b8(puVar15,uVar2);
                                          if (*plVar8 != 0) {
                                            puVar15 = (undefined8 *)(*plVar8 + 0x18);
                                            uVar7 = *puVar15;
                                            uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                            FUN_053017a8(uVar2,0,DAT_091c68e0,0);
                                            uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                            *puVar15 = uVar2;
                                            thunk_FUN_03f5d7b8(puVar15,uVar2);
                                            if (*plVar5 != 0) {
                                              puVar15 = (undefined8 *)(*plVar5 + 0x28);
                                              uVar7 = *puVar15;
                                              uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                              FUN_053017a8(uVar2,0,DAT_091c68d0,0);
                                              uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                              *puVar15 = uVar2;
                                              thunk_FUN_03f5d7b8(puVar15,uVar2);
                                              if (*plVar5 != 0) {
                                                puVar15 = (undefined8 *)(*plVar5 + 0x18);
                                                uVar7 = *puVar15;
                                                uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                                FUN_053017a8(uVar2,0,DAT_091c68d0,0);
                                                uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                                *puVar15 = uVar2;
                                                thunk_FUN_03f5d7b8(puVar15,uVar2);
                                                if (*plVar9 != 0) {
                                                  puVar15 = (undefined8 *)(*plVar9 + 0x18);
                                                  uVar7 = *puVar15;
                                                  uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                                  FUN_053017a8(uVar2,0,DAT_091c68c0,0);
                                                  uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                                  *puVar15 = uVar2;
                                                  thunk_FUN_03f5d7b8(puVar15,uVar2);
                                                  if (*plVar6 != 0) {
                                                    puVar15 = (undefined8 *)(*plVar6 + 0x18);
                                                    uVar7 = *puVar15;
                                                    uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                                    FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                                                    uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                                  *puVar15 = uVar2;
                                                  thunk_FUN_03f5d7b8(puVar15,uVar2);
                                                  if (*plVar6 != 0) {
                                                    puVar15 = (undefined8 *)(*plVar6 + 0x28);
                                                    uVar7 = *puVar15;
                                                    uVar2 = thunk_FUN_03f9944c(DAT_09177a90);
                                                    FUN_053017a8(uVar2,0,DAT_091c68d8,0);
                                                    uVar2 = 
                                                  CookOrder_Cooking_Config_CookingRepresentationProfile__Curve
                                                            (uVar7,uVar2);
                                                  *puVar15 = uVar2;
                                                  thunk_FUN_03f5d7b8(puVar15);
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

