// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurger$$CombineInit
// address: 0x413b468
// body: available
// range: 0x413b468-0x413b607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413b600 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413b604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleBurger__CombineInit(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int local_44;
  
  if ((DAT_09516391 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091b2ab0);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09516391 = 1;
  }
  local_44 = 0;
  lVar3 = FUN_03f5c394(DAT_091805f8,2);
  if (lVar3 == 0) {
LAB_0413b604:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),param_2);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),param_3);
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar8 = 0;
        uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar8) goto LAB_0413b600;
          uVar7 = *(undefined8 *)(lVar3 + 0x20 + uVar8 * 8);
          if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_BurgerPieceTable__TryGetFilling(uVar7,&local_44);
          lVar2 = DAT_091b2ab0;
          if ((uVar5 & 1) != 0) {
            if (local_44 != 0) {
              lVar4 = *(long *)(param_1 + 0x100);
              if (lVar4 == 0) goto LAB_0413b604;
              lVar6 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_0413b604;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = local_44;
              }
              else {
                FUN_05799adc(lVar4,local_44,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      AnhPD_FoodOrder_FlexibleDragItem__MarkVisualDirty(param_1,0);
      return;
    }
  }
LAB_0413b600:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

