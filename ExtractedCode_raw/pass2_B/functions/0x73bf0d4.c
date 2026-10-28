// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bf0d4
// body: available
// range: 0x73bf0d4-0x73bf0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeRefSerializeHelper__LittleEndianSerialize
               (undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09520c83 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de418);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de170);
    DAT_09520c83 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0x3ffffffe < param_3) {
        uVar2 = 0x3fffffff;
      }
      auVar11 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 << 1,0);
      uVar4 = FUN_04c072b0(auVar11._0_8_,auVar11._8_8_,DAT_091d3028);
      uVar9 = 0;
      uVar10 = 0;
      do {
        pcVar5 = (char *)FUN_04e35cf0(uVar4,uVar9,DAT_091de150);
        pcVar6 = (char *)FUN_04e35e30(param_2,uVar10,DAT_091de170);
        cVar7 = *pcVar6;
        if (cVar7 < -0x20) {
          pcVar5[1] = cVar7;
          cVar7 = -0x30;
          lVar8 = 2;
        }
        else {
          lVar8 = 1;
        }
        uVar10 = uVar10 + 1;
        uVar9 = lVar8 + uVar9;
        *pcVar5 = cVar7;
      } while (uVar2 != uVar10);
      if (uVar9 >> 0x1f != 0) {
        uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,DAT_091de418);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar9 & 0xffffffff,0);
      uVar3 = param_3 - uVar2;
      param_2 = param_2 + (ulong)uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}

