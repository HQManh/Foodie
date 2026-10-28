// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.Grill$$OnTake
// address: 0x41b69e4
// body: available
// range: 0x41b69e4-0x41b6d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b6d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6d54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6d58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Datpt_Cook_Order_Level_SimpleBBQ_Grill__OnTake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09516947 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4400);
    FUN_03f5c2a4(&DAT_091a4408);
    FUN_03f5c2a4(&DAT_091a4410);
    FUN_03f5c2a4(&DAT_091b01e0);
    FUN_03f5c2a4(&DAT_0918ad68);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091eaf40);
    FUN_03f5c2a4(&DAT_09191100);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516947 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09191100);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_041b6d48:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar3 + 0x18) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_4);
  lVar7 = DAT_0918ad68;
  if (param_5 == (long *)0x0) {
    param_5 = (long *)0x0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918ad68 + 0x130);
    if (*(byte *)(*param_5 + 0x130) < bVar1) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_5;
      if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918ad68) {
        plVar9 = (long *)0x0;
      }
    }
    *(long **)(lVar3 + 0x10) = plVar9;
    if (*(byte *)(*param_5 + 0x130) < bVar1) {
      param_5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      param_5 = (long *)0x0;
    }
  }
  plVar9 = (long *)(lVar3 + 0x10);
  thunk_FUN_03f5d7b8(plVar9,param_5);
  lVar7 = *plVar9;
  if (((lVar7 == 0) || (*(char *)(lVar7 + 0x110) != '\0')) || (*(int *)(lVar7 + 0x100) < 1)) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_041b6d48;
    FUN_057e185c(&local_98,*(long *)(param_4 + 0x28),DAT_091b01e0);
    uStack_78 = puStack_90;
    local_80 = local_98;
    local_70 = local_88;
    local_98 = 0;
    puStack_90 = &local_80;
    do {
      uVar2 = FUN_071bd28c(&local_80,DAT_091a4408);
      lVar7 = local_70;
      if ((uVar2 & 1) == 0) goto LAB_041b6d2c;
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = Datpt_Cook_Order_Level_SimpleBBQ_SnapOnGrill__get_IsHaveSkew(local_70);
    } while ((uVar4 & 1) != 0);
    plVar5 = (long *)*plVar9;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar5 + 0x428))(plVar5,0,*(undefined8 *)(*plVar5 + 0x430));
    lVar6 = *(long *)(lVar7 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar5 = (long *)*plVar9;
    uVar10 = UnityEngine_Transform__get_position(lVar6,0);
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar8 = *(undefined4 **)(DAT_091898c0 + 0xb8);
    (**(code **)(*plVar5 + 0x3c8))
              (uVar10,param_2,param_3,*puVar8,puVar8[1],puVar8[2],puVar8[3],0x3e4ccccd,plVar5,
               *(undefined8 *)(*plVar5 + 0x3d0));
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Datpt_Cook_Order_ItemMovingBase__OnSave(0x3e4ccccd,*plVar9,0);
    plVar5 = (long *)(lVar7 + 0x18);
    *plVar5 = *plVar9;
    thunk_FUN_03f5d7b8(plVar5);
    plVar9 = (long *)(lVar3 + 0x20);
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(lVar7,lVar3,DAT_091eaf40,0);
      *plVar9 = lVar7;
      thunk_FUN_03f5d7b8(plVar9,lVar7);
    }
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,lVar7,0);
LAB_041b6d2c:
    FUN_071bd288(&local_80,DAT_091a4400);
  }
  return uVar2 & 1;
}

