// rea decompile_all
// name: UniRx.SerialDisposable$$set_Disposable
// address: 0x409aaf0
// body: available
// range: 0x409aaf0-0x409aca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409aca0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0409abb4) */
/* WARNING: Removing unreachable block (ram,0x0409ac9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_SerialDisposable__set_Disposable(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09515d92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09515d92 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_3c[0] = '\0';
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  bVar1 = *(char *)(param_1 + 0x20) == '\0';
  if (bVar1) {
    plVar7 = (long *)(param_1 + 0x18);
    plVar6 = (long *)*plVar7;
    *plVar7 = (long)param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
  }
  else {
    plVar6 = (long *)0x0;
  }
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(local_38,0);
  }
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0409ac10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0409ac10:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (param_2 != (long *)0x0 && !bVar1) {
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0409ac7c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a58,0);
LAB_0409ac7c:
    (*(code *)*puVar2)(param_2,puVar2[1]);
  }
  return;
}

