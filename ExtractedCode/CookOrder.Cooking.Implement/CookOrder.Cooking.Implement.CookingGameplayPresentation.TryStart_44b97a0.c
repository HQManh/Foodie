// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$TryStart
// address: 0x44b97a0
// body: available
// range: 0x44b97a0-0x44b9f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b9f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9f50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__TryStart
          (long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  if ((DAT_09518237 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919e468);
    FUN_03f5c2a4(&DAT_0919e420);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091858e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7028);
    FUN_03f5c2a4(&DAT_0918f088);
    FUN_03f5c2a4(&DAT_09207f18);
    FUN_03f5c2a4(&DAT_091f5e08);
    DAT_09518237 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  lStack_88 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f088);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass180_0___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_044b9f4c;
  plVar9 = (long *)(lVar1 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_03f5d7b8(plVar9,param_2);
  *(long *)(lVar1 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_3);
  if ((*(long *)(param_1 + 0x2d8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar2 == 0)) goto LAB_044b9f4c;
  uVar3 = CookingGraph_CookingLevelSimulation__ReadSnapshot(lVar2,0);
  CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureCustomers(param_1,uVar3);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  lVar2 = *plVar9;
  if (lVar2 == 0) goto LAB_044b9f4c;
  uStack_a8 = *(undefined8 *)(lVar2 + 0x48);
  local_b0 = *(undefined8 *)(lVar2 + 0x40);
  local_a0 = *(undefined8 *)(lVar2 + 0x50);
  uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                    (param_1,&local_b0,&local_58);
  if ((uVar4 & 1) != 0) {
    lVar2 = *plVar9;
    if (lVar2 == 0) goto LAB_044b9f4c;
    uStack_c8 = *(undefined8 *)(lVar2 + 0x60);
    local_d0 = *(undefined8 *)(lVar2 + 0x58);
    local_c0 = *(undefined8 *)(lVar2 + 0x68);
    uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                      (param_1,&local_d0,&uStack_78);
    if ((uVar4 & 1) != 0) {
      if ((*plVar9 == 0) || (*(long *)(param_1 + 0x2e0) == 0)) goto LAB_044b9f4c;
      lVar2 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                        (*(long *)(param_1 + 0x2e0),*(undefined4 *)(*plVar9 + 0x30),0);
      lVar6 = *plVar9;
      if (lVar6 == 0) goto LAB_044b9f4c;
      lStack_88 = *(long *)(lVar6 + 0x60);
      local_90 = *(undefined8 *)(lVar6 + 0x58);
      local_80 = *(undefined8 *)(lVar6 + 0x68);
      if ((int)local_90 == 1) {
        lStack_88 = *(long *)(lVar6 + 0x60);
        local_90 = *(undefined8 *)(lVar6 + 0x58);
        local_80 = *(undefined8 *)(lVar6 + 0x68);
        if (lStack_88 == 0) goto LAB_044b9f4c;
        uVar3 = System_String__Substring(lStack_88,5,0);
        uVar4 = System_Int32__TryParse(uVar3,(long)&local_60 + 4,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x1c0);
          if (lVar6 == 0) goto LAB_044b9f4c;
          if (*(uint *)(lVar6 + 0x18) <= local_60._4_4_) goto LAB_044b9f50;
          lVar6 = *(long *)(lVar6 + (long)(int)local_60._4_4_ * 8 + 0x20);
          if (lVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x10);
          }
          if (lVar6 == 0) goto LAB_044b9f4c;
          lVar6 = CookOrder_Cooking_Implement_CookingToolPresentation__LandingFor(lVar6,uVar3,0);
          if (lVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar6 + 0x18);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar4 & 1) != 0) {
            lVar7 = *plVar9;
            if (((lVar7 == 0) || (lVar6 == 0)) || (*(long *)(param_1 + 0x2f0) == 0))
            goto LAB_044b9f4c;
            uStack_e8 = *(undefined8 *)(lVar7 + 0x60);
            local_f0 = *(undefined8 *)(lVar7 + 0x58);
            local_e0 = *(undefined8 *)(lVar7 + 0x68);
            CookOrder_Cooking_Implement_CookingSceneBindings__BindEndpoint
                      (*(long *)(param_1 + 0x2f0),&local_f0,*(undefined8 *)(lVar6 + 0x18),0);
          }
        }
      }
      lVar6 = *plVar9;
      if (lVar6 == 0) goto LAB_044b9f4c;
      lStack_88 = *(long *)(lVar6 + 0x48);
      local_90 = *(undefined8 *)(lVar6 + 0x40);
      local_80 = *(undefined8 *)(lVar6 + 0x50);
      if ((int)local_90 == 1) {
        lStack_88 = *(long *)(lVar6 + 0x48);
        local_90 = *(undefined8 *)(lVar6 + 0x40);
        local_80 = *(undefined8 *)(lVar6 + 0x50);
        if (lStack_88 == 0) goto LAB_044b9f4c;
        uVar3 = System_String__Substring(lStack_88,5,0);
        uVar4 = System_Int32__TryParse(uVar3,&local_60,0);
        lVar6 = 0;
        if ((uVar4 & 1) != 0) {
          if (*plVar9 == 0) goto LAB_044b9f4c;
          CookOrder_Cooking_Implement_CookingGameplayPresentation__RestoreHeldSorting
                    (param_1,*(undefined8 *)(*plVar9 + 0x28));
          lVar6 = *(long *)(param_1 + 0x1c0);
          if (lVar6 == 0) goto LAB_044b9f4c;
          if (*(uint *)(lVar6 + 0x18) <= (uint)local_60) {
LAB_044b9f50:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar6 + (long)(int)(uint)local_60 * 8 + 0x20);
          if (lVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x10);
          }
          if (lVar6 == 0) goto LAB_044b9f4c;
          lVar6 = CookOrder_Cooking_Implement_CookingToolPresentation__DepartureFor(lVar6,uVar3,0);
          if (lVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar6 + 0x18);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar4 & 1) != 0) {
            if (lVar6 == 0) goto LAB_044b9f4c;
            local_58 = *(long *)(lVar6 + 0x18);
            lVar2 = *plVar9;
            if ((lVar2 == 0) || (*(long *)(param_1 + 0x2f0) == 0)) goto LAB_044b9f4c;
            uStack_108 = *(undefined8 *)(lVar2 + 0x48);
            local_110 = *(undefined8 *)(lVar2 + 0x40);
            local_100 = *(undefined8 *)(lVar2 + 0x50);
            CookOrder_Cooking_Implement_CookingSceneBindings__BindEndpoint
                      (*(long *)(param_1 + 0x2f0),&local_110,local_58,0);
          }
        }
      }
      else {
        lVar6 = 0;
      }
      lVar2 = *plVar9;
      if (lVar2 != 0) {
        uStack_128 = *(undefined8 *)(lVar2 + 0x30);
        local_130 = *(undefined8 *)(lVar2 + 0x28);
        local_120 = *(undefined8 *)(lVar2 + 0x38);
        if (local_58 != 0) {
          UnityEngine_Transform__get_position(local_58,0);
          uStack_148 = uStack_128;
          local_150 = local_130;
          local_140 = local_120;
          lVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureUnit
                            (param_1,&local_150);
          plVar10 = (long *)(lVar1 + 0x20);
          *plVar10 = lVar2;
          thunk_FUN_03f5d7b8(plVar10,lVar2);
          if ((*plVar10 != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject(*plVar10,0), lVar2 != 0)) {
            UnityEngine_GameObject__SetActive(lVar2,1,0);
            if (lVar6 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined8 *)(lVar6 + 0x18);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
            if ((uVar4 & 1) != 0) {
              if (local_58 == 0) goto LAB_044b9f4c;
              lVar2 = *plVar10;
              UnityEngine_Transform__get_position(local_58,0);
              if (((lVar2 == 0) || (UnityEngine_Transform__set_position(lVar2,0), lVar6 == 0)) ||
                 (*(long *)(lVar6 + 0x18) == 0)) goto LAB_044b9f4c;
              lVar2 = *plVar10;
              UnityEngine_Transform__get_localScale(*(long *)(lVar6 + 0x18),0);
              if (lVar2 == 0) goto LAB_044b9f4c;
              UnityEngine_Transform__set_localScale(lVar2,0);
            }
            if ((*plVar9 != 0) && (*(long *)(param_1 + 800) != 0)) {
              FUN_06f4d858(*(long *)(param_1 + 800),*(undefined8 *)(*plVar9 + 0x28),DAT_0919e468);
              if ((*plVar9 != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
                FUN_06f4d858(*(long *)(param_1 + 0xb0),*(undefined8 *)(*plVar9 + 0x28),DAT_0919e468)
                ;
                lVar2 = *plVar9;
                if (lVar2 != 0) {
                  lStack_88 = *(long *)(lVar2 + 0x48);
                  local_90 = *(undefined8 *)(lVar2 + 0x40);
                  local_80 = *(undefined8 *)(lVar2 + 0x50);
                  if ((int)local_90 == 0) {
                    lStack_88 = *(long *)(lVar2 + 0x48);
                    local_90 = *(undefined8 *)(lVar2 + 0x40);
                    local_80 = *(undefined8 *)(lVar2 + 0x50);
                    uVar4 = System_Int64__TryParse(lStack_88,&local_68,0);
                    if ((uVar4 & 1) != 0) {
                      if (*(long *)(param_1 + 0x300) == 0) goto LAB_044b9f4c;
                      uVar4 = FUN_06f54e88(*(long *)(param_1 + 0x300),local_68,&local_70,
                                           DAT_0919e420);
                      if ((uVar4 & 1) != 0) {
                        if (local_70 == 0) goto LAB_044b9f4c;
                        CookOrder_Cooking_Implement_CookingQueueTile__SetConsumed(local_70,1,0);
                      }
                    }
                  }
                  lVar2 = *plVar9;
                  if (lVar2 != 0) {
                    lStack_88 = *(long *)(lVar2 + 0x48);
                    local_90 = *(undefined8 *)(lVar2 + 0x40);
                    local_80 = *(undefined8 *)(lVar2 + 0x50);
                    if (((int)local_90 != 0) && (*(int *)(lVar2 + 0x34) == 0)) {
                      if (DAT_09518261 == '\0') {
                        FUN_03f5c2a4(&DAT_09182d78);
                        DAT_09518261 = '\x01';
                      }
                      plVar10 = (long *)**(undefined8 **)(DAT_09182d78 + 0xb8);
                      if (plVar10 != (long *)0x0) {
                        lVar2 = *plVar10;
                        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                        if (uVar4 != 0) {
                          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == DAT_091858e8) {
                              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                              goto LAB_044b9ebc;
                            }
                            uVar4 = uVar4 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091858e8,2);
LAB_044b9ebc:
                        (*(code *)*puVar5)(plVar10,puVar5[1]);
                      }
                    }
                    lVar2 = *(long *)(param_1 + 0x2f8);
                    uVar11 = *(undefined8 *)(lVar1 + 0x10);
                    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar3,lVar1,DAT_091e7028,0);
                    if (lVar2 != 0) {
                      uVar4 = CookOrder_Cooking_Implement_CookingFlightPresentation__TryStart
                                        (lVar2,uVar11,uVar3,param_4,param_5,0);
                      if ((uVar4 & 1) == 0) {
                        return 0;
                      }
                      if ((*plVar9 != 0) && (*(long *)(param_1 + 0x318) != 0)) {
                        FUN_053e230c(*(long *)(param_1 + 0x318),*(undefined8 *)(*plVar9 + 0x20),
                                     DAT_091a8308);
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
      goto LAB_044b9f4c;
    }
  }
  lVar1 = *plVar9;
  if (lVar1 != 0) {
    lStack_88 = *(long *)(lVar1 + 0x48);
    local_90 = *(undefined8 *)(lVar1 + 0x40);
    local_80 = *(undefined8 *)(lVar1 + 0x50);
    uVar3 = CookingGraph_Execution_CookingEndpoint__ToString(&local_90,0);
    lVar1 = *plVar9;
    if (lVar1 != 0) {
      lStack_88 = *(undefined8 *)(lVar1 + 0x60);
      local_90 = *(undefined8 *)(lVar1 + 0x58);
      local_80 = *(undefined8 *)(lVar1 + 0x68);
      uVar11 = CookingGraph_Execution_CookingEndpoint__ToString(&local_90,0);
      uVar3 = System_String__Concat(DAT_09207f18,uVar3,DAT_091f5e08,uVar11,0);
      *param_5 = uVar3;
      thunk_FUN_03f5d7b8(param_5,uVar3);
      return 0;
    }
  }
LAB_044b9f4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

