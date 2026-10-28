// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$LittleEndianSerialize
// address: 0x73bfb90
// body: available
// range: 0x73bfb90-0x73bfb93 inclusive
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
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_09520c8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091de410);
    FUN_03f5c2a4(&DAT_091de150);
    FUN_03f5c2a4(&DAT_091de168);
    DAT_09520c8d = 1;
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3;
      if (0xe38e38d < param_3) {
        uVar2 = 0xe38e38e;
      }
      auVar13 = MessagePack_MessagePackWriter__GetSpan(param_1,uVar2 * 9,0);
      uVar4 = FUN_04c072b0(auVar13._0_8_,auVar13._8_8_,DAT_091d3028);
      uVar11 = 0;
      uVar12 = 0;
      do {
        puVar5 = (undefined1 *)FUN_04e35cf0(uVar4,uVar11,DAT_091de150);
        puVar6 = (ulong *)FUN_04e35de0(param_2,uVar12,DAT_091de168);
        uVar8 = *puVar6;
        uVar7 = (uint)uVar8;
        uVar9 = (undefined1)uVar8;
        uVar3 = (ushort)(uVar8 >> 8);
        if ((long)uVar8 < 0) {
          if (uVar8 < 0xffffffff80000000) {
            *puVar5 = 0xd3;
            goto LAB_073bfccc;
          }
          if (uVar7 < 0xffff8000) {
            uVar9 = 0xd2;
            goto LAB_073bfcf0;
          }
          if ((uVar7 >> 7 & 0x1ff) < 0x1ff) {
            uVar3 = uVar3 & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
            uVar9 = 0xd1;
            goto LAB_073bfd18;
          }
          if ((uVar7 & 0xff) < 0xe0) {
            puVar5[1] = uVar9;
            uVar8 = 0xd0;
            lVar10 = 2;
          }
          else {
            lVar10 = 1;
          }
          *puVar5 = (char)uVar8;
        }
        else if (uVar8 >> 0x20 == 0) {
          if ((uVar8 >> 0x10 & 0xffff) == 0) {
            if ((uVar7 & 0xffff) < 0x100) {
              if ((uVar7 >> 7 & 1) == 0) {
                lVar10 = 1;
              }
              else {
                puVar5[1] = uVar9;
                uVar9 = 0xcc;
                lVar10 = 2;
              }
              *puVar5 = uVar9;
            }
            else {
              uVar3 = uVar3 & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
              uVar9 = 0xcd;
LAB_073bfd18:
              *puVar5 = uVar9;
              lVar10 = 3;
              *(ushort *)(puVar5 + 1) = uVar3;
            }
          }
          else {
            uVar9 = 0xce;
LAB_073bfcf0:
            uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
            *puVar5 = uVar9;
            lVar10 = 5;
            *(uint *)(puVar5 + 1) = uVar7 >> 0x10 | uVar7 << 0x10;
          }
        }
        else {
          *puVar5 = 0xcf;
LAB_073bfccc:
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          lVar10 = 9;
          *(ulong *)(puVar5 + 1) = uVar8 >> 0x20 | uVar8 << 0x20;
        }
        uVar12 = uVar12 + 1;
        uVar11 = lVar10 + uVar11;
      } while (uVar2 != uVar12);
      if (uVar11 >> 0x1f != 0) {
        uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,DAT_091de410);
      }
      MessagePack_MessagePackWriter__Advance(param_1,uVar11 & 0xffffffff,0);
      param_2 = param_2 + (ulong)uVar2 * 8;
      uVar7 = param_3 - uVar2;
      bVar1 = (int)uVar2 <= (int)param_3;
      param_3 = uVar7;
    } while (uVar7 != 0 && bVar1);
  }
  return;
}

