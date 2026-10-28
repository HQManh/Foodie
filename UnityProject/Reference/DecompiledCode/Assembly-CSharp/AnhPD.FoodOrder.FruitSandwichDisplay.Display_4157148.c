// rea decompile_all
// name: AnhPD.FoodOrder.FruitSandwichDisplay$$Display
// address: 0x4157148
// body: available
// range: 0x4157148-0x41574f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41574cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41574f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FruitSandwichDisplay__Display(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_58;
  
  if ((DAT_095164d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2d38);
    FUN_03f5c2a4(&DAT_091a2d40);
    FUN_03f5c2a4(&DAT_091a2d48);
    FUN_03f5c2a4(&DAT_091b0298);
    FUN_03f5c2a4(&DAT_091b02a8);
    FUN_03f5c2a4(&DAT_091acd60);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b02d0);
    FUN_03f5c2a4(&DAT_091b02d8);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164d7 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_58 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,9,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_057e185c(&local_c8,*(long *)(param_1 + 0x20),DAT_091acd60);
    local_70 = local_b8;
    puStack_78 = puStack_c0;
    local_80 = local_c8;
    local_c8 = 0;
    puStack_c0 = &local_80;
    while (uVar6 = FUN_071bd28c(&local_80,DAT_091a2d40), lVar9 = local_70, (uVar6 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar9,0);
      if ((uVar6 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar9,0 < iVar5,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a2d38);
    lVar9 = *(long *)(param_1 + 0x40);
    if (lVar9 != 0) {
      iVar5 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar5) {
        System_Array__Clear(*(undefined8 *)(lVar9 + 0x10),0,iVar5,0);
      }
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_b0,param_2,0);
      uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0);
      while ((uVar6 & 1) != 0) {
        if ((0 < (int)((ulong)local_90 >> 0x20)) &&
           (uVar6 = AnhPD_FoodOrder_FruitSandwichDisplay__TryGetSprite(param_1,local_90,&local_58),
           lVar9 = DAT_091b0298, (uVar6 & 1) != 0)) {
          lVar7 = *(long *)(param_1 + 0x40);
          if (lVar7 == 0) goto LAB_041574cc;
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_041574cc;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *puVar11 = local_58;
            thunk_FUN_03f5d7b8(puVar11);
          }
          else {
            FUN_057e0c68(lVar7,local_58,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0);
      }
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar5) {
            return;
          }
          lVar9 = FUN_057e0998(lVar9,iVar5,DAT_091b0430);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar6 = UnityEngine_Object__op_Implicit(lVar9,0);
          if ((uVar6 & 1) != 0) {
            if ((*(long *)(param_1 + 0x40) == 0) || (lVar9 == 0)) break;
            iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
            lVar7 = UnityEngine_Component__get_gameObject(lVar9,0);
            if (lVar7 == 0) break;
            UnityEngine_GameObject__SetActive(lVar7,0 < iVar1,0);
            if (0 < iVar1) {
              lVar7 = *(long *)(param_1 + 0x40);
              if (lVar7 == 0) break;
              iVar1 = *(int *)(param_1 + 0x28);
              iVar3 = 0;
              if (iVar1 != 0) {
                iVar3 = iVar5 / iVar1;
              }
              iVar3 = iVar5 - iVar3 * iVar1;
              iVar1 = *(int *)(lVar7 + 0x18);
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iVar3 / iVar1;
              }
              uVar8 = FUN_057e0998(lVar7,iVar3 - iVar4 * iVar1,DAT_091b02d8);
              UnityEngine_SpriteRenderer__set_sprite(lVar9,uVar8,0);
            }
          }
          lVar9 = *(long *)(param_1 + 0x30);
          iVar5 = iVar5 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_041574cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

