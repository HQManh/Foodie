// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.BowlCreamItemIngre$$OnTake
// address: 0x41c2d78
// body: available
// range: 0x41c2d78-0x41c3077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c3074 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CreamOnBeach_BowlCreamItemIngre__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  
  if ((DAT_095169b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_091ac178);
    FUN_03f5c2a4(&DAT_0917df90);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e64e8);
    FUN_03f5c2a4(&DAT_091e64f0);
    FUN_03f5c2a4(&DAT_0918e970);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169b4 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918e970);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_4);
    lVar7 = DAT_09186bf0;
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_09186bf0 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186bf0) {
          plVar5 = (long *)0x0;
        }
      }
      *(long **)(lVar2 + 0x10) = plVar5;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        param_5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        param_5 = (long *)0x0;
      }
    }
    plVar5 = (long *)(lVar2 + 0x10);
    thunk_FUN_03f5d7b8(plVar5,param_5);
    if ((*plVar5 == 0) || (*(int *)(param_4 + 0xd8) != 0)) {
      return 0;
    }
    lVar7 = *(long *)(param_4 + 0xd0);
    uVar3 = thunk_FUN_03f9944c(DAT_0917df90);
    FUN_05d75f50(uVar3,lVar2,DAT_091e64e8,0);
    if (lVar7 != 0) {
      uVar4 = FUN_0574b624(lVar7,uVar3,DAT_091ac178);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      plVar8 = (long *)*plVar5;
      if (plVar8 != (long *)0x0) {
        *(int *)(param_4 + 0xd8) = (int)plVar8[0x11];
        lVar7 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
        if (lVar7 != 0) {
          uVar9 = UnityEngine_Transform__get_position(lVar7,0);
          if (DAT_09515ed5 == '\0') {
            FUN_03f5c2a4(&DAT_091898c0);
            DAT_09515ed5 = '\x01';
          }
          puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          (**(code **)(*plVar8 + 0x3c8))
                    (uVar9,param_2,param_3,*puVar6,puVar6[1],puVar6[2],puVar6[3],0x3e4ccccd,plVar8,
                     *(undefined8 *)(*plVar8 + 0x3d0));
          if (*plVar5 != 0) {
            uVar3 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar5,0);
            DG_Tweening_ShortcutExtensions__DOScale(0x3f000000,0x3ecccccd,uVar3,0);
            plVar5 = (long *)*plVar5;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x428))(plVar5,0,*(undefined8 *)(*plVar5 + 0x430));
              uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar3,lVar2,DAT_091e64f0,0);
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Datpt_Utilities__DelayedCallScaled(0x3ecccccd,uVar3,0);
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

