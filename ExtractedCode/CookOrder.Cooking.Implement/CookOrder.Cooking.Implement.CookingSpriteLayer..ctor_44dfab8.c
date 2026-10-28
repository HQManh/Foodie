// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingSpriteLayer$$.ctor
// address: 0x44dfab8
// body: available
// range: 0x44dfab8-0x44dfb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingSpriteLayer___ctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8,
               char *param_9)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_09518355 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6b18);
    FUN_03f5c2a4(&DAT_091b6b20);
    DAT_09518355 = 1;
  }
  *param_6 = param_7;
  thunk_FUN_03f5d7b8(param_6,param_7);
  *(undefined4 *)(param_6 + 1) = param_1;
  *(undefined4 *)((long)param_6 + 0xc) = param_2;
  *(undefined4 *)(param_6 + 2) = param_3;
  *(undefined4 *)((long)param_6 + 0x14) = param_4;
  *(undefined4 *)(param_6 + 3) = param_5;
  cVar1 = *param_9;
  uVar3 = *(undefined4 *)(param_9 + 4);
  uVar5 = *(undefined4 *)(param_9 + 8);
  uVar6 = *(undefined4 *)(param_9 + 0xc);
  uVar7 = *(undefined4 *)(param_9 + 0x10);
  *(undefined4 *)((long)param_6 + 0x2c) = param_8;
  bVar2 = cVar1 != '\0';
  uVar4 = 0x3f800000;
  if (bVar2) {
    uVar4 = uVar3;
  }
  uVar3 = 0x3f800000;
  if (bVar2) {
    uVar3 = uVar5;
  }
  uVar5 = 0x3f800000;
  if (bVar2) {
    uVar5 = uVar6;
  }
  uVar6 = 0x3f800000;
  if (bVar2) {
    uVar6 = uVar7;
  }
  *(undefined4 *)((long)param_6 + 0x1c) = uVar4;
  *(undefined4 *)(param_6 + 4) = uVar3;
  *(undefined4 *)((long)param_6 + 0x24) = uVar5;
  *(undefined4 *)(param_6 + 5) = uVar6;
  return;
}

