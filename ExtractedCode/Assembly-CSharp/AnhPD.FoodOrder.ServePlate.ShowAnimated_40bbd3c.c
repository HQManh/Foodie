// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$ShowAnimated
// address: 0x40bbd3c
// body: available
// range: 0x40bbd3c-0x40bc1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bc190 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bc1b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bc1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__ShowAnimated
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  if ((DAT_09515f57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918af70);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd48);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091ef9e8);
    FUN_03f5c2a4(&DAT_091943d0);
    FUN_03f5c2a4(&DAT_091ef9f0);
    FUN_03f5c2a4(&DAT_091ef9f8);
    FUN_03f5c2a4(&DAT_091943d8);
    DAT_09515f57 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091943d0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x30) = param_5;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x30),param_5);
    if (*(char *)(param_5 + 0xb0) == '\0') {
      return;
    }
    AnhPD_FoodOrder_ServePlate__SetVisualsEnabled(param_5,1);
    *(undefined1 *)(param_5 + 0xb0) = 0;
    if (*(float *)(param_5 + 0x48) <= 0.0) {
      return;
    }
    lVar2 = UnityEngine_Component__get_transform(param_5,0);
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = lVar2;
    thunk_FUN_03f5d7b8(plVar8,lVar2);
    if (*plVar8 != 0) {
      uVar11 = UnityEngine_Transform__get_localScale(*plVar8,0);
      *(undefined4 *)(lVar1 + 0x18) = uVar11;
      *(undefined4 *)(lVar1 + 0x1c) = param_2;
      *(undefined4 *)(lVar1 + 0x20) = param_3;
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = DG_Tweening_DOTween__Sequence(0);
      uVar10 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar10,0);
      uVar10 = 0;
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_5 + 0x20);
        lVar2 = *plVar8;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar10,lVar2,0);
        uVar10 = 0;
        if ((uVar4 & 1) != 0) {
          uVar10 = *(undefined8 *)(param_5 + 0x20);
        }
      }
      puVar9 = (undefined8 *)(lVar1 + 0x28);
      *puVar9 = uVar10;
      thunk_FUN_03f5d7b8(puVar9);
      uVar10 = *puVar9;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = thunk_FUN_03f9944c(DAT_091943d8);
        System_Object___ctor(lVar2,0);
        if (lVar2 == 0) goto LAB_040bc1b4;
        plVar8 = (long *)(lVar2 + 0x20);
        *plVar8 = lVar1;
        thunk_FUN_03f5d7b8(plVar8,lVar1);
        if ((*plVar8 == 0) || (lVar5 = *(long *)(*plVar8 + 0x28), lVar5 == 0)) goto LAB_040bc1b4;
        uVar11 = UnityEngine_Transform__get_localScale(lVar5,0);
        *(undefined4 *)(lVar2 + 0x14) = uVar11;
        *(undefined4 *)(lVar2 + 0x18) = param_2;
        *(undefined4 *)(lVar2 + 0x1c) = param_3;
        fVar12 = *(float *)(param_5 + 0x4c);
        if (*(float *)(param_5 + 0x4c) <= 0.01) {
          fVar12 = 0.01;
        }
        *(float *)(lVar2 + 0x10) = fVar12;
        AnhPD_FoodOrder_ServePlate_<>c__DisplayClass65_1__<ShowAnimated>g__ApplyScale_1(lVar2);
        uVar10 = thunk_FUN_03f9944c(DAT_09175e18);
        FUN_06dfb188(uVar10,lVar2,DAT_091ef9f0,0);
        uVar6 = thunk_FUN_03f9944c(DAT_09175e68);
        FUN_06dfc2b4(uVar6,lVar2,DAT_091ef9f8,0);
        uVar11 = *(undefined4 *)(param_5 + 0x48);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = DG_Tweening_DOTween__To(0x3f800000,uVar11,uVar10,uVar6,0);
        uVar10 = FUN_04d95e8c(uVar10,0x1b,DAT_091dbe80);
        DG_Tweening_TweenSettingsExtensions__Join(uVar3,uVar10,0);
      }
      lVar2 = *(long *)(param_5 + 0x50);
      if (lVar2 != 0) {
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar4 = 0;
          uVar7 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            uVar11 = (undefined4)param_4;
            if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar8 = *(long **)(lVar2 + 0x20 + uVar4 * 8);
            if ((plVar8 != (long *)0x0) && (*plVar8 == DAT_0918af70)) {
              UnityEngine_SpriteRenderer__get_color(plVar8,0);
              param_4 = 0;
              UnityEngine_SpriteRenderer__set_color(plVar8,0);
              uVar10 = DG_Tweening_DOTweenModuleSprite__DOFade
                                 (uVar11,*(undefined4 *)(param_5 + 0x48),plVar8,0);
              uVar10 = FUN_04d95e8c(uVar10,6,DAT_091dbe70);
              DG_Tweening_TweenSettingsExtensions__Join(uVar3,uVar10,0);
            }
            uVar7 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
        uVar10 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar10,lVar1,DAT_091ef9e8,0);
        uVar3 = FUN_04d956e8(uVar3,uVar10,DAT_091dbd48);
        *(undefined8 *)(param_5 + 0x58) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x58),uVar3);
        return;
      }
    }
  }
LAB_040bc1b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

