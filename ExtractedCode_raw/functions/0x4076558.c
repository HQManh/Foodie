// rea decompile_all
// name: FUN_04076558
// address: 0x4076558
// body: available
// range: 0x4076558-0x40766a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4076698 to 0x8655004 UnityEngine.Awaitable$$SetContinuation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40766a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40766a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04076558(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = *(undefined8 **)(param_4 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_03f5c2a4(&DAT_091963a0);
    puVar4 = *(undefined8 **)(param_4 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_03f95ac8(param_4);
      puVar4 = *(undefined8 **)(param_4 + 0x38);
    }
  }
  plVar1 = (long *)FUN_04e75208(param_1,*puVar4);
  lVar3 = *(long *)(*(long *)(param_4 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
    lVar9 = param_3[1];
    lVar8 = *param_3;
    lVar7 = param_3[3];
    lVar3 = param_3[2];
    plVar1[6] = param_3[4];
    plVar1[3] = lVar9;
    plVar1[2] = lVar8;
    plVar1[5] = lVar7;
    plVar1[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar1 + 3,0);
    lVar3 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091963a0) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0407666c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091963a0,2);
LAB_0407666c:
    uVar2 = (*(code *)*puVar4)(plVar1,puVar4[1]);
    if (*param_2 != 0) {
      UnityEngine_Awaitable__SetContinuation(*param_2,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

