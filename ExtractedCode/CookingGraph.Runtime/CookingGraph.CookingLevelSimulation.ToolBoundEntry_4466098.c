// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ToolBoundEntry
// address: 0x4466098
// body: available
// range: 0x4466098-0x446663f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4466560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446663c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ToolBoundEntry
               (undefined8 *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951804b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c800);
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_091c9548);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_091b2560);
    FUN_03f5c2a4(&DAT_091b76b8);
    FUN_03f5c2a4(&DAT_091b6968);
    FUN_03f5c2a4(&DAT_091b6970);
    FUN_03f5c2a4(&DAT_091e79f0);
    FUN_03f5c2a4(&DAT_091e7bf8);
    FUN_03f5c2a4(&DAT_0918f3d0);
    FUN_03f5c2a4(&DAT_091e7c00);
    FUN_03f5c2a4(&DAT_0918f3d8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_0951804b = 1;
  }
  local_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918f3d0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass150_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),param_2);
    *(undefined8 *)(lVar4 + 0x20) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20),param_4);
    *(undefined8 *)(lVar4 + 0x28) = param_5;
    *(undefined4 *)(lVar4 + 0x30) = param_6;
    if ((*(long *)(param_2 + 0x78) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_2 + 0x78) + 0x60), lVar6 != 0)) {
      if (*(uint *)(lVar6 + 0x18) <= param_3) {
LAB_0446663c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = lVar6 + (long)(int)param_3 * 0xc;
      local_90 = *(ulong *)(lVar6 + 0x20);
      local_88 = *(undefined4 *)(lVar6 + 0x28);
      if ((local_90 & 0xff) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      uVar2 = FUN_05c25e54(&local_90,DAT_091b6970);
      *(undefined4 *)(lVar4 + 0x18) = uVar2;
      if ((*(long *)(param_2 + 0x78) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_2 + 0x78) + 0x28), lVar6 != 0)) {
        if (*(uint *)(lVar6 + 0x18) <= param_3) goto LAB_0446663c;
        uVar7 = *(undefined8 *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
        lVar6 = thunk_FUN_03f9944c(DAT_0918f3d8);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass150_1___ctor(lVar6,0);
        if (lVar6 != 0) {
          plVar12 = (long *)(lVar6 + 0x18);
          *plVar12 = lVar4;
          thunk_FUN_03f5d7b8(plVar12,lVar4);
          *(undefined4 *)(lVar6 + 0x10) = 0;
          lVar9 = *(long *)(param_2 + 0x78);
          if (lVar9 != 0) {
            iVar3 = 0;
            iVar11 = -1;
            do {
              if ((*plVar12 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) break;
              uVar1 = *(uint *)(*plVar12 + 0x18);
              if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_0446663c;
              lVar9 = *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              if (lVar9 == 0) break;
              if (*(int *)(lVar9 + 0x18) <= iVar3) {
                if (-1 < iVar11) {
                  uVar14 = thunk_FUN_03f9944c(DAT_09179360);
                  FUN_05322d94(uVar14,lVar4,DAT_091e7bf8,0);
                  uVar5 = FUN_04ab6f28(uVar7,uVar14,DAT_091c9548);
                  if ((uVar5 & 1) != 0) {
                    local_c0 = 0;
                    local_b8 = 0;
                    thunk_FUN_03f5d7b8(&local_c0,0);
                    local_b8 = CONCAT44(iVar11,*(undefined4 *)(lVar4 + 0x18));
                    param_1[1] = 0;
                    param_1[2] = 0;
                    uVar7 = DAT_091b76b8;
                    *param_1 = 0;
                    FUN_05c3c1c8(param_1,local_c0,local_b8,uVar7);
                    return;
                  }
                  *param_1 = 0;
                  param_1[1] = 0;
                  param_1[2] = 0;
                  return;
                }
                goto LAB_04466604;
              }
              uVar5 = FUN_05c25e54(&local_90,DAT_091b6970);
              iVar3 = CookingGraph_CookingGraphIndex_Tool__Flat
                                (lVar9,uVar5 >> 0x20,*(undefined4 *)(lVar6 + 0x10),0);
              if (-1 < iVar3) {
                if (*plVar12 == 0) break;
                CookingGraph_CookingLevelSimulation__ToolAddress
                          (&local_80,*(undefined4 *)(*plVar12 + 0x18),iVar3);
                uStack_a8 = uStack_78;
                local_b0 = local_80;
                local_a0 = local_70;
                uStack_d8 = uStack_78;
                local_e0 = local_80;
                local_d0 = local_70;
                uVar5 = CookingGraph_CookingLevelSimulation__Occupied(param_2,&local_e0);
                if ((uVar5 & 1) == 0) {
                  if (*plVar12 == 0) break;
                  lVar9 = *(long *)(param_2 + 0xb0);
                  local_80 = 0;
                  FUN_066c1fdc(&local_80,*(undefined4 *)(*plVar12 + 0x18),
                               *(undefined4 *)(lVar6 + 0x10),DAT_091bec98);
                  if (lVar9 == 0) break;
                  uVar5 = FUN_06e4c14c(lVar9,local_80,DAT_0919c190);
                  if ((uVar5 & 1) == 0) {
                    lVar9 = *plVar12;
                    if (lVar9 == 0) break;
                    if (*(long *)(lVar9 + 0x20) != 0) {
                      lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10);
                      if (lVar9 == 0) break;
                      uStack_78 = uStack_a8;
                      local_80 = local_b0;
                      local_70 = local_a0;
                      uVar5 = FUN_06e8248c(lVar9,&local_80,DAT_0919c800);
                      if ((uVar5 & 1) != 0) goto LAB_0446654c;
                      lVar9 = *plVar12;
                      if (lVar9 == 0) break;
                    }
                    lVar9 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                      (param_2,*(undefined4 *)(lVar9 + 0x18),
                                       *(undefined4 *)(lVar6 + 0x10),*(undefined8 *)(lVar9 + 0x20),0
                                      );
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_0918f298);
                    }
                    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    lVar13 = puVar10[0x87];
                    if (lVar13 == 0) {
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918f298);
                        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      }
                      uVar14 = *puVar10;
                      lVar13 = thunk_FUN_03f9944c(DAT_091793e8);
                      FUN_0532a53c(lVar13,uVar14,DAT_091e79f0,0);
                      lVar8 = *(long *)(DAT_0918f298 + 0xb8);
                      *(long *)(lVar8 + 0x438) = lVar13;
                      thunk_FUN_03f5d7b8(lVar8 + 0x438,lVar13);
                    }
                    uVar5 = FUN_04ab7924(lVar9,lVar13,DAT_091c9558);
                    if ((uVar5 & 1) != 0) {
LAB_04466604:
                      *param_1 = 0;
                      param_1[1] = 0;
                      param_1[2] = 0;
                      return;
                    }
                    if (iVar11 < 0) {
                      if (lVar9 == 0) break;
                      if (*(int *)(lVar9 + 0x18) < 1) {
                        uVar14 = thunk_FUN_03f9944c(DAT_09179360);
                        FUN_05322d94(uVar14,lVar6,DAT_091e7c00,0);
                        uVar5 = FUN_04ab6f28(uVar7,uVar14,DAT_091c9548);
                        if ((uVar5 & 1) == 0) {
                          iVar11 = iVar3;
                        }
                      }
                    }
                  }
                }
              }
LAB_0446654c:
              iVar3 = *(int *)(lVar6 + 0x10) + 1;
              *(int *)(lVar6 + 0x10) = iVar3;
              lVar9 = *(long *)(param_2 + 0x78);
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

