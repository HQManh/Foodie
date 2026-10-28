// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$AdvanceSingleInputProcesses
// address: 0x44191c8
// body: available
// range: 0x44191c8-0x44194fb inclusive
// range: 0x4419500-0x4419503 inclusive
// range: 0x4419508-0x441950b inclusive
// range: 0x4419510-0x4419513 inclusive
// range: 0x4419590-0x44195bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44194f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44195b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_EstimatorBotScorer__AdvanceSingleInputProcesses(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  float local_74;
  
  if ((DAT_09517f02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d098);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_091a5210);
    FUN_03f5c2a4(&DAT_091a5218);
    FUN_03f5c2a4(&DAT_091a5220);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091b29d0);
    FUN_03f5c2a4(&DAT_091b29d8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f02 = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_74 = 0.0;
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar5 = System_Math__Max(1,iVar5 << 1 | 1,0);
    if (0 < iVar5) {
      do {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_044195b8;
        iVar5 = iVar5 + -1;
        FUN_057e185c(&local_b8,*(long *)(param_1 + 0x48),DAT_091b29d0);
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_98 = puStack_b0;
        local_90 = local_a8;
        bVar1 = true;
        puStack_b0 = &local_a0;
        while (uVar7 = FUN_071bd28c(&local_a0,DAT_091a5218), lVar2 = local_90, (uVar7 & 1) != 0) {
          if (local_90 != 0) {
            uVar9 = *(undefined8 *)(local_90 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Equality(uVar9,0,0);
            if ((uVar7 & 1) == 0) {
              lVar8 = *(long *)(lVar2 + 0x18);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar8 + 0x18) == 1) {
                uVar9 = FUN_057e0998(lVar8,0,DAT_091ada40);
                uVar10 = *(undefined8 *)(lVar2 + 0x10);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
                if ((uVar7 & 1) == 0) {
                  if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar9 = FUN_057e0998(*(long *)(lVar2 + 0x18),0,DAT_091ada40);
                  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550(uVar9,uVar9);
                  }
                  bVar4 = FUN_06fe4630(param_2,uVar9,&local_74,DAT_0919d098);
                  fVar3 = local_74;
                  if ((bVar4 & 1.0 <= local_74) != 0) {
                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar9 = FUN_057e0998(*(long *)(lVar2 + 0x18),0,DAT_091ada40);
                    System_Math__Max(0,local_74 - (float)(int)(fVar3 + 0.0001),0);
                    FUN_06fe2ae8(param_2,uVar9,DAT_0919d0b0);
                    uVar9 = *(undefined8 *)(lVar2 + 0x10);
                    iVar6 = System_Math__Max(1,*(undefined4 *)(lVar2 + 0x20),0);
                    if (*(int *)(DAT_09184160 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    CookingGraph_EstimatorBotScorer__Add
                              ((float)(int)(fVar3 + 0.0001) * (float)iVar6,param_2,uVar9);
                    bVar1 = false;
                  }
                }
              }
            }
          }
        }
        FUN_071bd288(&local_a0,DAT_091a5210);
      } while (!bVar1 && 0 < iVar5);
    }
    return;
  }
LAB_044195b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

