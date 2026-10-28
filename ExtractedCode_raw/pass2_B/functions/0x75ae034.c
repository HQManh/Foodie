// rea decompile_all
// name: System.Guid$$TryParseExact
// address: 0x75ae034
// body: available
// range: 0x75ae034-0x75ae17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Guid__TryParseExact
          (undefined8 param_1,undefined8 param_2,ushort *param_3,int param_4,undefined8 *param_5)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09521c9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c9b = 1;
  }
  if (param_4 != 1) goto LAB_075ae15c;
  uVar1 = *param_3;
  if (uVar1 < 0x59) {
    if (uVar1 < 0x45) {
      if (uVar1 != 0x42) {
        if (uVar1 != 0x44) goto LAB_075ae15c;
        goto LAB_075ae0d4;
      }
LAB_075ae118:
      uVar3 = 0x60;
    }
    else if (uVar1 == 0x4e) {
LAB_075ae128:
      uVar3 = 0;
    }
    else {
      if (uVar1 != 0x50) {
        if (uVar1 != 0x58) goto LAB_075ae15c;
        goto LAB_075ae110;
      }
LAB_075ae120:
      uVar3 = 0x50;
    }
  }
  else if (uVar1 < 0x65) {
    if (uVar1 == 0x62) goto LAB_075ae118;
    if (uVar1 != 100) goto LAB_075ae15c;
LAB_075ae0d4:
    uVar3 = 0x40;
  }
  else {
    if (uVar1 == 0x6e) goto LAB_075ae128;
    if (uVar1 == 0x70) goto LAB_075ae120;
    if (uVar1 != 0x78) goto LAB_075ae15c;
LAB_075ae110:
    uVar3 = 0xa0;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar2 = System_Guid__TryParseGuid(param_1,param_2,uVar3,&local_80);
  if ((uVar2 & 1) != 0) {
    param_5[1] = uStack_78;
    *param_5 = local_80;
    return 1;
  }
LAB_075ae15c:
  *param_5 = 0;
  param_5[1] = 0;
  return 0;
}

