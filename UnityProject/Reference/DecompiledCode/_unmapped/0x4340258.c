// rea decompile_all
// name: FUN_04340258
// address: 0x4340258
// body: available
// range: 0x4340258-0x4340363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434035c to 0x62098cc FUN_062098cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4340360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04340258(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_03f5c2a4(&DAT_091866a0);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_03f95ac8(param_4);
    }
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_06ab3644(param_3,param_1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar1 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091866a0) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04340334;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a0,0);
LAB_04340334:
  uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  FUN_062098cc(param_2,uVar3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x28));
  return;
}

