// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$Awake
// address: 0x420a3d8
// body: available
// range: 0x420a3d8-0x420a80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420a680 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a80c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09516c2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6f58);
    FUN_03f5c2a4(&DAT_091c6f60);
    FUN_03f5c2a4(&DAT_091c6f68);
    FUN_03f5c2a4(&DAT_091c6f70);
    FUN_03f5c2a4(&DAT_091a3b18);
    FUN_03f5c2a4(&DAT_091a3b20);
    FUN_03f5c2a4(&DAT_091a3b28);
    FUN_03f5c2a4(&DAT_091aec40);
    FUN_03f5c2a4(&DAT_091aec50);
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c2d = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_4 + 0x28) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x28) + 0x58);
    lVar5 = *plVar4;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_4,DAT_091c6f58,0);
    plVar2 = (long *)System_Delegate__Combine(lVar5,uVar1,0);
    lVar5 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar4 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar4 = (long)plVar2, *plVar2 != lVar5))
    goto LAB_0420a67c;
    thunk_FUN_03f5d7b8(plVar4,plVar2);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_0420a80c;
    plVar4 = (long *)(*(long *)(param_4 + 0x28) + 0x60);
    lVar5 = *plVar4;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_4,DAT_091c6f68,0);
    plVar2 = (long *)System_Delegate__Combine(lVar5,uVar1,0);
    lVar5 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar4 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar4 = (long)plVar2, *plVar2 != lVar5))
    goto LAB_0420a67c;
    thunk_FUN_03f5d7b8(plVar4,plVar2);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_0420a80c;
    plVar4 = (long *)(*(long *)(param_4 + 0x28) + 0x68);
    lVar5 = *plVar4;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_4,DAT_091c6f60,0);
    plVar2 = (long *)System_Delegate__Combine(lVar5,uVar1,0);
    lVar5 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar4 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar4 = (long)plVar2, *plVar2 != lVar5))
    goto LAB_0420a67c;
    thunk_FUN_03f5d7b8(plVar4,plVar2);
    if (*(long *)(param_4 + 0x28) != 0) {
      plVar4 = (long *)(*(long *)(param_4 + 0x28) + 0x70);
      lVar5 = *plVar4;
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_4,DAT_091c6f70,0);
      plVar2 = (long *)System_Delegate__Combine(lVar5,uVar1,0);
      lVar5 = DAT_09180e78;
      if (plVar2 == (long *)0x0) {
        *plVar4 = 0;
      }
      else if ((*plVar2 != DAT_09180e78) || (*plVar4 = (long)plVar2, *plVar2 != lVar5)) {
LAB_0420a67c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2);
      }
      thunk_FUN_03f5d7b8(plVar4,plVar2);
      if ((*(long *)(param_4 + 0x20) != 0) &&
         (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar5 != 0)) {
        uVar6 = UnityEngine_Transform__get_localPosition(lVar5,0);
        lVar5 = DAT_09188ad0;
        *(undefined4 *)(param_4 + 0xc0) = uVar6;
        *(undefined4 *)(param_4 + 0xc4) = param_2;
        uVar1 = *(undefined8 *)(param_4 + 0x70);
        *(undefined4 *)(param_4 + 200) = param_3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar1,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(param_4 + 0x70) == 0) ||
             (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x70),0), lVar5 == 0)
             ) goto LAB_0420a80c;
          uVar6 = UnityEngine_Transform__get_localPosition(lVar5,0);
          *(undefined4 *)(param_4 + 0xcc) = uVar6;
          *(undefined4 *)(param_4 + 0xd0) = param_2;
          *(undefined4 *)(param_4 + 0xd4) = param_3;
        }
        lVar5 = *(long *)(param_4 + 0x30);
        if (lVar5 != 0) {
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar1 = FUN_057e0998(lVar5,0,DAT_091aec58);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar1,0);
            lVar5 = *(long *)(param_4 + 0x30);
            if ((uVar3 & 1) != 0) {
              if (((lVar5 == 0) || (lVar5 = FUN_057e0998(lVar5,0,DAT_091aec58), lVar5 == 0)) ||
                 (lVar5 = UnityEngine_Component__get_transform(lVar5,0), lVar5 == 0))
              goto LAB_0420a80c;
              uVar6 = UnityEngine_Transform__get_localScale(lVar5,0);
              lVar5 = *(long *)(param_4 + 0x30);
              *(undefined4 *)(param_4 + 0xe8) = uVar6;
              *(undefined4 *)(param_4 + 0xec) = param_2;
              *(undefined4 *)(param_4 + 0xf0) = param_3;
            }
            if (lVar5 == 0) goto LAB_0420a80c;
          }
          FUN_057e185c(&local_48,lVar5,DAT_091aec40);
          while (uVar3 = FUN_071bd28c(&local_48,DAT_091a3b20), (uVar3 & 1) != 0) {
            AnhPD_FoodOrder_CustomerLineView__RegisterBoard(param_4,local_38);
          }
          FUN_071bd288(&local_48,DAT_091a3b18);
          AnhPD_FoodOrder_CustomerLineView__SetupSpacerTap(param_4);
          return;
        }
      }
    }
  }
LAB_0420a80c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

