// rea decompile_all
// name: System.Threading.Tasks.ValueTask$$get_IsCompleted
// address: 0x762d404
// body: available
// range: 0x762d404-0x762d507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762d504 to 0x762c834 System.Threading.Tasks.Task$$get_IsCompleted (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Threading_Tasks_ValueTask__get_IsCompleted(undefined8 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_095221c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186940);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221c0 = 1;
  }
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    lVar4 = *plVar7;
    if ((*(byte *)(DAT_0918b8c8 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 + -8) ==
        DAT_0918b8c8)) {
      uVar5 = System_Threading_Tasks_Task__get_IsCompleted(plVar7);
      return uVar5;
    }
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar1 = *(undefined2 *)(param_1 + 1);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09186940) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0762d4d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186940,0);
LAB_0762d4d4:
    iVar2 = (*(code *)*puVar3)(plVar7,uVar1,puVar3[1]);
    uVar5 = (ulong)(iVar2 != 0);
  }
  return uVar5;
}

