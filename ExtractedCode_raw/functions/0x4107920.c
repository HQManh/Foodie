// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewFrying$$Stop
// address: 0x4107920
// body: available
// range: 0x4107920-0x4107a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4107a7c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4107a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4107a84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewFrying__Stop(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09516199 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516199 = 1;
  }
  DG_Tweening_TweenExtensions__Complete(*(undefined8 *)(param_1 + 0x50),0);
  if (*(long *)(param_1 + 0x40) != 0) {
    AnhPD_FoodOrder_BoilOil__StopBoiling();
  }
  uVar1 = UnityEngine_Component__get_transform(param_1,0);
  DG_Tweening_ShortcutExtensions__DOComplete(uVar1,0,0);
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_04107a80;
  UnityEngine_ParticleSystem__Stop(*(long *)(param_1 + 0x30),0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_04107a80;
    UnityEngine_ParticleSystem__Stop(*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_04107a80;
    UnityEngine_ParticleSystem__Clear(*(long *)(param_1 + 0x38),0);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    DG_Tweening_TweenExtensions__Complete(*(long *)(param_1 + 0x58),0);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar3) {
      lVar6 = 0;
      do {
        if (uVar3 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
        if (lVar4 == 0) goto LAB_04107a80;
        UnityEngine_SpriteRenderer__set_color(0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar4,0);
        AnhPD_APDUtilities__SetAlpha(0,lVar4,0);
        uVar3 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar3);
    }
    *(undefined2 *)(param_1 + 100) = 0;
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 != 0) {
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      return;
    }
  }
LAB_04107a80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

