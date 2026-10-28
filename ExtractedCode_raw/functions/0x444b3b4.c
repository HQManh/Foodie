// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PayQueue
// address: 0x444b3b4
// body: available
// range: 0x444b3b4-0x444b907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444b680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b8f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b8fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b904 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444b900) */

void CookingGraph_CookingLevelSimulation__PayQueue(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  if ((DAT_0951800a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2590);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    DAT_0951800a = 1;
  }
  local_58 = (long *)0x0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x2c) + 1;
    *(int *)(param_2 + 0x2c) = iVar8;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar5 != 0)) {
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_2 + 0x18)) {
LAB_0444b8fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (iVar8 < *(int *)(lVar5 + (long)(int)*(uint *)(param_2 + 0x18) * 4 + 0x20)) {
        return;
      }
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      lVar5 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_70,param_2,0);
      lVar10 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_88,param_2,0);
      if (lVar10 != 0) {
        local_90 = local_78;
        uStack_98 = uStack_80;
        local_a0 = local_88;
        plVar2 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar10,&local_a0,0);
        if (plVar2 != (long *)0x0) {
          lVar10 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b4c0) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0444b550;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b4c0,0);
LAB_0444b550:
          (*(code *)*puVar3)(&local_b8,plVar2,0,puVar3[1]);
          if (lVar5 != 0) {
            uStack_c8 = uStack_68;
            local_d0 = local_70;
            local_c0 = local_60;
            CookingGraph_Execution_CookingExecution__Consume(lVar5,&local_d0,local_b8,0);
            if (0 < *(int *)(param_2 + 0x28)) {
              return;
            }
            lVar5 = *(long *)(param_2 + 0x38);
            if (lVar5 != 0) {
              if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                uVar6 = 0;
                uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                do {
                  if (uVar4 <= uVar6) goto LAB_0444b8fc;
                  CookingGraph_CookingLevelSimulation__CollectKey
                            (param_1,*(undefined4 *)(lVar5 + 0x20 + uVar6 * 4));
                  uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
                  uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
              }
              lVar5 = *(long *)(param_1 + 0x80);
              if (lVar5 != 0) {
                iVar8 = 0;
                while (iVar8 < *(int *)(lVar5 + 0x18)) {
                  iVar9 = 0;
                  while( true ) {
                    lVar5 = FUN_057e0998(lVar5,iVar8,DAT_091aa7e0);
                    if (lVar5 == 0) goto LAB_0444b680;
                    if (*(int *)(lVar5 + 0x18) <= iVar9) break;
                    lVar5 = CookingGraph_CookingLevelSimulation__At(param_1,iVar8,iVar9);
                    if (lVar5 == param_2) {
                      if ((*(long *)(param_1 + 0x80) == 0) ||
                         (lVar5 = FUN_057e0998(*(long *)(param_1 + 0x80),iVar8,DAT_091aa7e0),
                         lVar5 == 0)) goto LAB_0444b680;
                      FUN_057e09ec(lVar5,iVar9,0,DAT_091b25a0);
                    }
                    lVar5 = *(long *)(param_1 + 0x80);
                    iVar9 = iVar9 + 1;
                    if (lVar5 == 0) goto LAB_0444b680;
                  }
                  lVar5 = *(long *)(param_1 + 0x80);
                  iVar8 = iVar8 + 1;
                  if (lVar5 == 0) goto LAB_0444b680;
                }
                lVar5 = *(long *)(param_1 + 0x178);
                CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_70,param_2,0);
                if (lVar5 != 0) {
                  uStack_e8 = uStack_68;
                  local_f0 = local_70;
                  local_e0 = local_60;
                  plVar2 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                             (lVar5,&local_f0,0);
                  if (plVar2 != (long *)0x0) {
                    lVar5 = *plVar2;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 == 0) goto LAB_0444b6fc;
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_0444b6e4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0444b680:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0444b6e4:
    if (*(long *)(piVar7 + -2) == DAT_0917a480) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0444b718;
    }
  }
LAB_0444b6fc:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a480,0);
LAB_0444b718:
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  pplStack_b0 = &local_58;
  local_b8 = 0;
  do {
    local_58 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0444b794;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0444b794:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = local_58;
    if ((uVar6 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return;
      }
      lVar5 = *local_58;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0444b8ac;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *local_58;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917ab28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0444b7f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ab28,0);
LAB_0444b7f8:
    (*(code *)*puVar3)(&local_70,plVar2,puVar3[1]);
    uVar1 = local_70;
    lVar5 = *(long *)(param_1 + 0x178);
    CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_88,param_2,0);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_108 = uStack_80;
    local_110 = local_88;
    local_100 = local_78;
    CookingGraph_Execution_CookingExecution__Consume(lVar5,&local_110,uVar1,0);
    plVar2 = local_58;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0444b8c8;
    }
  }
LAB_0444b8ac:
  puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_0444b8c8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

