// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$RetargetWaiting
// address: 0x449e880
// body: available
// range: 0x449e880-0x449eb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449eb80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449eb84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__RetargetWaiting
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095181c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091b23f8);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_0917e138);
    FUN_03f5c2a4(&DAT_091e6d40);
    FUN_03f5c2a4(&DAT_091e6d48);
    FUN_03f5c2a4(&DAT_0918ef70);
    DAT_095181c5 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918ef70);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    uVar3 = thunk_FUN_03f9944c(DAT_0917e138);
    FUN_05d78cfc(uVar3,lVar2,DAT_091e6d40,0);
    if (lVar7 != 0) {
      lVar7 = FUN_057e1328(lVar7,uVar3,DAT_091b23f8);
      if (((lVar7 != 0) && (*(char *)(lVar7 + 0x88) == '\0')) && (*(int *)(lVar7 + 0x48) == 4)) {
        uStack_58 = param_3[1];
        local_60 = *param_3;
        local_50 = param_3[2];
        uVar4 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_60,lVar2 + 0x18);
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)(lVar2 + 0x18);
          if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x10), lVar6 != 0)) {
            uVar1 = *(uint *)((long)param_3 + 0x14);
            if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0449eb84;
            lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x10) != *(int *)(lVar7 + 0x20)) {
                return 0;
              }
              lVar5 = *(long *)(lVar5 + 0x18);
              if (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_0449eb84:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (*(char *)(lVar5 + (int)uVar1 + 0x20) != '\0') {
                  return 0;
                }
                uStack_78 = param_3[1];
                local_80 = *param_3;
                local_70 = param_3[2];
                uVar4 = CookingGraph_Execution_CookingExecution__Claimed(param_1,&local_80);
                if ((uVar4 & 1) != 0) {
                  return 0;
                }
                if ((*(long *)(lVar2 + 0x18) != 0) &&
                   (lVar5 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar5 != 0)) {
                  if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)param_3 + 0x14)) goto LAB_0449eb84;
                  lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)((long)param_3 + 0x14) * 8 + 0x20);
                  if (lVar5 != 0) {
                    uVar8 = *(undefined8 *)(lVar5 + 0x28);
                    uVar3 = thunk_FUN_03f9944c(DAT_09178b98);
                    FUN_05315754(uVar3,lVar2,DAT_091e6d48,0);
                    uVar4 = FUN_04ab6928(uVar8,uVar3,DAT_091c9498);
                    if ((uVar4 & 1) != 0) {
                      return 0;
                    }
                    uStack_b8 = *(undefined8 *)(lVar7 + 0x38);
                    local_c0 = *(undefined8 *)(lVar7 + 0x30);
                    local_b0 = *(undefined8 *)(lVar7 + 0x40);
                    uStack_d8 = param_3[1];
                    local_e0 = *param_3;
                    local_d0 = param_3[2];
                    uVar3 = *(undefined8 *)(lVar7 + 0x18);
                    uStack_a0 = 0;
                    local_a8 = 0;
                    uStack_90 = 0;
                    local_98 = 0;
                    thunk_FUN_03f5d7b8((ulong)&local_c0 | 8,0);
                    uStack_a0 = uStack_d8;
                    local_a8 = local_e0;
                    local_98 = local_d0;
                    thunk_FUN_03f5d7b8(&uStack_a0,0);
                    *(undefined8 *)(lVar7 + 0x60) = uVar3;
                    *(undefined8 *)(lVar7 + 0x38) = uStack_b8;
                    *(undefined8 *)(lVar7 + 0x30) = local_c0;
                    *(undefined8 *)(lVar7 + 0x48) = local_a8;
                    *(undefined8 *)(lVar7 + 0x40) = local_b0;
                    *(undefined8 *)(lVar7 + 0x58) = local_98;
                    *(undefined8 *)(lVar7 + 0x50) = uStack_a0;
                    uStack_90 = uVar3;
                    thunk_FUN_03f5d7b8(lVar7 + 0x38,0);
                    uStack_f8 = param_3[1];
                    local_100 = *param_3;
                    local_f0 = param_3[2];
                    CookingGraph_Execution_CookingExecution__Emit
                              (param_1,6,&local_100,*(undefined8 *)(lVar7 + 0x10));
                    return 1;
                  }
                }
              }
            }
          }
          goto LAB_0449eb80;
        }
      }
      return 0;
    }
  }
LAB_0449eb80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

