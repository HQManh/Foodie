// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$JumpToMovingTargetTween
// address: 0x411224c
// body: available
// range: 0x411224c-0x4112637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4112630 to 0x4112168 AnhPD.FoodOrder.DragItem$$FinishJump (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4112634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItem__JumpToMovingTargetTween
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6,uint param_7,ulong param_8,byte param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09516202 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09177ec8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbde0);
    FUN_03f5c2a4(&DAT_091dc038);
    FUN_03f5c2a4(&DAT_091e91e8);
    FUN_03f5c2a4(&DAT_091e91f0);
    FUN_03f5c2a4(&DAT_091e91f8);
    FUN_03f5c2a4(&DAT_091e9200);
    FUN_03f5c2a4(&DAT_091e9208);
    FUN_03f5c2a4(&DAT_09190218);
    DAT_09516202 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190218);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_6);
    *(long *)(lVar1 + 0x30) = param_5;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x30),param_5);
    *(byte *)(lVar1 + 0x38) = param_9 & 1;
    lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
    if (lVar2 != 0) {
      uVar6 = UnityEngine_Transform__get_position(lVar2,0);
      *(undefined4 *)(lVar1 + 0x14) = uVar6;
      *(float *)(lVar1 + 0x18) = param_2;
      *(undefined4 *)(lVar1 + 0x1c) = param_3;
      lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
      if (lVar2 != 0) {
        uVar6 = UnityEngine_Transform__get_rotation(lVar2,0);
        *(undefined4 *)(lVar1 + 0x3c) = uVar6;
        *(float *)(lVar1 + 0x40) = param_2;
        *(undefined4 *)(lVar1 + 0x44) = param_3;
        *(undefined4 *)(lVar1 + 0x48) = param_4;
        lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
        if (lVar2 != 0) {
          uVar6 = UnityEngine_Transform__get_localScale(lVar2,0);
          *(undefined4 *)(lVar1 + 0x4c) = uVar6;
          *(float *)(lVar1 + 0x50) = param_2;
          *(undefined4 *)(lVar1 + 0x54) = param_3;
          if (*(long *)(lVar1 + 0x20) != 0) {
            fVar10 = *(float *)(lVar1 + 0x14);
            fVar9 = *(float *)(lVar1 + 0x18);
            fVar7 = (float)UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x20),0);
            fVar7 = ABS(fVar7 - fVar10);
            fVar10 = ABS(param_2 - fVar9);
            param_2 = param_2 - fVar9;
            if (fVar7 <= fVar10) {
              fVar7 = fVar10;
            }
            fVar7 = fVar7 * 0.35;
            fVar9 = 3.0;
            if (fVar7 <= 3.0) {
              fVar9 = fVar7;
            }
            fVar8 = 0.8;
            if (0.8 <= fVar7) {
              fVar8 = fVar9;
            }
            fVar7 = fVar8;
            if (fVar8 <= fVar10 + 0.5) {
              fVar7 = fVar10 + 0.5;
            }
            if (0.0 <= param_2) {
              fVar7 = fVar8;
            }
            *(float *)(lVar1 + 0x28) = fVar7;
            if (*(long *)(lVar1 + 0x20) != 0) {
              uVar6 = UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x20),0);
              *(undefined4 *)(param_5 + 0x4c) = uVar6;
              *(float *)(param_5 + 0x50) = param_2;
              uVar3 = AnhPD_FoodOrder_DragItem__BeginJump(param_5);
              uVar4 = FUN_04d96618(uVar3,1,DAT_091dc038);
              uVar3 = DAT_09175e18;
              *(undefined4 *)(lVar1 + 0x10) = 0;
              uVar3 = thunk_FUN_03f9944c(uVar3);
              FUN_06dfb188(uVar3,lVar1,DAT_091e91e8,0);
              uVar5 = thunk_FUN_03f9944c(DAT_09175e68);
              FUN_06dfc2b4(uVar5,lVar1,DAT_091e91f0,0);
              if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = DG_Tweening_DOTween__To(0x3f800000,param_1,uVar3,uVar5,0);
              uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar5,lVar1,DAT_091e91f8,0);
              uVar3 = FUN_04d957f0(uVar3,uVar5,DAT_091dbde0);
              DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar3,0);
              if (*(char *)(lVar1 + 0x38) == '\0') {
                AnhPD_FoodOrder_DragItem__JoinLandingScale
                          (0x3f800000,param_1,param_5,uVar4,param_7 & 1);
              }
              else {
                uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091e9200,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar4,uVar3,0);
              }
              if ((param_8 & 1) != 0) {
                AnhPD_FoodOrder_DragItem__AppendPlaceSfx(param_5,uVar4);
              }
              AnhPD_FoodOrder_DragItem__AppendLandHaptic(param_5,uVar4);
              uVar3 = thunk_FUN_03f9944c(DAT_09177ec8);
              FUN_05303818(uVar3,lVar1,DAT_091e9208,0);
              AnhPD_FoodOrder_DragItem__FinishJump(param_5,uVar4,uVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

