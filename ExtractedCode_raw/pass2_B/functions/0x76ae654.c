// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonContract.<>c__DisplayClass58_0$$<CreateSerializationErrorCallback>b__0
// address: 0x76ae654
// body: available
// range: 0x76ae654-0x76ae793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ae780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ae784 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ae790 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0__<CreateSerializationErrorCallback>b__0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09522672 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918b338);
    DAT_09522672 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,2);
  local_60 = param_3;
  uStack_58 = param_4;
  lVar2 = FUN_03f5c42c(DAT_0918b338,&local_60);
  if (plVar1 == (long *)0x0) {
LAB_076ae780:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_076ae788:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if ((param_5 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_076ae788;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_5;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_5);
      if (lVar5 != 0) {
        System_Reflection_MethodBase__Invoke(lVar5,param_2,plVar1,0);
        return;
      }
      goto LAB_076ae780;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

