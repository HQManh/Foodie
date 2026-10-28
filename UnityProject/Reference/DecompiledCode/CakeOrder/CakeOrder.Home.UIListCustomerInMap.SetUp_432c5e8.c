// rea decompile_all
// name: CakeOrder.Home.UIListCustomerInMap$$SetUp
// address: 0x432c5e8
// body: available
// range: 0x432c5e8-0x432c7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432c7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIListCustomerInMap__SetUp(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined1 local_54 [4];
  
  if ((DAT_095176ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1430);
    FUN_03f5c2a4(&DAT_091ab7b8);
    FUN_03f5c2a4(&DAT_091ab7c0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091d4cb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095176ad = 1;
  }
  local_54[0] = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),param_2);
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar4 + 0xb8) != 0) &&
     (lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOsByMap
                        (**(long **)(lVar4 + 0xb8),param_2,0), lVar4 != 0)) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar10 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = FUN_04c35338(uVar1,uVar6,DAT_091d4cb8);
        uVar6 = FUN_057e0998(lVar4,iVar10,DAT_091ab7c0);
        if (lVar5 == 0) goto LAB_0432c7fc;
        CakeOrder_Home_UIItemCustomerInMap__SetUp(lVar5,uVar6);
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar5,0);
        lVar3 = DAT_091b1430;
        lVar7 = *(long *)(param_1 + 0x60);
        if (lVar7 == 0) goto LAB_0432c7fc;
        lVar8 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0432c7fc;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar9 = lVar5;
          thunk_FUN_03f5d7b8(plVar9,lVar5);
        }
        else {
          FUN_057e0c68(lVar7,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar4 + 0x18));
    }
    local_54[0] = CakeOrder_Home_UIListCustomerInMap__LoadCharactersAsync(param_1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_54,0);
    return;
  }
LAB_0432c7fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

