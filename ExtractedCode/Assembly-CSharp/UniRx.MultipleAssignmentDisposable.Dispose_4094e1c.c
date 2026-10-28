// rea decompile_all
// name: UniRx.MultipleAssignmentDisposable$$Dispose
// address: 0x4094e1c
// body: available
// range: 0x4094e1c-0x4094f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4094f94 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04094f18) */
/* WARNING: Removing unreachable block (ram,0x04094f90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_MultipleAssignmentDisposable__Dispose(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_09515d3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188550);
    DAT_09515d3a = 1;
  }
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_2c[0] = '\0';
  System_Threading_Monitor__Enter(local_28,local_2c,0);
  plVar7 = (long *)(param_1 + 0x18);
  lVar5 = *plVar7;
  if (*(int *)(DAT_09188550 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = **(long **)(DAT_09188550 + 0xb8);
  if (lVar5 == lVar2) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)*plVar7;
    if (*(int *)(DAT_09188550 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = **(long **)(DAT_09188550 + 0xb8);
    }
    *plVar7 = lVar2;
    thunk_FUN_03f5d7b8(plVar7);
  }
  if (local_2c[0] != '\0') {
    System_Threading_Monitor__Exit(local_28,0);
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_09185a58) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04094f74;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04094f74:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  return;
}

