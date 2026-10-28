// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplySoundTimeScale
// address: 0x4254fe0
// body: available
// range: 0x4254fe0-0x42551e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42551dc to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42551e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplySoundTimeScale(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_09516f0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181888);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213b18);
    FUN_03f5c2a4(&DAT_091f76f8);
    FUN_03f5c2a4(&DAT_09208308);
    DAT_09516f0f = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(DAT_09181888 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar4 = (float)CakeOrder_AudioManagerCakeOrder__EvaluateMap(uVar8,uVar3);
  fVar5 = (float)CakeOrder_AudioManagerCakeOrder__EvaluateMap(uVar8,*(undefined8 *)(param_1 + 0x90))
  ;
  fVar9 = 0.01;
  fVar7 = 1.1;
  if (fVar5 <= 1.1) {
    fVar7 = fVar5;
  }
  fVar6 = fVar9;
  if (0.01 <= fVar5) {
    fVar6 = fVar7;
  }
  *(float *)(param_1 + 0xa0) = fVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  fVar5 = (float)CakeOrder_AudioManagerCakeOrder__EvaluateMap(uVar8,*(undefined8 *)(param_1 + 0x98))
  ;
  fVar7 = 1.2;
  if (fVar5 <= 1.2) {
    fVar7 = fVar5;
  }
  fVar6 = fVar9;
  if (0.01 <= fVar5) {
    fVar6 = fVar7;
  }
  *(float *)(param_1 + 0xa8) = fVar6;
  CakeOrder_AudioManagerCakeOrder__ApplySfxSpeedToSources(param_1);
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar7 = 10.0;
    if (fVar4 <= 10.0) {
      fVar7 = fVar4;
    }
    if (0.01 <= fVar4) {
      fVar9 = fVar7;
    }
    uVar1 = UnityEngine_Audio_AudioMixer__SetFloat(fVar9,*(long *)(param_1 + 0x20),DAT_09208308,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x20),0);
      uVar3 = System_String__Concat(DAT_09213b18,uVar3,DAT_091f76f8,0);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

