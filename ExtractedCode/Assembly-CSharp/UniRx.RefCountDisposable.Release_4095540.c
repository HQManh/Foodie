// rea decompile_all
// name: UniRx.RefCountDisposable$$Release
// address: 0x4095540
// body: available
// range: 0x4095540-0x40956ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40956a8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04095628) */
/* WARNING: Removing unreachable block (ram,0x040956a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_RefCountDisposable__Release(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  char local_34 [4];
  
  if ((DAT_09515d40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09515d40 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar2,local_34,0);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  plVar8 = (long *)*puVar3;
  if (plVar8 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x24) = iVar1;
    plVar7 = (long *)0x0;
    if ((*(char *)(param_1 + 0x20) != '\0') && (iVar1 == 0)) {
      *puVar3 = 0;
      thunk_FUN_03f5d7b8(puVar3,0);
      plVar7 = plVar8;
    }
  }
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar2,0);
  }
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04095684;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_04095684:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  return;
}

