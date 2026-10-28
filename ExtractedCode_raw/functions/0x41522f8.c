// rea decompile_all
// name: AnhPD.FoodOrder.PastaPieceDisplay$$Display
// address: 0x41522f8
// body: available
// range: 0x41522f8-0x41525c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41525bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41525c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PastaPieceDisplay__Display(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_095164c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5650);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164c1 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_04a6a6d8(param_1,DAT_091c5650);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar7);
  }
  lVar8 = DAT_09189158;
  *(undefined1 *)(param_1 + 0x49) = 1;
  uVar12 = param_2[1];
  uVar7 = *param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = uVar12;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2,0);
  AnhPD_FoodOrder_PastaPieceDisplay__ShowContainer(param_1,(uVar3 ^ 0xffffffff) & 1);
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    uVar3 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar3) {
      uVar9 = 0;
      do {
        if (uVar3 <= uVar9) {
LAB_041525bc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_041525c0;
        uVar7 = *(undefined8 *)(lVar10 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2,0);
          if ((uVar5 & 1) == 0) {
            uVar7 = *(undefined8 *)(lVar10 + 0x30);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            bVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
          }
          else {
            bVar2 = 0;
          }
          lVar11 = *(long *)(lVar10 + 0x18);
          if (lVar11 == 0) goto LAB_041525c0;
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar5 = 0;
            uVar6 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar5) goto LAB_041525bc;
              uVar1 = *(undefined4 *)(lVar11 + 0x20 + uVar5 * 4);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
              uVar6 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar5 = uVar5 + 1;
              bVar2 = bVar2 & 0 < iVar4;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          lVar11 = *(long *)(lVar10 + 0x20);
          if (lVar11 == 0) goto LAB_041525c0;
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar5 = 0;
            uVar6 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar5) goto LAB_041525bc;
              uVar1 = *(undefined4 *)(lVar11 + 0x20 + uVar5 * 4);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
              uVar6 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar5 = uVar5 + 1;
              bVar2 = bVar2 & iVar4 == 0;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          if ((*(long *)(lVar10 + 0x28) == 0) ||
             (lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar10 + 0x28),0),
             lVar11 == 0)) goto LAB_041525c0;
          UnityEngine_GameObject__SetActive(lVar11,bVar2 & 1,0);
          if ((bVar2 & 1) != 0) {
            if (*(long *)(lVar10 + 0x28) == 0) goto LAB_041525c0;
            UnityEngine_SpriteRenderer__set_sprite
                      (*(long *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30),0);
          }
        }
        uVar3 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar3);
    }
    return;
  }
LAB_041525c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

