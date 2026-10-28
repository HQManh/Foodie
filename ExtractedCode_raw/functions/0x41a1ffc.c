// rea decompile_all
// name: Datpt.Cook_Order.Bin$$OnTake
// address: 0x41a1ffc
// body: available
// range: 0x41a1ffc-0x41a23a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a23a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Datpt_Cook_Order_Bin__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((DAT_0951684c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_09186bf8);
    FUN_03f5c2a4(&DAT_091871d0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e6260);
    FUN_03f5c2a4(&DAT_0918e808);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_0951684c = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918e808);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_4);
    lVar1 = DAT_091871d0;
    if (param_5 == (long *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      plVar3 = (long *)0x0;
    }
    else {
      bVar7 = *(byte *)(DAT_091871d0 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar7) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar7 * 8 + -8) != DAT_091871d0) {
          plVar3 = (long *)0x0;
        }
      }
      *(long **)(lVar2 + 0x10) = plVar3;
      if (*(byte *)(*param_5 + 0x130) < bVar7) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar7 * 8 + -8) != lVar1) {
          plVar3 = (long *)0x0;
        }
      }
    }
    plVar8 = (long *)(lVar2 + 0x10);
    thunk_FUN_03f5d7b8(plVar8,plVar3);
    plVar3 = (long *)*plVar8;
    if ((plVar3 == (long *)0x0) ||
       (uVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350)),
       (uVar4 & 1) == 0)) {
      return 0;
    }
    plVar3 = (long *)*plVar8;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x428))(plVar3,0,*(undefined8 *)(*plVar3 + 0x430));
      if (*(long *)(param_4 + 0x28) != 0) {
        plVar3 = (long *)*plVar8;
        uVar9 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x28),0);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        if (plVar3 != (long *)0x0) {
          puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          (**(code **)(*plVar3 + 0x3c8))
                    (uVar9,param_2,param_3,*puVar6,puVar6[1],puVar6[2],puVar6[3],0x3e4ccccd,plVar3,
                     *(undefined8 *)(*plVar3 + 0x3d0));
          if (*plVar8 != 0) {
            uVar5 = UnityEngine_Component__get_transform(*plVar8,0);
            if (DAT_09515ce6 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515ce6 = '\x01';
            }
            puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
            DG_Tweening_ShortcutExtensions__DOScale(*puVar6,puVar6[1],puVar6[2],0x3e4ccccd,uVar5,0);
            uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091e6260,0);
            if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar5,0);
            if (param_5 != (long *)0x0) {
              lVar2 = *param_5;
              bVar7 = *(byte *)(lVar2 + 0x130);
              if ((*(byte *)(DAT_09186bf8 + 0x130) <= bVar7) &&
                 (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09186bf8 + 0x130) * 8 + -8
                           ) == DAT_09186bf8)) {
                lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
                if ((lVar2 == 0) || (*(long *)(lVar2 + 0x168) == 0)) goto LAB_041a23a0;
                Datpt_Cook_Order_PocketRandomItem__AddPocketNum(*(long *)(lVar2 + 0x168),1);
                lVar2 = *param_5;
                bVar7 = *(byte *)(lVar2 + 0x130);
              }
              if (((*(byte *)(DAT_09186bf0 + 0x130) <= bVar7) &&
                  (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09186bf0 + 0x130) * 8 +
                            -8) == DAT_09186bf0)) &&
                 (fVar10 = *(float *)(param_4 + 0x38) + 0.5, *(float *)(param_4 + 0x38) = fVar10,
                 1.0 <= fVar10)) {
                lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
                if ((lVar2 != 0) && (*(long *)(lVar2 + 0x168) != 0)) {
                  Datpt_Cook_Order_PocketRandomItem__AddPocketNum(*(long *)(lVar2 + 0x168),1);
                  *(undefined4 *)(param_4 + 0x38) = 0;
                  return 1;
                }
                goto LAB_041a23a0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
LAB_041a23a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

