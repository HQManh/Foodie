// rea decompile_all
// name: FUN_0439f9f4
// address: 0x439f9f4
// body: available
// range: 0x439f9f4-0x439fb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439fb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0439f9f4(undefined8 *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if (DAT_09517a8b == '\0') {
    FUN_03f5c2a4(&DAT_09181978);
    DAT_09517a8b = '\x01';
  }
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0439faec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28))
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(DAT_09181978 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09181978);
  }
  lVar2 = *(long *)(param_3 + 0x20);
  uVar1 = *(undefined2 *)((long)param_1 + 0xc);
  uVar8 = **(undefined8 **)(DAT_09181978 + 0xb8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c(lVar2);
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0439fb00;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,lVar2,2);
LAB_0439fb00:
                    /* WARNING: Could not recover jumptable at 0x0439fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar8,param_2,uVar1,puVar3[1]);
  return;
}

