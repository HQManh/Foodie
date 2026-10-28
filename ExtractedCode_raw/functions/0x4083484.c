// rea decompile_all
// name: CakeOrder.InGame.Seafood.SeafoodPieceTable$$IsValid
// address: 0x4083484
// body: available
// range: 0x4083484-0x4083637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4083630 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4083634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_Seafood_SeafoodPieceTable__IsValid(int param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  uint local_34;
  
  if ((DAT_09515c82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09515c82 = 1;
  }
  uVar5 = param_1 - 1;
  local_34 = 0;
  if (uVar5 < 6) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = param_2[2];
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__Mask(&local_70,&local_34);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(DAT_0918a7b8 + 0xb8) + 0x10);
      if (lVar4 == 0) {
LAB_04083634:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
        uVar1 = *(undefined4 *)(lVar4 + (ulong)uVar5 * 4 + 0x20);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
        if (iVar2 != 1) {
          return 0;
        }
        if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(DAT_0918a7b8 + 0xb8) + 0x18);
        if (lVar4 == 0) goto LAB_04083634;
        if (uVar5 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = *(long *)(lVar4 + (ulong)uVar5 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_04083634;
          uVar5 = (uint)*(ulong *)(lVar4 + 0x18);
          if ((int)uVar5 < 1) {
            return 0;
          }
          uVar3 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
          uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          puVar7 = (uint *)(lVar4 + 0x20);
          while (uVar6 != 0) {
            if ((param_3 & 1) == 0) {
              if ((local_34 & (*puVar7 ^ 0xffffffff)) == 0) {
                return 1;
              }
            }
            else if (local_34 == *puVar7) {
              return 1;
            }
            uVar3 = uVar3 - 1;
            puVar7 = puVar7 + 1;
            uVar6 = uVar6 - 1;
            if (uVar3 == 0) {
              return 0;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  return 0;
}

