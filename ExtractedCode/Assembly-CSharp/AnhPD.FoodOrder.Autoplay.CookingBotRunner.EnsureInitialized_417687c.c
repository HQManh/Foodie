// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$EnsureInitialized
// address: 0x417687c
// body: available
// range: 0x417687c-0x4176f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4176f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_Autoplay_CookingBotRunner__EnsureInitialized(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long *local_68;
  undefined8 local_58;
  
  if ((DAT_095165fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09182cc8);
    FUN_03f5c2a4(&DAT_09182cd0);
    FUN_03f5c2a4(&DAT_09182d48);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184168);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213b98);
    FUN_03f5c2a4(&DAT_09213ba0);
    FUN_03f5c2a4(&DAT_09213b80);
    FUN_03f5c2a4(&DAT_09213b78);
    DAT_095165fb = 1;
  }
  local_58 = 0;
  plVar14 = (long *)(param_1 + 0x40);
  local_68 = (long *)0x0;
  if ((*plVar14 != 0) &&
     (uVar8 = CookingGraph_CookingEstimatorBot__get_IsInitialized(*plVar14,0), (uVar8 & 1) != 0)) {
    return 1;
  }
  lVar15 = DAT_091881a0;
  if (*(char *)(param_1 + 100) != '\0') {
    return 0;
  }
  lVar9 = *(long *)(DAT_091b4c28 + 0x20);
  *(undefined1 *)(param_1 + 100) = 1;
  lVar15 = **(long **)(lVar15 + 0xb8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03f95a6c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03f95a6c();
  }
  plVar16 = (long *)(param_1 + 0x58);
  *plVar16 = **(long **)(lVar9 + 0xb8);
  thunk_FUN_03f5d7b8(plVar16);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Equality(lVar15,0,0);
  if ((uVar8 & 1) == 0) {
    lVar9 = *plVar16;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Equality(lVar9,0,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = *plVar16;
      if (lVar9 == 0) goto LAB_04176f30;
      uVar1 = *(undefined8 *)(lVar9 + 0x20);
      uVar10 = *(undefined8 *)(lVar9 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar10,0,0);
        if ((uVar8 & 1) == 0) {
          if (lVar15 == 0) {
LAB_04176f30:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__Build
                            (*(undefined8 *)(lVar15 + 0xd0),uVar10,0);
          plVar17 = (long *)(param_1 + 0x50);
          *plVar17 = lVar9;
          thunk_FUN_03f5d7b8(plVar17,lVar9);
          if (*plVar17 == 0) goto LAB_04176f30;
          uVar8 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__get_IsEmpty(*plVar17,0);
          if ((uVar8 & 1) == 0) {
            if (*(char *)(param_1 + 0x3a) != '\0') {
              if (*plVar17 == 0) goto LAB_04176f30;
              uVar10 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__Describe(*plVar17,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__Log(uVar10,param_1,0);
            }
            local_58 = 0;
            if (*plVar16 != 0) {
              lVar9 = *(long *)(*plVar16 + 0x38);
              if (lVar9 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined8 *)(lVar9 + 0x78);
              }
              uVar8 = System_String__IsNullOrEmpty(uVar10,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = FUN_05a8f088(DAT_091b4b68);
                if ((uVar8 & 1) == 0) {
                  uVar11 = 0;
                }
                else {
                  lVar9 = FUN_039af8ec(DAT_091b4b60);
                  if (lVar9 == 0) goto LAB_04176f30;
                  uVar11 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds(lVar9,0);
                }
                uVar8 = CookingGraph_CustomerOrderTranslator__TryParse
                                  (uVar10,uVar1,&local_58,&local_68,uVar11,0);
                uVar10 = DAT_09213b78;
                if ((uVar8 & 1) == 0) {
                  local_58 = 0;
                  if (local_68 == (long *)0x0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*local_68 + 0x188))
                                       (local_68,*(undefined8 *)(*local_68 + 400));
                  }
                  uVar10 = System_String__Concat(uVar10,uVar11,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar10,param_1,0);
                }
              }
              uVar10 = local_58;
              lVar9 = *plVar16;
              if (lVar9 != 0) {
                uVar11 = *(undefined8 *)(param_1 + 0x50);
                uVar18 = *(undefined8 *)(lVar9 + 0x38);
                lVar12 = thunk_FUN_03f9944c(DAT_09182cc8);
                AnhPD_FoodOrder_Autoplay_CookingBotBridge___ctor
                          (lVar12,lVar15,lVar9,uVar11,uVar10,uVar18);
                plVar16 = (long *)(param_1 + 0x48);
                *plVar16 = lVar12;
                thunk_FUN_03f5d7b8(plVar16,lVar12);
                lVar9 = thunk_FUN_03f9944c(DAT_09184168);
                CookingGraph_EstimatorBotSettings___ctor(lVar9,0);
                lVar15 = DAT_09182cc0;
                if (lVar9 != 0) {
                  *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(param_1 + 0x28);
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar19 = FUN_04177cfc(0);
                  *(undefined4 *)(lVar9 + 0x68) = uVar19;
                  uVar19 = FUN_04177d4c(0);
                  *(undefined4 *)(lVar9 + 0x70) = uVar19;
                  uVar6 = FUN_04177d9c(0);
                  uVar19 = *(undefined4 *)(param_1 + 0x2c);
                  uVar5 = *(undefined1 *)(param_1 + 0x30);
                  iVar2 = *(int *)(param_1 + 0x34);
                  *(undefined4 *)(lVar9 + 0x6c) = uVar6;
                  *(undefined4 *)(lVar9 + 0x78) = uVar19;
                  *(undefined1 *)(lVar9 + 0x7c) = uVar5;
                  if (iVar2 != 0) {
                    *(int *)(lVar9 + 0x80) = iVar2;
                  }
                  lVar12 = *plVar16;
                  lVar15 = thunk_FUN_03f9944c(DAT_09182d48);
                  CookingGraph_CookingEstimatorBot___ctor(lVar15,lVar12,lVar12,lVar9,0,0);
                  *plVar14 = lVar15;
                  thunk_FUN_03f5d7b8(plVar14,lVar15);
                  lVar15 = *plVar14;
                  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar10 = FUN_04177dec(0);
                  if (lVar15 != 0) {
                    CookingGraph_CookingEstimatorBot__Init(lVar15,uVar1,uVar10,0,0,0);
                    lVar15 = FUN_04177dec(0);
                    if (lVar15 != 0) {
                      lVar9 = *plVar14;
                      if (*(int *)(lVar15 + 0x14) < 1) {
                        if (lVar9 == 0) goto LAB_04176f30;
                        CookingGraph_CookingEstimatorBot__SetPickingStrategy
                                  (lVar9,*(undefined4 *)(param_1 + 0x24),0);
                      }
                      else {
                        if (lVar9 == 0) goto LAB_04176f30;
                        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar9 + 0xa8);
                      }
                      lVar15 = thunk_FUN_03f9944c(DAT_09182cd0);
                      System_Object___ctor(lVar15,0);
                      *(long *)(lVar15 + 0x10) = param_1;
                      thunk_FUN_03f5d7b8((long *)(lVar15 + 0x10),param_1);
                      plVar17 = (long *)(param_1 + 0x68);
                      *plVar17 = lVar15;
                      thunk_FUN_03f5d7b8(plVar17,lVar15);
                      lVar15 = *(long *)(param_1 + 0x40);
                      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar7 = FUN_04177e3c(0);
                      if ((lVar15 != 0) &&
                         (CookingGraph_CookingEstimatorBot__SetVerboseLogging
                                    (lVar15,uVar7 & 1,*plVar17,0), *plVar16 != 0)) {
                        AnhPD_FoodOrder_Autoplay_CookingBotBridge__Reset();
                        if (*plVar14 != 0) {
                          uVar19 = CookingGraph_CookingEstimatorBot__get_PickIntervalSeconds
                                             (*plVar14,0);
                          if (*plVar14 != 0) {
                            uVar6 = CookingGraph_CookingEstimatorBot__ResolveWorkWaitStrategy
                                              (*plVar14,0);
                            lVar15 = *plVar14;
                            if (lVar15 != 0) {
                              uVar3 = *(undefined4 *)(lVar15 + 0xa8);
                              uVar4 = *(undefined4 *)(lVar15 + 0x84);
                              lVar15 = FUN_04177dec(0);
                              if (lVar15 != 0) {
                                CakeOrder_InGame_CookingBotAutoRetry__ReportEffectiveSettings
                                          (uVar19,uVar6,uVar3,uVar4,*(undefined4 *)(lVar15 + 0x50),0
                                          );
                                *(undefined1 *)(param_1 + 100) = 0;
                                return 1;
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
            goto LAB_04176f30;
          }
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar13 = &DAT_09213b98;
          goto LAB_04176a74;
        }
      }
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar13 = &DAT_09213ba0;
      goto LAB_04176a74;
    }
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar13 = &DAT_09213b80;
LAB_04176a74:
  UnityEngine_Debug__LogError(*puVar13,param_1,0);
  return 0;
}

