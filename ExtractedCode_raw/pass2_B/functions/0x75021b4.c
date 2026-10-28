// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetInstance
// address: 0x75021b4
// body: available
// range: 0x75021b4-0x750234f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7502324 to 0x75020b4 System.Globalization.DateTimeFormatInfo$$get_CurrentInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Globalization_DateTimeFormatInfo__GetInstance(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_09521685 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09171460);
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09185bf8);
    DAT_09521685 = 1;
  }
  uVar1 = DAT_09171460;
  if (param_1 == (long *)0x0) {
LAB_07502310:
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)System_Globalization_DateTimeFormatInfo__get_CurrentInfo();
    return plVar3;
  }
  lVar4 = *param_1;
  if (((*(byte *)(DAT_09182ff8 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
      (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09182ff8 + 0x130) * 8 + -8) ==
       DAT_09182ff8)) && ((char)param_1[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0750234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(**(code **)(lVar4 + 0x248))(param_1,*(undefined8 *)(lVar4 + 0x250));
    return plVar3;
  }
  if (lVar4 != DAT_09183570) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185bf8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_075022e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185bf8,0);
LAB_075022e8:
    param_1 = (long *)(*(code *)*puVar2)(param_1,uVar1,puVar2[1]);
    if ((param_1 == (long *)0x0) || (*param_1 != DAT_09183570)) goto LAB_07502310;
  }
  return param_1;
}

