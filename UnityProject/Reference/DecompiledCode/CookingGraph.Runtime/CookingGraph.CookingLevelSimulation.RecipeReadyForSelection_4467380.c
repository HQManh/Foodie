// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RecipeReadyForSelection
// address: 0x4467380
// body: available
// range: 0x4467380-0x446796b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4467964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4467968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__RecipeReadyForSelection
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  int local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518051 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_091c67a0);
    FUN_03f5c2a4(&DAT_091c9ca8);
    FUN_03f5c2a4(&DAT_091ca918);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_09178680);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf10);
    FUN_03f5c2a4(&DAT_0917bf20);
    FUN_03f5c2a4(&DAT_0918f408);
    FUN_03f5c2a4(&DAT_091e7c38);
    FUN_03f5c2a4(&DAT_0918f410);
    DAT_09518051 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x20) != 0) {
      return false;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      if (*(long *)(*(long *)(param_2 + 0x38) + 0x18) != 0) {
        return false;
      }
      if (*(long *)(param_2 + 0x30) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x30) + 0x18) == 1) {
          return true;
        }
        lVar8 = *(long *)(param_1 + 0x78);
        if (lVar8 != 0) {
          local_a0 = 0;
LAB_04467524:
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_2 + 0x10)) {
LAB_04467968:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_2 + 0x10) * 8 + 0x20);
            if (lVar8 != 0) {
              iVar1 = *(int *)(lVar8 + 0x18);
              if (iVar1 <= local_a0) {
                return local_a0 < iVar1;
              }
              lVar8 = thunk_FUN_03f9944c(DAT_0918f408);
              CookingGraph_CookingLevelSimulation_<>c__DisplayClass158_0___ctor(lVar8,0);
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = param_1;
                thunk_FUN_03f5d7b8((long *)(lVar8 + 0x18),param_1);
                uVar4 = thunk_FUN_03f9944c(DAT_09179e20);
                FUN_053e1118(uVar4,DAT_091a82f8);
                *(undefined8 *)(lVar8 + 0x10) = uVar4;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x10),uVar4);
                lVar11 = *(long *)(param_2 + 0x30);
                if (lVar11 != 0) {
                  if (*(int *)(lVar11 + 0x18) < 1) {
                    return local_a0 < iVar1;
                  }
                  bVar14 = false;
                  uVar12 = 0;
                  do {
                    lVar5 = thunk_FUN_03f9944c(DAT_0918f410);
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass158_1___ctor(lVar5,0);
                    if (lVar5 == 0) break;
                    plVar13 = (long *)(lVar5 + 0x18);
                    *plVar13 = lVar8;
                    thunk_FUN_03f5d7b8(plVar13,lVar8);
                    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_04467968;
                    uVar4 = *(undefined8 *)(lVar11 + 0x20 + uVar12 * 8);
                    *(undefined8 *)(lVar5 + 0x10) = uVar4;
                    if (bVar14 || (int)uVar4 != param_3) {
                      lVar6 = thunk_FUN_03f9944c(DAT_0917bf20);
                      FUN_0573917c(lVar6,DAT_091abf10);
                      if ((*(long *)(param_1 + 0x78) == 0) ||
                         (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar9 == 0)) break;
                      uVar2 = *(uint *)(param_2 + 0x10);
                      if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_04467968;
                      lVar9 = *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                      if (lVar9 == 0) break;
                      uVar3 = CookingGraph_CookingGraphIndex_Tool__Flat
                                        (lVar9,*(undefined4 *)(lVar5 + 0x14),local_a0,0);
                      CookingGraph_CookingLevelSimulation__ToolAddress(&local_98,uVar2,uVar3);
                      lVar9 = DAT_091abf18;
                      if (lVar6 == 0) break;
                      lVar10 = *(long *)(lVar6 + 0x10);
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar10 == 0) break;
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar10 + 0x30) = local_88;
                        *(undefined8 *)(lVar10 + 0x28) = uStack_90;
                        *(long *)(lVar10 + 0x20) = local_98;
                        thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
                      }
                      else {
                        uStack_78 = uStack_90;
                        local_80 = local_98;
                        local_70 = local_88;
                        FUN_05739aa0(lVar6,&local_80,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(long *)(param_1 + 0x90) == 0) break;
                      uVar4 = System_Linq_Enumerable__Range
                                        (0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
                      uVar7 = thunk_FUN_03f9944c(DAT_09178ba8);
                      FUN_05315970(uVar7,0,DAT_091c6848,0);
                      uVar4 = FUN_04af2704(uVar4,uVar7,DAT_091ca558);
                      FUN_05739d0c(lVar6,uVar4,DAT_091abf20);
                      if (-1 < *(int *)(param_1 + 0x16c)) {
                        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_98,param_1);
                        lVar9 = DAT_091abf18;
                        lVar10 = *(long *)(lVar6 + 0x10);
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar10 == 0) break;
                        uVar2 = *(uint *)(lVar6 + 0x18);
                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                          lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar10 + 0x30) = local_88;
                          *(undefined8 *)(lVar10 + 0x28) = uStack_90;
                          *(long *)(lVar10 + 0x20) = local_98;
                          thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
                        }
                        else {
                          uStack_78 = uStack_90;
                          local_80 = local_98;
                          local_70 = local_88;
                          FUN_05739aa0(lVar6,&local_80,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      uVar4 = thunk_FUN_03f9944c(DAT_09178680);
                      FUN_05312d20(uVar4,param_1,DAT_091c67a0,0);
                      uVar4 = FUN_04afa6a0(lVar6,uVar4,DAT_091ca918);
                      uVar7 = thunk_FUN_03f9944c(DAT_09178768);
                      FUN_053136a4(uVar7,lVar5,DAT_091e7c38,0);
                      FUN_04ae5c68(&local_80,uVar4,uVar7,DAT_091c9ca8);
                      if (local_80 == 0) goto LAB_04467934;
                      if ((*plVar13 == 0) || (lVar5 = *(long *)(*plVar13 + 0x10), lVar5 == 0))
                      break;
                      FUN_053e230c(lVar5,local_80,DAT_091a8308);
                    }
                    else {
                      bVar14 = true;
                    }
                    uVar12 = uVar12 + 1;
                    if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar12) {
                      return true;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04467964:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04467934:
  lVar8 = *(long *)(param_1 + 0x78);
  local_a0 = local_a0 + 1;
  if (lVar8 == 0) goto LAB_04467964;
  goto LAB_04467524;
}

