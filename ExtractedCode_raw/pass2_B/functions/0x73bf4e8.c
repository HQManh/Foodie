// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bf4e8
// body: available
// range: 0x73bf4e8-0x73bf4eb inclusive
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
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09520c87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de428);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de178);
    DAT_09520c87 = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0x2aaaaaa9 < param_3) {
        uVar2 = 0x2aaaaaaa;
      }
      auVar12 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 3,0);
      uVar5 = FUN_04c072b0(auVar12._0_8_,auVar12._8_8_,DAT_091d3028);
      uVar10 = 0;
      uVar11 = 0;
      do {
        puVar6 = (undefined1 *)FUN_04e35cf0(uVar5,uVar10,DAT_091de150);
        puVar7 = (ushort *)FUN_04e35e80(param_2,uVar11,DAT_091de178);
        uVar3 = *puVar7;
        if (uVar3 < 0x100) {
          uVar9 = (undefined1)uVar3;
          if ((uVar3 >> 7 & 1) == 0) {
            lVar8 = 1;
          }
          else {
            puVar6[1] = uVar9;
            uVar9 = 0xcc;
            lVar8 = 2;
          }
          *puVar6 = uVar9;
        }
        else {
          *puVar6 = 0xcd;
          *(ushort *)(puVar6 + 1) = uVar3 >> 8 | uVar3 << 8;
          lVar8 = 3;
        }
        uVar11 = uVar11 + 1;
        uVar10 = lVar8 + uVar10;
      } while (uVar2 != uVar11);
      if (uVar10 >> 0x1f != 0) {
        uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,DAT_091de428);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar10 & 0xffffffff,0);
      param_2 = param_2 + (ulong)uVar2 * 2;
      uVar4 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  return;
}

