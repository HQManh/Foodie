// rea decompile_all
// name: AnhPD.FoodOrder.OrderModel$$OpenDisplayIds
// address: 0x4213e50
// body: available
// range: 0x4213e50-0x4213ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4213ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4213ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4213ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderModel__OpenDisplayIds(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_09516cba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5690);
    FUN_03f5c2a4(&DAT_091a5698);
    FUN_03f5c2a4(&DAT_091a56a0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b3508);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516cba = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar4,DAT_091b0558);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x10),DAT_091b3508);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  while( true ) {
    do {
      uVar5 = FUN_071bd28c(&local_50,DAT_091a5698);
      lVar3 = local_40;
      if ((uVar5 & 1) == 0) {
        FUN_071bd288(&local_50,DAT_091a5690);
        return lVar4;
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = AnhPD_FoodOrder_OrderModel_OrderSlot__get_IsOwed(local_40,0);
      lVar2 = DAT_091b0570;
    } while ((uVar5 & 1) == 0);
    if (lVar4 == 0) break;
    lVar7 = *(long *)(lVar4 + 0x10);
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

