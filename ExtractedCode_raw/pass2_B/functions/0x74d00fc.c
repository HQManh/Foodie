// rea decompile_all
// name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter$$GetResult
// address: 0x74d00fc
// body: available
// range: 0x74d00fc-0x74d0233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d0230 to 0x74d14d8 System.Runtime.CompilerServices.TaskAwaiter$$ValidateEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter__GetResult
               (undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09521512 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521512 = 1;
  }
  if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_0951f904 == '\0') {
    FUN_03f5c2a4(&DAT_09186940);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_0951f904 = '\x01';
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar6;
  if ((*(byte *)(DAT_0918b8c8 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 + -8) ==
      DAT_0918b8c8)) {
    System_Runtime_CompilerServices_TaskAwaiter__ValidateEnd(plVar6);
    return;
  }
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar1 = *(undefined2 *)(param_1 + 1);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_09186940) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_074d020c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186940,2);
LAB_074d020c:
                    /* WARNING: Could not recover jumptable at 0x074d0220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}

