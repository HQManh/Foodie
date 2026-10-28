// rea decompile_all
// name: FUN_0756de60
// address: 0x756de60
// body: available
// range: 0x756de60-0x756dfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756df14 to 0x75c9ba8 System.SpanHelpers$$IndexOf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756df94 to 0x75ca624 System.SpanHelpers$$IndexOf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756dfb8 to 0x4d5aa90 FUN_04d5aa90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0756de60(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_4 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_03f95ac8(param_4);
    puVar3 = *(undefined8 **)(param_4 + 0x38);
  }
  uVar4 = *puVar3;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  uVar1 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
  uVar2 = System_Type__op_Equality(uVar4,uVar1,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = FUN_04c072b0(param_1,param_2,(*(undefined8 **)(param_4 + 0x38))[2]);
    System_SpanHelpers__IndexOf(uVar4,param_3,param_2 & 0xffffffff,0);
    return;
  }
  uVar4 = **(undefined8 **)(param_4 + 0x38);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
  uVar2 = System_Type__op_Equality(uVar4,uVar1,0);
  uVar4 = FUN_04c072b0(param_1,param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
  if ((uVar2 & 1) != 0) {
    System_SpanHelpers__IndexOf(uVar4,param_3 & 0xff,param_2 & 0xffffffff,0);
    return;
  }
  FUN_04d5aa90(uVar4,param_3,param_2 & 0xffffffff,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x38))
  ;
  return;
}

