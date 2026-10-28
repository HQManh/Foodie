// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$RegisterInventory
// address: 0x4498874
// body: available
// range: 0x4498874-0x4498cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4498c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4498c6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4498cf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__RegisterInventory
               (long param_1,int *param_2,int param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095181af & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0138);
    FUN_03f5c2a4(&DAT_091c6460);
    FUN_03f5c2a4(&DAT_0919c878);
    FUN_03f5c2a4(&DAT_0919c888);
    FUN_03f5c2a4(&DAT_091c9460);
    FUN_03f5c2a4(&DAT_091c97a0);
    FUN_03f5c2a4(&DAT_091c9928);
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_0918efb0);
    FUN_03f5c2a4(&DAT_091ac0e0);
    FUN_03f5c2a4(&DAT_091e6c70);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181af = 1;
  }
  uStack_98 = *(undefined8 *)(param_2 + 2);
  local_a0 = *(undefined8 *)param_2;
  local_90 = *(undefined8 *)(param_2 + 4);
  CookingGraph_Execution_CookingExecution__RequireAddress(&local_a0);
  if (*param_2 == 4) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09200a50;
  }
  else {
    if (0 < param_3) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_04498c68:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_78 = *(undefined8 *)(param_2 + 2);
      local_80 = *(undefined8 *)param_2;
      local_70 = *(undefined8 *)(param_2 + 4);
      uVar2 = FUN_06e86438(*(long *)(param_1 + 0x10),&local_80,DAT_0919c888);
      lVar3 = DAT_091c0138;
      if ((uVar2 & 1) == 0) {
        if (param_4 == 0) {
          lVar8 = *(long *)(DAT_091c0138 + 0x38);
          if (lVar8 == 0) {
            FUN_03f95ac8(DAT_091c0138);
            lVar8 = *(long *)(lVar3 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          param_4 = **(long **)(lVar3 + 0xb8);
        }
        lVar3 = FUN_04b0451c(param_4,DAT_091cadc0);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) <= param_3) {
            uVar4 = thunk_FUN_03f9944c(DAT_09178768);
            FUN_053136a4(uVar4,param_1,DAT_091c6460,0);
            uVar2 = FUN_04ab6608(lVar3,uVar4,DAT_091c9460);
            if ((uVar2 & 1) == 0) {
              if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar9 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
              lVar8 = puVar9[3];
              if (lVar8 == 0) {
                if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar9 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
                }
                uVar4 = *puVar9;
                lVar8 = thunk_FUN_03f9944c(DAT_09178778);
                FUN_05313f40(lVar8,uVar4,DAT_091e6c70,0);
                plVar5 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x18);
                *plVar5 = lVar8;
                thunk_FUN_03f5d7b8(plVar5,lVar8);
              }
              uVar4 = FUN_04af142c(lVar3,lVar8,DAT_091ca3b8);
              uVar4 = FUN_04add45c(uVar4,DAT_091c9928);
              iVar1 = FUN_04ad8358(uVar4,DAT_091c97a0);
              if (iVar1 == *(int *)(lVar3 + 0x18)) {
                lVar8 = thunk_FUN_03f9944c(DAT_0918efb0);
                CookingGraph_Execution_CookingExecution_Inventory___ctor();
                if (lVar8 != 0) {
                  *(int *)(lVar8 + 0x10) = param_3;
                  if (*(long *)(lVar8 + 0x18) != 0) {
                    FUN_057484b8(*(long *)(lVar8 + 0x18),lVar3,DAT_091ac0e0);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      uStack_78 = *(undefined8 *)(param_2 + 2);
                      local_80 = *(undefined8 *)param_2;
                      local_70 = *(undefined8 *)(param_2 + 4);
                      FUN_06e861a8(*(long *)(param_1 + 0x10),&local_80,lVar8,DAT_0919c878);
                      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                        uVar2 = 0;
                        uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                        piVar11 = (int *)(lVar3 + 0x2c);
                        do {
                          if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c558();
                          }
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_04498c68;
                          uVar4 = *(undefined8 *)(piVar11 + -3);
                          iVar1 = *piVar11;
                          FUN_053e230c(*(long *)(param_1 + 0x20),uVar4,DAT_091a8308);
                          if (iVar1 == 2) {
                            if (*(long *)(param_1 + 0x30) == 0) goto LAB_04498c68;
                            FUN_053e230c(*(long *)(param_1 + 0x30),uVar4,DAT_091a8308);
                          }
                          uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
                          uVar2 = uVar2 + 1;
                          piVar11 = piVar11 + 6;
                        } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
                      }
                      return;
                    }
                  }
                }
                goto LAB_04498c68;
              }
            }
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar4 = thunk_FUN_03f9944c();
          puVar6 = &DAT_09205bf8;
          goto LAB_04498ccc;
        }
        goto LAB_04498c68;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09205630;
  }
LAB_04498ccc:
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentException___ctor(uVar4,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c64a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar7);
}

