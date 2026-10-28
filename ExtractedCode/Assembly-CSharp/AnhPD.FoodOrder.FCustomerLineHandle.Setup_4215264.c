// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$Setup
// address: 0x4215264
// body: available
// range: 0x4215264-0x421560b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4215608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle__Setup(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  if ((DAT_09516cab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174690);
    FUN_03f5c2a4(&DAT_091830d0);
    FUN_03f5c2a4(&DAT_091830e0);
    FUN_03f5c2a4(&DAT_09183120);
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091cc120);
    FUN_03f5c2a4(&DAT_091787b0);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091d5658);
    FUN_03f5c2a4(&DAT_09188d08);
    DAT_09516cab = 1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_09188d08);
  AnhPD_FoodOrder_OrderPricingService___ctor(uVar3,0);
  puVar8 = (undefined8 *)(param_1 + 0xe0);
  *puVar8 = uVar3;
  thunk_FUN_03f5d7b8(puVar8,uVar3);
  uVar3 = UnityEngine_Component__get_transform(param_1,0);
  uVar16 = *(undefined4 *)(param_1 + 0x4c);
  uVar15 = *(undefined4 *)(param_1 + 0x50);
  uVar18 = *(undefined4 *)(param_1 + 100);
  uVar19 = *(undefined4 *)(param_1 + 0x68);
  uVar21 = *(undefined4 *)(param_1 + 0x3c);
  uVar22 = *(undefined4 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar17 = *(undefined4 *)(param_1 + 0x54);
  uVar20 = *(undefined4 *)(param_1 + 0x6c);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  uVar4 = thunk_FUN_03f9944c(DAT_091830d0);
  AnhPD_FoodOrder_CustomerLineLayout___ctor
            (uVar21,uVar16,uVar15,uVar17,uVar18,uVar19,uVar20,uVar22,uVar4,uVar3,uVar10,uVar1,uVar12
             ,uVar2);
  puVar13 = (undefined8 *)(param_1 + 0xc0);
  *puVar13 = uVar4;
  thunk_FUN_03f5d7b8(puVar13,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uVar10 = *puVar13;
  uVar3 = thunk_FUN_03f9944c(DAT_091830e0);
  AnhPD_FoodOrder_CustomerLineQuery___ctor(uVar3,uVar4,uVar10);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  uVar10 = UnityEngine_Component__get_transform(param_1,0);
  uVar14 = *puVar13;
  uVar12 = thunk_FUN_03f9944c(DAT_09174690);
  FUN_070a8c30(uVar12,param_1,DAT_091cc120,0);
  uVar9 = *puVar8;
  uVar5 = thunk_FUN_03f9944c(DAT_091787b0);
  FUN_05324070(uVar5,uVar9,DAT_091d5658,0);
  uVar16 = *(undefined4 *)(param_1 + 0x70);
  uVar17 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  uVar15 = *(undefined4 *)(param_1 + 0x60);
  uVar18 = *(undefined4 *)(param_1 + 0x78);
  uVar19 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined1 *)(param_1 + 0xa0);
  uVar20 = *(undefined4 *)(param_1 + 0x80);
  uVar21 = *(undefined4 *)(param_1 + 0x84);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = *(undefined4 *)(param_1 + 0x88);
  uVar23 = *(undefined4 *)(param_1 + 0x8c);
  uVar9 = thunk_FUN_03f9944c(DAT_09183120);
  AnhPD_FoodOrder_CustomerSpawner___ctor
            (uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar9,uVar3,uVar7,uVar4,uVar10,
             uVar14,uVar12,uVar5,param_2,uVar15,uVar1,uVar2,uVar11);
  *(undefined8 *)(param_1 + 200) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar9);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x20),DAT_091acac8);
    while (uVar6 = FUN_071bd28c(&local_b8,DAT_091a2c68), (uVar6 & 1) != 0) {
      AnhPD_FoodOrder_FCustomerLineHandle__RegisterLine(param_1,local_a8);
    }
    FUN_071bd288(&local_b8,DAT_091a2c60);
    AnhPD_FoodOrder_FCustomerLineHandle__SetBossAlert(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

