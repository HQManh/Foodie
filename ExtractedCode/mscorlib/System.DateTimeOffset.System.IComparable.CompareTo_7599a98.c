// rea decompile_all
// name: System.DateTimeOffset$$System.IComparable.CompareTo
// address: 0x7599a98
// body: available
// range: 0x7599a98-0x7599be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7599be4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_DateTimeOffset__System_IComparable_CompareTo(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09521bda & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521bda = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  if (param_2 != (long *)0x0) {
    if (*param_2 != DAT_09183590) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09209480);
      System_ArgumentException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091c7a78);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    puVar2 = (undefined8 *)thunk_FUN_03f99594(param_2);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
    if (*(int *)(DAT_09183590 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_DateTimeOffset__get_UtcDateTime(&local_40);
    uVar4 = System_DateTimeOffset__get_UtcDateTime(param_1);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar5 = System_DateTime__op_GreaterThan(uVar4,uVar3);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_DateTime__op_LessThan(uVar4,uVar3);
      return -(uVar1 & 1);
    }
  }
  return 1;
}

