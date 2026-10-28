// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSandwich$$GetIngIds
// address: 0x4156650
// body: available
// range: 0x4156650-0x4156a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4156a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4156a10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleSandwich__GetIngIds(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_118;
  undefined8 *puStack_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095164ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175a88);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091ccc98);
    FUN_03f5c2a4(&DAT_091aa9f0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091aaa08);
    FUN_03f5c2a4(&DAT_091aa9e8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917bb18);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_095164ce = 1;
  }
  local_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_c0 = 0;
  local_d8 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917bb18);
  FUN_056ad834(lVar4,DAT_091aa9e8);
  AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_f0,*(undefined8 *)(param_1 + 0x78),param_2,0);
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  local_a0 = local_e0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_118,&local_b0,0);
  uStack_88 = puStack_110;
  local_90 = local_118;
  uStack_78 = uStack_100;
  uStack_80 = local_108;
  local_70 = local_f8;
  uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) goto LAB_04156a10;
    do {
      lVar7 = DAT_091aa9f0;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_04156a10;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = local_70;
      }
      else {
        FUN_056ae0c0(lVar4,local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
    } while ((uVar5 & 1) != 0);
  }
  uVar6 = thunk_FUN_03f9944c(DAT_09175a88);
  FUN_06d403e0(uVar6,param_1,DAT_091ccc98,0);
  if (lVar4 != 0) {
    FUN_056afbc8(lVar4,uVar6,DAT_091aaa08);
    lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar7,DAT_091b0558);
    FUN_056aec8c(&local_118,lVar4,DAT_091aaa00);
    local_c0 = local_108;
    uStack_c8 = puStack_110;
    local_d0 = local_118;
    local_118 = 0;
    puStack_110 = &local_d0;
    while( true ) {
      do {
        uVar8 = FUN_07188168(&local_d0,DAT_091a1f50);
        uVar5 = local_c0;
        if ((uVar8 & 1) == 0) {
          FUN_07188164(&local_d0,DAT_091a1f48);
          return lVar7;
        }
        uVar1 = *(undefined4 *)(param_1 + 0xfc);
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar3 = AnhPD_FoodOrder_SandwichPieceTable__TryGetFormOf
                          (uVar1,uVar5 & 0xffffffff,&local_d8,0);
        uVar8 = uVar5 >> 0x20;
      } while ((bVar3 & 0 < (int)(uVar5 >> 0x20)) != 1);
      if (lVar7 == 0) break;
      do {
        lVar4 = DAT_091b0570;
        lVar9 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_04156a0c;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = local_d8;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,local_d8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        uVar2 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar2;
      } while (uVar2 != 0);
    }
LAB_04156a0c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04156a10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

