// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$CheckTicksRange
// address: 0x753a0fc
// body: available
// range: 0x753a0fc-0x753a2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753a2d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_UmAlQuraCalendar__CheckTicksRange(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_095218be & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218be = 1;
  }
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_DateTime__get_Ticks(*(long *)(DAT_0918c5c0 + 0xb8) + 8,0);
  if (lVar1 <= param_1) {
    if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = System_DateTime__get_Ticks(*(long *)(DAT_0918c5c0 + 0xb8) + 0x10,0);
    if (param_1 <= lVar1) {
      return;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_0920d698);
  uVar3 = System_Environment__GetResourceString(uVar3,0);
  thunk_FUN_03fc39d4(&DAT_0918c5c0);
  FUN_039afb80();
  lVar1 = thunk_FUN_03fc39d4(&DAT_0918c5c0);
  local_38 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09183548);
  uVar4 = FUN_03f5c42c(uVar4,&local_38);
  lVar1 = thunk_FUN_03fc39d4(&DAT_0918c5c0);
  local_40 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar5 = thunk_FUN_03fc39d4(&DAT_09183548);
  uVar5 = FUN_03f5c42c(uVar5,&local_40);
  uVar2 = System_String__Format(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09223ea0);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091dd9d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

