// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$RefillBag
// address: 0x421998c
// body: available
// range: 0x421998c-0x4219b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4219b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4219b20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader__RefillBag(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516ced & 1) == 0) {
    FUN_03f5c2a4(&DAT_091830e8);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_09516ced = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x50),DAT_091b05a8);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  while( true ) {
    do {
      uVar4 = FUN_071bd28c(&local_50,DAT_091a45a0);
      uVar3 = local_40;
      if ((uVar4 & 1) == 0) {
        FUN_071bd288(&local_50,DAT_091a4598);
        return;
      }
      uVar4 = System_String__IsNullOrEmpty(local_40,0);
    } while ((uVar4 & 1) != 0);
    if (*(int *)(DAT_091830e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = DAT_091b0570;
    lVar5 = **(long **)(DAT_091830e8 + 0xb8);
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar3;
      thunk_FUN_03f5d7b8(puVar7,uVar3);
    }
    else {
      FUN_057e0c68(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

