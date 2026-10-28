// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineMixer$$Play
// address: 0x410e138
// body: available
// range: 0x410e138-0x410e363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410e360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineMixer__Play(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_095161d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5480);
    FUN_03f5c2a4(&DAT_091a5488);
    FUN_03f5c2a4(&DAT_091a5490);
    FUN_03f5c2a4(&DAT_091b2e60);
    DAT_095161d9 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lVar1 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = AnhPD_FoodOrder_GroupViewSpineMixer__StateOf(param_2);
    if ((lVar1 != 0) &&
       (fVar8 = (float)AnhPD_FoodOrder_GroupViewSpineMixer__ProcessLength(param_2), 0.0 < fVar8)) {
      lVar2 = Spine_AnimationState__GetCurrent(lVar1,0,0);
      fVar10 = 0.0;
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x6c) == '\0')) {
        fVar9 = *(float *)(lVar2 + 0x84) - *(float *)(lVar2 + 0x94);
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = *(float *)(lVar2 + 0xa4);
        if (*(float *)(lVar2 + 0xa4) <= 0.01) {
          fVar9 = 0.01;
        }
        fVar10 = fVar10 / fVar9;
      }
      fVar10 = param_1 - fVar10;
      if (param_1 <= 0.0) {
        fVar10 = fVar8;
      }
      fVar8 = fVar8 / fVar10;
      if (fVar10 <= 0.05) {
        fVar8 = 1.0;
      }
      if (*(long *)(param_2 + 0x60) == 0) goto LAB_0410e360;
      FUN_057e185c(&local_58,*(long *)(param_2 + 0x60),DAT_091b2e60);
      bVar7 = true;
      fVar10 = 1.0;
      if (1.0 <= fVar8) {
        fVar10 = fVar8;
      }
      while (uVar3 = FUN_071bd28c(&local_58,DAT_091a5488), lVar2 = local_48, (uVar3 & 1) != 0) {
        if ((local_48 != 0) &&
           (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(local_48 + 0x10),0),
           (uVar3 & 1) == 0)) {
          lVar4 = Spine_AnimationState__GetCurrent(lVar1,0,0);
          if ((bVar7) && ((lVar4 == 0 || (*(char *)(lVar4 + 0x6c) != '\0')))) {
            uVar5 = Spine_AnimationState__SetAnimation(lVar1,0,*(undefined8 *)(lVar2 + 0x10),0,0);
            uVar6 = 1;
          }
          else {
            uVar5 = Spine_AnimationState__AddAnimation(0,lVar1,0,*(undefined8 *)(lVar2 + 0x10),0,0);
            uVar6 = 0;
          }
          AnhPD_FoodOrder_GroupViewSpineMixer__Apply(fVar8,fVar10,param_2,uVar5,lVar2,uVar6);
          bVar7 = false;
        }
      }
      FUN_071bd288(&local_58,DAT_091a5480);
    }
    return;
  }
LAB_0410e360:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

