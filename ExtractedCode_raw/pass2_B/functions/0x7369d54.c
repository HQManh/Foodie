// rea decompile_all
// name: MaxSdkAndroid$$SetUserData
// address: 0x7369d54
// body: available
// range: 0x7369d54-0x7369f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7369ef4 to 0x85bfd3c UnityEngine.AndroidJavaObject$$_CallStatic (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7369ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7369efc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7369f08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkAndroid__SetUserData(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_095208e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09222848);
    FUN_03f5c2a4(&DAT_09218d60);
    DAT_095208e7 = 1;
  }
  if (param_1 == 0) {
    if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = DAT_091c0270;
    lVar5 = **(long **)(DAT_09187f20 + 0xb8);
    lVar4 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar4 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar4 = *(long *)(lVar2 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (lVar5 != 0) {
      plVar3 = (long *)**(long **)(lVar2 + 0xb8);
      uVar1 = DAT_09218d60;
LAB_07369ee8:
      UnityEngine_AndroidJavaObject___CallStatic(lVar5,uVar1,plVar3,0);
      return;
    }
  }
  else {
    uVar1 = MaxUserData__ToDictionary(param_1);
    lVar2 = AppLovinMax_ThirdParty_MiniJson_Json_Serializer__Serialize(uVar1,0);
    if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187f20);
    }
    lVar5 = **(long **)(DAT_09187f20 + 0xb8);
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar3 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      uVar1 = DAT_09222848;
      if (lVar5 != 0) goto LAB_07369ee8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

