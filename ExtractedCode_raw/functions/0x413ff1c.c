// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$RollDish
// address: 0x413ff1c
// body: available
// range: 0x413ff1c-0x4140097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4140094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CafeOrderStrategy__RollDish(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095163c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab9e0);
    FUN_03f5c2a4(&DAT_091ab9d0);
    FUN_03f5c2a4(&DAT_0917be38);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163c3 = 1;
  }
  local_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917be38);
  FUN_0579924c(lVar4,DAT_091ab9d0);
  AnhPD_FoodOrder_CafeOrderStrategy__RollFamily(&local_78,param_1);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_60,&local_78,0);
  uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_60,0);
  uVar2 = local_40;
  lVar6 = DAT_091ab9e0;
  do {
    if ((uVar5 & 1) == 0) {
      DAT_091ab9e0 = lVar6;
      return lVar4;
    }
    local_40._4_4_ = (int)(uVar2 >> 0x20);
    uVar5 = uVar2;
    DAT_091ab9e0 = lVar6;
    if (0 < local_40._4_4_) {
      if (lVar4 == 0) {
LAB_04140094:
        local_40 = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40._0_4_ = (undefined4)uVar2;
      uVar3 = (undefined4)local_40;
      iVar8 = local_40._4_4_;
      local_40 = uVar2;
      do {
        lVar7 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        uVar5 = local_40;
        if (lVar7 == 0) goto LAB_04140094;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
        }
        else {
          FUN_05799adc(lVar4,uVar2 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          lVar6 = DAT_091ab9e0;
        }
        iVar8 = iVar8 + -1;
        uVar5 = local_40;
      } while (iVar8 != 0);
    }
    local_40 = uVar5;
    uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_60,0);
    uVar2 = local_40;
    lVar6 = DAT_091ab9e0;
  } while( true );
}

