// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.ConeCreamBaseMachine$$OnTake
// address: 0x41c3c64
// body: available
// range: 0x41c3c64-0x41c3f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c3dcc to 0x41a2488 Datpt.Cook_Order.ItemIdleBase$$OnTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c3f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CreamOnBeach_ConeCreamBaseMachine__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  
  if ((DAT_095169bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182910);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e6890);
    FUN_03f5c2a4(&DAT_0918ed18);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169bf = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918ed18);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_4);
    lVar2 = DAT_09182910;
    if (param_5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
      plVar7 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(DAT_09182910 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09182910) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(lVar3 + 0x18) = plVar7;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
          plVar7 = (long *)0x0;
        }
      }
    }
    plVar5 = (long *)(lVar3 + 0x18);
    thunk_FUN_03f5d7b8(plVar5,plVar7);
    plVar7 = (long *)*plVar5;
    if (((plVar7 == (long *)0x0) || ((int)plVar7[0x11] != *(int *)(param_4 + 0x38))) ||
       (*(char *)(param_4 + 0x3c) != '\0')) {
      uVar4 = Datpt_Cook_Order_ItemIdleBase__OnTake(param_4,param_5,0);
      return uVar4;
    }
    *(undefined1 *)(param_4 + 0x3c) = 1;
    if (*(long *)(param_4 + 0x20) != 0) {
      uVar8 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      (**(code **)(*plVar7 + 0x3c8))
                (uVar8,param_2,param_3,*puVar6,puVar6[1],puVar6[2],puVar6[3],0x3e4ccccd,plVar7,
                 *(undefined8 *)(*plVar7 + 0x3d0));
      if (*plVar5 != 0) {
        uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar5,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        DG_Tweening_ShortcutExtensions__DOScale(*puVar6,puVar6[1],puVar6[2],0x3e4ccccd,uVar4,0);
        plVar5 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x428))(plVar5,0,*(undefined8 *)(*plVar5 + 0x430));
          uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091e6890,0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar4,0);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

