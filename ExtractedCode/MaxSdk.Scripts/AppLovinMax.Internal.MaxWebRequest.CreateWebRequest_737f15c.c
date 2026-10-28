// rea decompile_all
// name: AppLovinMax.Internal.MaxWebRequest$$CreateWebRequest
// address: 0x737f15c
// body: available
// range: 0x737f15c-0x737f3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737f3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AppLovinMax_Internal_MaxWebRequest__CreateWebRequest(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095209ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_0918c7d8);
    FUN_03f5c2a4(&DAT_0918c908);
    DAT_095209ef = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uVar1 = AppLovinMax_Internal_MaxWebRequest__BuildURL(param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0737f3b4;
  uVar2 = AppLovinMax_Internal_MaxWebRequestExtension__ToHttpMethodString
                    (*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
  lVar3 = thunk_FUN_03f9944c(DAT_0918c7d8);
  UnityEngine_Networking_UnityWebRequest___ctor(lVar3,uVar1,uVar2,0);
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar3 == 0)) goto LAB_0737f3b4;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler
            (lVar3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0737f3b4;
  UnityEngine_Networking_UnityWebRequest__set_timeout
            (lVar3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x4c),0);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_0737f3b4;
  if (*(long *)(lVar6 + 0x38) == 0) {
    uVar1 = *(undefined8 *)(lVar6 + 0x40);
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_String__IsNullOrEmpty(uVar1,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_0737f3b4;
      goto LAB_0737f2bc;
    }
  }
  else {
LAB_0737f2bc:
    if (*(long *)(lVar6 + 0x38) == 0) {
      uVar1 = *(undefined8 *)(lVar6 + 0x40);
    }
    else {
      uVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Serializer__Serialize(*(long *)(lVar6 + 0x38),0);
    }
    plVar5 = (long *)System_Text_Encoding__get_UTF8(0);
    if (plVar5 == (long *)0x0) goto LAB_0737f3b4;
    uVar1 = (**(code **)(*plVar5 + 600))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x260));
    uVar2 = thunk_FUN_03f9944c(DAT_0918c908);
    UnityEngine_Networking_UploadHandlerRaw___ctor(uVar2,uVar1,0);
    UnityEngine_Networking_UnityWebRequest__set_uploadHandler(lVar3,uVar2,0);
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar6 != 0)) {
    FUN_06fd8888(&local_60,lVar6,DAT_0919fed0);
    while (uVar4 = FUN_072753d4(&local_60,DAT_091a6890), (uVar4 & 1) != 0) {
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(lVar3,local_50,uStack_48,0);
    }
    FUN_072754f4(&local_60,DAT_091a6888);
    return lVar3;
  }
LAB_0737f3b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

