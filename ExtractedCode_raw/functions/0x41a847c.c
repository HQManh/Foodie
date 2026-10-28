// rea decompile_all
// name: Datpt.Cook_Order.SalerMachine$$OnTake
// address: 0x41a847c
// body: available
// range: 0x41a847c-0x41a87ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a87fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Datpt_Cook_Order_SalerMachine__OnTake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long *param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((DAT_09516892 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091871f0);
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091ef5c0);
    FUN_03f5c2a4(&DAT_091ef5c8);
    FUN_03f5c2a4(&DAT_09194070);
    DAT_09516892 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194070);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_4);
    lVar3 = DAT_091871f0;
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091871f0 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091871f0) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(lVar2 + 0x10) = plVar7;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        param_5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        param_5 = (long *)0x0;
      }
    }
    plVar8 = (long *)(lVar2 + 0x10);
    thunk_FUN_03f5d7b8(plVar8,param_5);
    plVar7 = (long *)*plVar8;
    if (plVar7 == (long *)0x0) {
LAB_041a87d4:
      return plVar7 != (long *)0x0;
    }
    (**(code **)(*plVar7 + 0x428))(plVar7,0,*(undefined8 *)(*plVar7 + 0x430));
    plVar9 = (long *)*plVar8;
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      uVar10 = UnityEngine_Transform__get_position(lVar3,0);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      if (plVar9 != (long *)0x0) {
        puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        (**(code **)(*plVar9 + 0x3c8))
                  (uVar10,param_2,param_3,*puVar6,puVar6[1],puVar6[2],puVar6[3],0x3e4ccccd,plVar9,
                   *(undefined8 *)(*plVar9 + 0x3d0));
        if (*plVar8 != 0) {
          uVar4 = UnityEngine_Component__get_transform(*plVar8,0);
          uVar4 = DG_Tweening_ShortcutExtensions__DOScale(0,0x3e4ccccd,uVar4,0);
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091ef5c0,0);
          FUN_04d956bc(uVar4,uVar5,DAT_091dbd10);
          uVar4 = UnityEngine_Component__get_transform(param_4,0);
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
          fVar11 = (float)((ulong)uVar5 >> 0x20) * 0.1;
          uVar4 = DG_Tweening_ShortcutExtensions__DOPunchScale
                            (CONCAT44(fVar11,(float)uVar5 * 0.1),fVar11,
                             *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e4ccccd,
                             0x3f800000,uVar4,10,0);
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091ef5c8,0);
          FUN_04d956bc(uVar4,uVar5,DAT_091dbd28);
          lVar2 = Datpt_Cook_Order_SoundControl__get_Ins(0);
          if (lVar2 != 0) {
            FUN_04d59cfc(lVar2,9,0,DAT_091d96f0);
            goto LAB_041a87d4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

