// rea decompile_all
// name: AnhPD.FoodOrder.UIHint$$EnsureHolder
// address: 0x4127ab8
// body: available
// range: 0x4127ab8-0x4127c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4127c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4127c84 to 0x57e0998 FUN_057e0998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHint__EnsureHolder(long param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((DAT_095162e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b13b0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b13c0);
    FUN_03f5c2a4(&DAT_091b13c8);
    FUN_03f5c2a4(&DAT_091d4da8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162e4 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x118);
  while (lVar7 != 0) {
    if (param_2 < *(int *)(lVar7 + 0x18)) {
      FUN_057e0998(lVar7,param_2,DAT_091b13c8);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = FUN_04c353a8(uVar3,uVar1,0,DAT_091d4da8);
    lVar4 = DAT_091b13b0;
    lVar5 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = DAT_091b0570;
    lVar4 = *(long *)(param_1 + 0x120);
    if (lVar4 == 0) break;
    lVar5 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = 0;
      thunk_FUN_03f5d7b8(puVar6,0);
    }
    else {
      FUN_057e0c68(lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *(long *)(param_1 + 0x118);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

