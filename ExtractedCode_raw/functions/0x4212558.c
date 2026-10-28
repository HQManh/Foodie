// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$AddLine
// address: 0x4212558
// body: available
// range: 0x4212558-0x421289b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4212888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421288c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4212890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4212894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4212898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CustomerSpawner__AddLine
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_09516c89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acab0);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091d4bb0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c89 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    FUN_057e185c(&local_78,*(long *)(param_4 + 0x10),DAT_091acac8);
    local_50 = local_68;
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar2 = FUN_071bd28c(&local_60,DAT_091a2c68), lVar4 = local_50, (uVar2 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_gameObject(lVar4,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
        if ((uVar2 & 1) == 0) {
          lVar3 = UnityEngine_Component__get_gameObject(lVar4,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(lVar3,1,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            AnhPD_FoodOrder_CustomerLineLayout__Relayout(*(long *)(param_4 + 0x30),0);
            FUN_071bd288(&local_60,DAT_091a2c60);
            return lVar4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
    FUN_071bd288(&local_60,DAT_091a2c60);
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    uVar8 = AnhPD_FoodOrder_CustomerSpawner__get_LineParent(param_4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar4 = FUN_04c35338(uVar9,uVar8,DAT_091d4bb0);
    if (lVar4 != 0) {
      lVar3 = UnityEngine_Component__get_transform(lVar4,0);
      if (((*(long *)(param_4 + 0x20) != 0) &&
          (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar5 != 0))
         && (UnityEngine_Transform__get_localScale(lVar5,0), lVar3 != 0)) {
        UnityEngine_Transform__set_localScale(lVar3,0);
        if ((*(long *)(param_4 + 0x20) != 0) &&
           (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar3 != 0))
        {
          uVar10 = UnityEngine_Transform__get_localPosition(lVar3,0);
          lVar3 = UnityEngine_Component__get_transform(lVar4,0);
          if (lVar3 != 0) {
            UnityEngine_Transform__set_localPosition(uVar10,0,param_3,lVar3,0);
            lVar3 = UnityEngine_Component__get_gameObject(lVar4,0);
            if (lVar3 != 0) {
              UnityEngine_GameObject__SetActive(lVar3,1,0);
              lVar3 = DAT_091acab0;
              lVar5 = *(long *)(param_4 + 0x10);
              if (lVar5 != 0) {
                lVar6 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar7 = lVar4;
                    thunk_FUN_03f5d7b8(plVar7,lVar4);
                  }
                  else {
                    FUN_057e0c68(lVar5,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar3 = *(long *)(param_4 + 0x38);
                  if (lVar3 != 0) {
                    (**(code **)(lVar3 + 0x18))
                              (*(undefined8 *)(lVar3 + 0x40),lVar4,*(undefined8 *)(lVar3 + 0x28));
                    if (*(long *)(param_4 + 0x30) != 0) {
                      AnhPD_FoodOrder_CustomerLineLayout__Relayout(*(long *)(param_4 + 0x30),0);
                      return lVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

