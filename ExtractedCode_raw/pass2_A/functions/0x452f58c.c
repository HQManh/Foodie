// rea decompile_all
// name: Utilities.UISliderMultipeImage$$ChangeValue
// address: 0x452f58c
// body: available
// range: 0x452f58c-0x452f6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452f68c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452f6a8 to 0x452f400 Utilities.UISliderMultipeImage$$UpdateFill (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452f6ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UISliderMultipeImage__ChangeValue(float param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_09518632 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195838);
    DAT_09518632 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09195838);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_3);
    fVar6 = 0.0;
    lVar5 = *(long *)(param_3 + 0x28);
    *(undefined4 *)(lVar2 + 0x18) = param_2;
    if (lVar5 != 0) {
      fVar6 = (float)*(int *)(lVar5 + 0x18);
    }
    lVar5 = *(long *)(param_3 + 0x38);
    if (param_1 <= fVar6) {
      fVar6 = param_1;
    }
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = fVar6;
    }
    *(float *)(param_3 + 0x24) = fVar1;
    if (lVar5 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_3,lVar5,0);
    }
    lVar5 = UnityEngine_Component__get_gameObject(param_3,0);
    if (lVar5 != 0) {
      uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar5,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = Utilities_UISliderMultipeImage_<>c__DisplayClass18_0__<ChangeValue>g__IEChangeValue_0
                          (lVar2);
        uVar4 = UnityEngine_MonoBehaviour__StartCoroutine(param_3,uVar4,0);
        *(undefined8 *)(param_3 + 0x38) = uVar4;
        thunk_FUN_03f5d7b8((long *)(param_3 + 0x38));
        return;
      }
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x24);
      Utilities_UISliderMultipeImage__UpdateFill(param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

