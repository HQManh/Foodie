// rea decompile_all
// name: System.Runtime.Remoting.ObjRef$$get_ServerType
// address: 0x747ed2c
// body: available
// range: 0x747ed2c-0x747ee6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747ee6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_ObjRef__get_ServerType(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0952125c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186468);
    FUN_03f5c2a4(&DAT_091d4a48);
    FUN_03f5c2a4(&DAT_091dc128);
    DAT_0952125c = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x38);
  uVar7 = *puVar5;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__op_Equality(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_09186468) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0747ee04;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186468,0);
LAB_0747ee04:
    uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar7 = FUN_03f5c738(uVar7,DAT_091dc128,DAT_091d4a48);
    *puVar5 = uVar7;
    thunk_FUN_03f5d7b8(puVar5,uVar7);
  }
  return *puVar5;
}

