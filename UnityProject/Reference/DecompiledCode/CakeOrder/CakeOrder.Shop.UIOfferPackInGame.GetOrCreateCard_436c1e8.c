// rea decompile_all
// name: CakeOrder.Shop.UIOfferPackInGame$$GetOrCreateCard
// address: 0x436c1e8
// body: available
// range: 0x436c1e8-0x436c56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436c560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436c568 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_UIOfferPackInGame__GetOrCreateCard(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_095178a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0120);
    FUN_03f5c2a4(&DAT_091a0128);
    FUN_03f5c2a4(&DAT_091cdac0);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_091f9fd0);
    FUN_03f5c2a4(&DAT_091fa010);
    FUN_03f5c2a4(&DAT_091f9ff8);
    FUN_03f5c2a4(&DAT_091f7770);
    FUN_03f5c2a4(&DAT_091f75a0);
    DAT_095178a1 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_06fd9fbc(*(long *)(param_1 + 0x60),param_2,&local_38,DAT_091a0120);
    uVar5 = local_38;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar1 & 1) != 0) {
        return local_38;
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      uVar5 = UnityEngine_Object__GetName(param_1,0);
      uVar5 = System_String__Concat(uVar5,DAT_091f9fd0,0);
LAB_0436c484:
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar5,param_1,0);
      return 0;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = CakeOrder_DataSO_ShopCardCatalogSO__TryGetCardPrefab
                        (*(long *)(param_1 + 0x30),param_2,&local_40,0);
      uVar5 = local_40;
      if ((uVar1 & 1) == 0) {
        uVar5 = UnityEngine_Object__GetName(param_1,0);
        uVar5 = System_String__Concat(uVar5,DAT_091f9ff8,param_2,DAT_091f7770,0);
        goto LAB_0436c484;
      }
      uVar2 = CakeOrder_Shop_UIOfferPackInGame__get_CardParent(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar3 = FUN_04c35338(uVar5,uVar2,DAT_091d4bc0);
      if (lVar3 != 0) {
        uVar5 = FUN_04b7c324(lVar3,DAT_091cdac0);
        uVar1 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if ((uVar1 & 1) != 0) {
          uVar5 = UnityEngine_Object__GetName(param_1,0);
          uVar5 = System_String__Concat(uVar5,DAT_091fa010,param_2,DAT_091f75a0,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar5,lVar3,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(lVar3,0);
          return 0;
        }
        plVar4 = (long *)UnityEngine_GameObject__get_transform(lVar3,0);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        if (plVar4 != (long *)0x0) {
          if (*plVar4 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                     (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],plVar4,0);
          if (*(long *)(param_1 + 0x60) != 0) {
            FUN_06fd8440(*(long *)(param_1 + 0x60),param_2,uVar5,DAT_091a0128);
            return uVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

