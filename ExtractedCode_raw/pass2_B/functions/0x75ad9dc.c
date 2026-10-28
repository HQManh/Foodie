// rea decompile_all
// name: System.Guid$$TryParseGuid
// address: 0x75ad9dc
// body: available
// range: 0x75ad9dc-0x75adb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Guid__TryParseGuid
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09521c9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f40);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09212550);
    DAT_09521c9c = 1;
  }
  System_MemoryExtensions__TrimStart(param_1,param_2);
  auVar7 = System_MemoryExtensions__TrimEnd();
  uVar6 = auVar7._8_8_;
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ != 0) {
    iVar1 = FUN_04501efc(uVar5,uVar6,0x2d,DAT_091d2f40);
    if (iVar1 < 0) {
      if ((param_3 >> 6 & 1) == 0) goto LAB_075ada84;
    }
    else if ((param_3 & 0x44) != 0) {
LAB_075ada84:
      iVar2 = FUN_04501efc(uVar5,uVar6,0x7b,DAT_091d2f40);
      if (iVar2 < 0) {
        if ((param_3 >> 5 & 1) == 0) goto LAB_075adab4;
      }
      else if ((param_3 & 0x22) != 0) {
LAB_075adab4:
        iVar3 = FUN_04501efc(uVar5,uVar6,0x28,DAT_091d2f40);
        if (iVar3 < 0) {
          if ((param_3 >> 4 & 1) == 0) goto LAB_075adad8;
        }
        else if ((param_3 & 0x11) != 0) {
LAB_075adad8:
          if (iVar1 < 0) {
            if (iVar2 < 0) {
              uVar4 = System_Guid__TryParseGuidWithNoStyle(uVar5,uVar6,param_4);
            }
            else {
              uVar4 = System_Guid__TryParseGuidWithHexPrefix(uVar5,uVar6,param_4);
            }
          }
          else {
            uVar4 = System_Guid__TryParseGuidWithDashes(uVar5,uVar6,param_4);
          }
          goto LAB_075adb1c;
        }
      }
    }
  }
  System_Guid_GuidResult__SetFailure(param_4,2,DAT_09212550,0,0,0);
  uVar4 = 0;
LAB_075adb1c:
  return uVar4 & 1;
}

