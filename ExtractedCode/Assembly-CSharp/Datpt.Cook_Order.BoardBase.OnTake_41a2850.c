// rea decompile_all
// name: Datpt.Cook_Order.BoardBase$$OnTake
// address: 0x41a2850
// body: available
// range: 0x41a2850-0x41a2b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a2b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_BoardBase__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,long *param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_09516851 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186bf8);
    FUN_03f5c2a4(&DAT_091871e8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e6490);
    FUN_03f5c2a4(&DAT_0918e908);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516851 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918e908);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_5;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_5);
    lVar2 = DAT_09186bf8;
    if (param_6 == (long *)0x0) {
      param_6 = (long *)0x0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_09186bf8 + 0x130);
      if (*(byte *)(*param_6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = param_6;
        if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186bf8) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(lVar3 + 0x18) = plVar8;
      if (*(byte *)(*param_6 + 0x130) < bVar1) {
        param_6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        param_6 = (long *)0x0;
      }
    }
    plVar8 = (long *)(lVar3 + 0x18);
    thunk_FUN_03f5d7b8(plVar8,param_6);
    if ((((*plVar8 != 0) && (*(char *)(*plVar8 + 0x8c) != '\0')) &&
        (uVar4 = Datpt_Cook_Order_BoardBase__get_isHaveItem(param_5), (uVar4 & 1) == 0)) &&
       (plVar6 = (long *)*plVar8, plVar6 != (long *)0x0)) {
      if ((*(byte *)(DAT_091871e8 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091871e8 + 0x130) * 8 + -8) ==
          DAT_091871e8)) {
        *(long **)(param_5 + 0x40) = plVar6;
        thunk_FUN_03f5d7b8();
        lVar2 = DAT_091871e8;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)0x0;
          *(undefined8 *)(param_5 + 0x48) = 0;
        }
        else {
          bVar1 = *(byte *)(DAT_091871e8 + 0x130);
          if (*(byte *)(*plVar6 + 0x130) < bVar1) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = plVar6;
            if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091871e8) {
              plVar7 = (long *)0x0;
            }
          }
          *(long **)(param_5 + 0x48) = plVar7;
          if (*(byte *)(*plVar6 + 0x130) < bVar1) {
            plVar6 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
            plVar6 = (long *)0x0;
          }
        }
        thunk_FUN_03f5d7b8(param_5 + 0x48,plVar6);
        plVar6 = (long *)*plVar8;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x428))(plVar6,0,*(undefined8 *)(*plVar6 + 0x430));
          if (*(long *)(param_5 + 0x20) != 0) {
            plVar8 = (long *)*plVar8;
            uVar9 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
            if ((*(long *)(param_5 + 0x20) != 0) &&
               (uVar11 = param_2, uVar12 = param_3,
               uVar10 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0),
               plVar8 != (long *)0x0)) {
              (**(code **)(*plVar8 + 0x3c8))
                        (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_4,0x3e4ccccd,plVar8,
                         *(undefined8 *)(*plVar8 + 0x3d0));
              uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e6490,0);
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar5,0);
              return 1;
            }
          }
        }
        goto LAB_041a2b80;
      }
    }
    return 0;
  }
LAB_041a2b80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

