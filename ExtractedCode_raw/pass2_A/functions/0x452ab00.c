// rea decompile_all
// name: Utilities.UIImageFlyToCounter$$ShowCurrencyFly
// address: 0x452ab00
// body: available
// range: 0x452ab00-0x452ac2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452ac28 to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452ac2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIImageFlyToCounter__ShowCurrencyFly
               (undefined4 param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_09518617 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09195668);
    DAT_09518617 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195668);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(param_5,0);
    if ((uVar2 & 1) == 0) {
      param_5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x90) = param_5;
    }
    else {
      *(undefined8 *)(param_2 + 0x90) = param_5;
    }
    thunk_FUN_03f5d7b8(param_2 + 0x90,param_5);
    lVar3 = *(long *)(param_2 + 0x20);
    *(float *)(lVar1 + 0x18) = (float)param_3 / (float)param_4;
    if (lVar3 != 0) {
      auVar5 = UnityEngine_Component__get_transform(lVar3,0);
      uVar4 = Utilities_UIImageFlyToCounter_<>c__DisplayClass29_0__<ShowCurrencyFly>g__IESpawnGoldFlyIterate_0
                        (param_1,lVar1,auVar5._8_8_,param_4,auVar5._0_8_,param_6);
      UnityEngine_MonoBehaviour__StartCoroutine(param_2,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

