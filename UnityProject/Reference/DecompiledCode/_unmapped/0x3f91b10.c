// rea decompile_all
// name: FUN_03f91b10
// address: 0x3f91b10
// body: available
// range: 0x3f91b10-0x3f91c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f91b10(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long local_60;
  long local_58;
  int local_4c;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  local_38 = param_2;
  FUN_03f5d894(auStack_40,&DAT_09534e38);
  local_48 = 0;
  local_4c = 0;
  uVar1 = FUN_03f8e024(param_1,0,0,&local_48,param_4,0,&local_4c);
  if (local_4c == 0) {
    local_58 = param_3;
    local_60 = FUN_03f8e1d8(uVar1,&local_38,param_3,param_4,&local_58,&local_4c);
    if (local_60 != 0) {
      local_60 = local_60 + (param_3 - local_58);
      uVar2 = FUN_03f8e3ac(uVar1);
      if ((uVar2 & 1) != 0) {
        local_28 = (undefined1 *)&local_60;
        lVar3 = FUN_03f91ff8(&DAT_09534e88,&local_60,&DAT_023abc9a,&local_28,&uStack_29);
        *(undefined8 *)(lVar3 + 0x28) = uVar1;
      }
      uVar1 = local_38;
      local_28 = (undefined1 *)&local_60;
      lVar3 = FUN_03f920a8(&DAT_09534ea0,&local_60,&DAT_023abc9a,&local_28,&uStack_29);
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      lVar3 = local_60;
      goto LAB_03f91c18;
    }
  }
  lVar3 = 0;
LAB_03f91c18:
  FUN_03f5d920(auStack_40);
  return lVar3;
}

