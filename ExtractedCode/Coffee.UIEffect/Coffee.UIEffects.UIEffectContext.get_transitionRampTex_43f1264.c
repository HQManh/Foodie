// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$get_transitionRampTex
// address: 0x43f1264
// body: available
// range: 0x43f1264-0x43f14c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f14c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f14c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Coffee_UIEffects_UIEffectContext__get_transitionRampTex
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  if ((DAT_09517de4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a9170);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517de4 = 1;
  }
  if (*(long *)(param_5 + 0xa8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_5 + 0x1f8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x158);
      if (lVar5 == 0) goto LAB_043f14c0;
      uVar6 = FUN_05565e34(lVar5,DAT_091a9170);
      *(undefined8 *)(param_5 + 0x1f8) = uVar6;
      thunk_FUN_03f5d7b8(param_5 + 0x1f8,uVar6);
    }
    if (*(char *)(param_5 + 0x201) != '\0') {
      *(undefined1 *)(param_5 + 0x201) = 0;
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x150);
      if (lVar5 == 0) {
LAB_043f14c0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(ulong *)(lVar5 + 0x18);
      iVar3 = (int)uVar4;
      uVar2 = iVar3 - 1;
      if (0 < iVar3) {
        uVar7 = 0;
        lVar5 = 0x20;
        do {
          if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_5 + 0xa8) == 0) goto LAB_043f14c0;
          lVar8 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x150);
          UnityEngine_Gradient__Evaluate
                    ((float)(int)uVar7 / (float)(int)uVar2,*(long *)(param_5 + 0xa8),0);
          uVar9 = Coffee_UIEffects_UIEffectContext__ApplyColorSpace();
          if (lVar8 == 0) goto LAB_043f14c0;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_043f14c4;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined4 *)(lVar8 + lVar5);
          lVar5 = lVar5 + 0x10;
          *puVar1 = uVar9;
          puVar1[1] = param_2;
          puVar1[2] = param_3;
          puVar1[3] = param_4;
        } while ((uVar4 & 0xffffffff) != uVar7);
      }
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x150);
      if (lVar5 == 0) goto LAB_043f14c0;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_043f14c4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar8 = *(long *)(param_5 + 0x1f8);
      *(undefined4 *)(lVar5 + (long)(int)uVar2 * 0x10 + 0x2c) = 0;
      if (lVar8 == 0) goto LAB_043f14c0;
      UnityEngine_Texture__set_wrapMode(lVar8,1,0);
      if (*(long *)(param_5 + 0xa8) == 0) goto LAB_043f14c0;
      lVar5 = *(long *)(param_5 + 0x1f8);
      iVar3 = UnityEngine_Gradient__get_mode(*(long *)(param_5 + 0xa8),0);
      if (lVar5 == 0) goto LAB_043f14c0;
      UnityEngine_Texture__set_filterMode(lVar5,iVar3 == 0,0);
      lVar5 = *(long *)(param_5 + 0x1f8);
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043f14c0;
      UnityEngine_Texture2D__SetPixels
                (lVar5,*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x150),0);
      if (*(long *)(param_5 + 0x1f8) == 0) goto LAB_043f14c0;
      UnityEngine_Texture2D__Apply(*(long *)(param_5 + 0x1f8),0);
    }
    uVar6 = *(undefined8 *)(param_5 + 0x1f8);
  }
  return uVar6;
}

