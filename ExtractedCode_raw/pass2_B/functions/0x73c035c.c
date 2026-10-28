// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73c035c
// body: available
// range: 0x73c035c-0x73c035f inclusive
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
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09520c93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de3f8);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de188);
    DAT_09520c93 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0xe38e38d < param_3) {
        uVar2 = 0xe38e38e;
      }
      auVar11 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 9,0);
      uVar5 = FUN_04c072b0(auVar11._0_8_,auVar11._8_8_,DAT_091d3028);
      uVar9 = 0;
      lVar10 = 0;
      do {
        puVar6 = (undefined1 *)FUN_04e35cf0(uVar5,lVar10,DAT_091de150);
        *puVar6 = 0xcb;
        puVar7 = (ulong *)FUN_04e35cf0(uVar5,lVar10 + 1,DAT_091de150);
        puVar8 = (ulong *)FUN_04e35f20(param_2,uVar9,DAT_091de188);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 9;
        uVar3 = (*puVar8 & 0xff00ff00ff00ff00) >> 8 | (*puVar8 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        *puVar7 = uVar3 >> 0x20 | uVar3 << 0x20;
      } while (uVar2 != uVar9);
      MessagePack_MessagePackWriter__Advance(param_1,uVar2 * 9,0);
      param_2 = param_2 + (ulong)uVar2 * 8;
      uVar4 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  return;
}

