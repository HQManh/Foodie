// rea decompile_all
// name: MaxSdkAndroid$$SetRewardedAdExtraParameter
// address: 0x736f9d8
// body: available
// range: 0x736f9d8-0x736fb67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x736fb50 to 0x85bfd3c UnityEngine.AndroidJavaObject$$_CallStatic (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x736fb54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736fb58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736fb64 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkAndroid__SetRewardedAdExtraParameter(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952091f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09222410);
    FUN_03f5c2a4(&DAT_09222798);
    DAT_0952091f = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(param_1,DAT_09222410);
  if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = **(long **)(DAT_09187f20 + 0xb8);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,3);
  if (plVar1 == (long *)0x0) {
LAB_0736fb58:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((param_1 != 0) &&
     (lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_0736fb5c:
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = param_1;
    thunk_FUN_03f5d7b8(plVar1 + 4,param_1);
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_0736fb5c;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_2;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_2);
      if ((param_3 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_0736fb5c;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = param_3;
        thunk_FUN_03f5d7b8(plVar1 + 6,param_3);
        if (lVar4 != 0) {
          UnityEngine_AndroidJavaObject___CallStatic(lVar4,DAT_09222798,plVar1,0);
          return;
        }
        goto LAB_0736fb58;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

