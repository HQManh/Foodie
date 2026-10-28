// rea decompile_all
// name: MessagePack.MessagePackWriter$$Write
// address: 0x73a184c
// body: available
// range: 0x73a184c-0x73a1957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a1950 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73a1954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackWriter__Write(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  
  if ((DAT_09520b53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d36e0);
    FUN_03f5c2a4(&DAT_0918b398);
    DAT_09520b53 = 1;
  }
  local_38 = 0;
  if (param_2 == 0) {
    MessagePack_MessagePackWriter__WriteNil(param_1);
    return;
  }
  lVar3 = FUN_06430038(param_1,*(undefined4 *)(param_2 + 0x10),(long)&local_38 + 4,&local_38,0);
  iVar1 = thunk_FUN_03f68190(0);
  if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b398);
  }
  plVar4 = (long *)**(long **)(DAT_0918b398 + 0xb8);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x288))
                      (plVar4,param_2 + iVar1,*(undefined4 *)(param_2 + 0x10),(int)local_38 + lVar3,
                       local_38._4_4_,*(undefined8 *)(*plVar4 + 0x290));
    FUN_06430148(param_1,lVar3,local_38 & 0xffffffff,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

