// rea decompile_all
// name: Newtonsoft.Json.DefaultJsonNameTable$$AddEntry
// address: 0x763d174
// body: available
// range: 0x763d174-0x763d287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763d274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763d278 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763d284 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_DefaultJsonNameTable__AddEntry(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_09522276 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190090);
    DAT_09522276 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20) & param_3;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_0763d278:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar6 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    lVar4 = thunk_FUN_03f9944c(DAT_09190090);
    Newtonsoft_Json_DefaultJsonNameTable_Entry___ctor(lVar4,param_2,param_3,uVar6);
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if (*(uint *)(plVar5 + 3) <= uVar1) goto LAB_0763d278;
      plVar5[(long)(int)uVar1 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar5 + (long)(int)uVar1 + 4,lVar4);
      iVar2 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar2 + 1;
      if (iVar2 == *(int *)(param_1 + 0x20)) {
        Newtonsoft_Json_DefaultJsonNameTable__Grow(param_1);
      }
      if (lVar4 != 0) {
        return *(undefined8 *)(lVar4 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

