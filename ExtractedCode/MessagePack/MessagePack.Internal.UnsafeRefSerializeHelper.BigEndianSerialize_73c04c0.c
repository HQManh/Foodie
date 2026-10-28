// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$BigEndianSerialize
// address: 0x73c04c0
// body: available
// range: 0x73c04c0-0x73c061b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeRefSerializeHelper__BigEndianSerialize
               (undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_09520c92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de3b0);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de188);
    DAT_09520c92 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0xe38e38d < param_3) {
        uVar2 = 0xe38e38e;
      }
      auVar10 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 9,0);
      uVar4 = FUN_04c072b0(auVar10._0_8_,auVar10._8_8_,DAT_091d3028);
      uVar8 = 0;
      lVar9 = 0;
      do {
        puVar5 = (undefined1 *)FUN_04e35cf0(uVar4,lVar9,DAT_091de150);
        *puVar5 = 0xcb;
        puVar6 = (undefined8 *)FUN_04e35cf0(uVar4,lVar9 + 1,DAT_091de150);
        puVar7 = (undefined8 *)FUN_04e35f20(param_2,uVar8,DAT_091de188);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 9;
        *puVar6 = *puVar7;
      } while (uVar2 != uVar8);
      MessagePack_MessagePackWriter__Advance(param_1,uVar2 * 9,0);
      param_2 = param_2 + (ulong)uVar2 * 8;
      uVar3 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}

