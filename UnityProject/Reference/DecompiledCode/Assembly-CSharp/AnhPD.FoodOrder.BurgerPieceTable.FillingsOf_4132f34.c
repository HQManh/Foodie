// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$FillingsOf
// address: 0x4132f34
// body: available
// range: 0x4132f34-0x4133123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4133120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerPieceTable__FillingsOf(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_34;
  
  if ((DAT_09516385 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_0919c5e8);
    FUN_03f5c2a4(&DAT_091b2ab0);
    FUN_03f5c2a4(&DAT_091b2ae0);
    FUN_03f5c2a4(&DAT_091b2aa0);
    FUN_03f5c2a4(&DAT_0917d380);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516385 = 1;
  }
  local_50 = 0;
  local_34 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917d380);
  FUN_0579924c(lVar3,DAT_091b2aa0);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_70,param_1,0);
  uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70,0);
  uVar6 = local_50;
  while (local_50 = uVar6, (uVar4 & 1) != 0) {
    local_50._0_4_ = (int)uVar6;
    bVar1 = (int)local_50 != 0;
    if (bVar1) {
      local_50._4_4_ = (int)(uVar6 >> 0x20);
      iVar8 = local_50._4_4_;
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = AnhPD_FoodOrder_BurgerPieceTable__get_PieceToFilling();
      if (lVar5 == 0) goto LAB_04133120;
      uVar6 = FUN_06f32264(lVar5,uVar6 & 0xffffffff,&local_34,DAT_0919c5e8);
      if (((uVar6 & 1) != 0) && (0 < iVar8)) {
        lVar5 = DAT_091b2ab0;
        if (lVar3 == 0) goto LAB_04133120;
        do {
          lVar7 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_04133120;
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = local_34;
          }
          else {
            FUN_05799adc(lVar3,local_34,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            lVar5 = DAT_091b2ab0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70,0);
    uVar6 = local_50;
  }
  if (lVar3 != 0) {
    FUN_0579b500(lVar3,DAT_091b2ae0);
    return lVar3;
  }
LAB_04133120:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

