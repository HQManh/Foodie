// rea decompile_all
// name: CakeOrder.LevelIngredientQueuesConfig$$TryParseStatus
// address: 0x4264d84
// body: available
// range: 0x4264d84-0x4264ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_LevelIngredientQueuesConfig__TryParseStatus
               (undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((DAT_09516fa6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516fa6 = 1;
  }
  lVar1 = DAT_0918b3a0;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  uStack_50 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_d8,param_1,param_2,0x3a,0);
  local_80 = local_b8;
  uStack_98 = uStack_d0;
  local_a0 = local_d8;
  uStack_88 = uStack_c0;
  uStack_90 = local_c8;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_70,&local_a0,0);
  uVar2 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
  if ((uVar2 & 1) != 0) {
    iVar3 = 0;
    do {
      uStack_a8 = uStack_50;
      local_b0 = local_58;
      if (iVar3 == 1) {
        Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_b0,param_4,0);
      }
      else {
        if (iVar3 != 0) break;
        uVar2 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_b0,param_3,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      uVar2 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
    } while ((uVar2 & 1) != 0);
  }
  return ~*param_3 >> 0x1f;
}

