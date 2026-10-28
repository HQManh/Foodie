// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$SpawnPlate
// address: 0x41e2d30
// body: available
// range: 0x41e2d30-0x41e3087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e3084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__SpawnPlate(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_09516aef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516aef = 1;
  }
  local_48 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = AnhPD_FoodOrder_LevelInfo__TryGetPlateVariant
                      (*(long *)(param_1 + 0x10),param_2,&local_48,&local_58,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = *(long *)(DAT_091b4c88 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    uVar6 = local_48;
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181918);
    }
    puVar5 = *(undefined4 **)(DAT_09181918 + 0xb8);
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    if (lVar2 != 0) {
      puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      lVar2 = FUN_04c37c04(uVar7,uVar8,uVar9,*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,uVar6,0,
                           DAT_091d4fb8);
      if ((lVar2 != 0) && (lVar3 = UnityEngine_Component__get_gameObject(lVar2,0), lVar3 != 0)) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        uVar6 = **(undefined8 **)(DAT_091881a0 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
        lVar3 = 0;
        if ((uVar1 & 1) != 0) {
          if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
             (lVar3 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x100), lVar3 == 0))
          goto LAB_041e3084;
          lVar3 = *(long *)(lVar3 + 0x18);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar1 & 1) != 0) {
          lVar4 = UnityEngine_Component__get_transform(lVar2,0);
          if ((lVar3 == 0) || (uVar6 = UnityEngine_Component__get_transform(lVar3,0), lVar4 == 0))
          goto LAB_041e3084;
          UnityEngine_Transform__SetParent(lVar4,uVar6,0);
        }
        *(undefined8 *)(lVar2 + 0xa0) = 0;
        *(undefined8 *)(lVar2 + 0x98) = 0;
        *(undefined8 *)(lVar2 + 0x90) = 0;
        *(undefined8 *)(lVar2 + 0x88) = 0;
        AnhPD_FoodOrder_ServePlate__SetVariant(lVar2,param_2,0,0);
        AnhPD_FoodOrder_ServePlate__HideUntilFirstItem(lVar2,0);
        AnhPD_FoodOrder_ServePlate__ShowInstant(lVar2,0);
        AnhPD_FoodOrder_ServePlate__RaiseSortingOrder(lVar2,0x28,0);
        lVar3 = UnityEngine_Component__get_transform(lVar2,0);
        if (lVar3 != 0) {
          uVar7 = UnityEngine_Transform__get_localScale(lVar3,0);
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localScale(*puVar5,puVar5[1],puVar5[2],lVar3,0);
          uVar6 = DG_Tweening_ShortcutExtensions__DOScale(uVar7,uVar8,uVar9,0x3e4ccccd,lVar3,0);
          FUN_04d95e8c(uVar6,0x1b,DAT_091dbeb0);
          return lVar2;
        }
      }
    }
  }
LAB_041e3084:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

