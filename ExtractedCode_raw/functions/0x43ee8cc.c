// rea decompile_all
// name: Coffee.UIEffects.UIEffectBase$$OnAfterCanvasRebuild
// address: 0x43ee8cc
// body: available
// range: 0x43ee8cc-0x43eea63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43eea4c to 0x43eea94 Coffee.UIEffects.UIEffectContext$$UpdateViewMatrix (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43eea60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectBase__OnAfterCanvasRebuild(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09517dd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517dd6 = 1;
  }
  lVar6 = param_1[5];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = Coffee_UIEffects_UIEffectBase__get_graphic(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = Coffee_UIEffects_UIEffectBase__get_canvas(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
      if (((uVar1 & 1) != 0) &&
         (lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0)),
         lVar6 != 0)) {
        lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
        if (lVar6 != 0) {
          if ((((*(int *)(lVar6 + 0x40) == 0) && (*(int *)(lVar6 + 0x138) == 0)) &&
              (*(int *)(lVar6 + 0x1a4) == 0)) && (*(int *)(lVar6 + 0x108) != 2)) {
            return;
          }
          lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
          uVar2 = Coffee_UIEffects_UIEffectBase__GetCurrentMaterial(param_1);
          uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
          lVar4 = Coffee_UIEffects_UIEffectBase__get_canvas(param_1);
          if ((lVar4 != 0) && (uVar5 = UnityEngine_Canvas__get_rootCanvas(lVar4,0), lVar6 != 0)) {
            Coffee_UIEffects_UIEffectContext__UpdateViewMatrix(lVar6,uVar2,uVar3,uVar5);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

