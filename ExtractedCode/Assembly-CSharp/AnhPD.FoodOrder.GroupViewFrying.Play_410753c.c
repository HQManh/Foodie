// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewFrying$$Play
// address: 0x410753c
// body: available
// range: 0x410753c-0x410791f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4107918 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410791c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewFrying__Play(undefined4 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_09516198 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbe60);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbf48);
    DAT_09516198 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0410791c;
    CakeOrder_AudioManagerCakeOrder__PlaySfx
              (0x3f800000,**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_2 + 0x48),5,0);
  }
  lVar2 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    if (*(long *)(param_2 + 0x40) != 0) {
      AnhPD_FoodOrder_BoilOil__StartBoiling();
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      UnityEngine_ParticleSystem__Play(*(long *)(param_2 + 0x30),0);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_2 + 0x38) == 0) goto LAB_0410791c;
        UnityEngine_ParticleSystem__Play(*(long *)(param_2 + 0x38),0);
      }
      if (*(long *)(param_2 + 0x50) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(long *)(param_2 + 0x50),0,0);
      }
      lVar2 = UnityEngine_Component__get_transform(param_2,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar2,0);
        uVar5 = UnityEngine_Component__get_transform(param_2,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
        fVar8 = (float)((ulong)uVar7 >> 0x20) * 0.1;
        uVar5 = DG_Tweening_ShortcutExtensions__DOShakePosition
                          (0x3dcccccd,CONCAT44(fVar8,(float)uVar7 * 0.1),fVar8,
                           *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x42b40000,uVar5,
                           10,0,1,0,0);
        uVar5 = FUN_04d95c7c(0x3e800000,uVar5,DAT_091dbe60);
        uVar5 = FUN_04d95e8c(uVar5,1,DAT_091dbee0);
        FUN_04d962f4(uVar5,0xffffffff,1,DAT_091dbf48);
        plVar6 = (long *)(param_2 + 0x58);
        if (*plVar6 != 0) {
          DG_Tweening_TweenExtensions__Kill(*plVar6,0,0);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = DG_Tweening_DOTween__Sequence(0);
        *(undefined8 *)(param_2 + 0x58) = uVar5;
        thunk_FUN_03f5d7b8(plVar6,uVar5);
        lVar2 = *(long *)(param_2 + 0x20);
        if (lVar2 != 0) {
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar1 = 0;
            uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            do {
              if (uVar4 <= uVar1) goto LAB_04107918;
              uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar1 * 8);
              AnhPD_APDUtilities__SetAlpha(0x3f800000,uVar5,0);
              lVar3 = *plVar6;
              uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade(0,param_1,uVar5,0);
              DG_Tweening_TweenSettingsExtensions__Join(lVar3,uVar5,0);
              uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar1 = uVar1 + 1;
            } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          lVar2 = *(long *)(param_2 + 0x28);
          if (lVar2 != 0) {
            if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
              uVar1 = 0;
              uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
              do {
                if (uVar4 <= uVar1) {
LAB_04107918:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar1 * 8);
                AnhPD_APDUtilities__SetAlpha(0,uVar5,0);
                lVar3 = *plVar6;
                uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade(0x3f800000,param_1,uVar5,0);
                DG_Tweening_TweenSettingsExtensions__Join(lVar3,uVar5,0);
                uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
                uVar1 = uVar1 + 1;
              } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_0410791c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

