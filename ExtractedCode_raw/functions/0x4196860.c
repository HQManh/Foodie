// rea decompile_all
// name: Datpt.DebugCustom$$LogProfilerFunction
// address: 0x4196860
// body: available
// range: 0x4196860-0x4196a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4196a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4196a54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4196a60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_DebugCustom__LogProfilerFunction(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  long local_48;
  undefined8 local_38;
  
  if ((DAT_095167e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_09184a48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09202fb8);
    DAT_095167e1 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTime__get_Now(0);
  if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835f0);
  }
  local_38 = System_DateTime__op_Subtraction
                       (uVar1,*(undefined8 *)(*(long *)(DAT_091835f0 + 0xb8) + 8),0);
  if (*(int *)(DAT_09184a48 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184a48);
  }
  lVar2 = thunk_FUN_03f6c484(1,0);
  lVar5 = *(long *)(*(long *)(DAT_091835f0 + 0xb8) + 0x10);
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
  local_48 = lVar2 - lVar5;
  uVar1 = FUN_03f5c42c(DAT_09535440,&local_48);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  local_50 = System_TimeSpan__get_TotalMilliseconds(&local_38,0);
  uVar4 = FUN_03f5c42c(DAT_09535458,&local_50);
  lVar2 = System_String__Format(DAT_09202fb8,param_1,uVar1,uVar4,0);
  if (plVar3 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

